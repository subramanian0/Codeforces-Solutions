#include <iostream>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
int a[100005];
int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int minimum = *min_element(a,a+n);
	int mindist = INT_MAX;
	int startval = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(a[i]==minimum)
		{
			if(startval==INT_MAX)
			{
				startval=i;
			}
			else
			{
				mindist=min(mindist,abs(i-startval));
				startval=i;
			}
		}
	}
	cout<<mindist<<endl;
	return 0;
}