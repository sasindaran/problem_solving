#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<n;i++)
	{
		int j;
		for(j=1 ;j<n-i;j++)
		{
			cout<<" ";
		}
		int k=1;
		while(j+k<=n)
		{
			cout<<k;
			k++;
		}
		cout<<"\n";
	}
	return 0;
}
