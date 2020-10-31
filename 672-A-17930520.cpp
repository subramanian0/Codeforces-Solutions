#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
using namespace std;
string rev(int n)
{
	string str;
	stringstream ss;
	ss<<n;
	str=ss.str();
	return str;
}
int main()
{
	char buff[1502];
	int k=0;
	int n;
	cin>>n;
	for(int i=1;k<=n;i++)
	{
		string t=rev(i);
			for(int j=0;j<t.length();j++)
			{
				buff[k]=t[j];
				k++;
			}
	}
	printf("%c",buff[n-1]);
	return 0;
}