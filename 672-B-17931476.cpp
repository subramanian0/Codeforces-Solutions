#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char a[100005];
int main()
{
	int buff[27]={0};
	int n;
	cin>>n;
	cin>>a;
	int cnt=0;
	if(n>26)
	printf("-1");
	else
	{
		for(int i=0;i<strlen(a);i++)
		{
			buff[a[i]-'a']++;
			if(buff[a[i]-'a']>1)
			cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}