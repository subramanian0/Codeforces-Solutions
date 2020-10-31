#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n,x,k,cnt=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>k)cnt+=2;
		else cnt+=1;
	}
	printf("%d\n",cnt);
	return 0;
}