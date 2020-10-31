#include <iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int n,a,b;
	cin>>n>>a>>b;
	int a1=min(a,b);
	int b1=max(a,b);
	while(a1)
	{
	//	cout<<"A1 = "<<a1<<endl;
		int t1=min(a,b);
		int t2=max(a,b);
		for(int i=0;i<n;i++)
		{
			if(t1-a1>=0)
			{
			//	cout<<"t1="<<t1<<"==>";
				t1-=a1;
			//	cout<<t1<<endl;
			}
			else if(t2-a1>=0)
			{
			//	cout<<"t2="<<t2<<"==>";
				t2-=a1;
			//	cout<<t2<<endl;
			}
			else 
			break;
			if(i==n-1)
			{
				cout<<a1<<endl;
				exit(0);
			}
		}
		a1--;
	}
	return 0;
}