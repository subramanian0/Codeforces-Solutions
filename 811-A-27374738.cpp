#include <iostream>
using namespace std;

int main() {
	int cnt=1,f=0;
	int a,b;
	cin>>a>>b;
	while(true)
	{
		if(a<cnt) {f=1;break;}
		a-=cnt;
		cnt++;
		if(b<cnt) {f=2;break;}
		b-=cnt;
		cnt++;
	}
	if(f==1) cout<<"Vladik"<<endl;
	else cout<<"Valera"<<endl;
	
	return 0;
}