#include <iostream>
using namespace std;
int can(int m, int s)
{
	return (m*9>=s || (s==0));
}
int main() {
	int m,s,sum;
	string minVal = "0", maxVal = "0";
	cin>>m>>s;
	sum = s;
	string res = "";
	bool nonZero = true;
	if(m==1 && s==0) {
		cout<<"0 0"<<endl;
		return 0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<=9;j++)
		{
			if(j==0 && nonZero) continue;
			if(can(m-i-1,s-j) && s-j>=0)
			{
				res+= char('0'+j);
				s-=j;
				nonZero = false;
				break;
			}
		}
	}
	minVal = (res=="" ? "-1" : res);
	res = "";
	nonZero = true;
	for(int i=0;i<m;i++)
	{
		for(int j=9;j>=0;j--)
		{
			if(j==0 && nonZero) continue;
			if(can(m-i-1,sum-j) && sum-j>=0)
			{
				res+= char('0'+j);
				sum-=j;
				nonZero = false;
				break;
			}
		}
	}
		maxVal = (res=="" ? "-1" : res);
	cout<<minVal<<" "<<maxVal<<endl;
	return 0;
}