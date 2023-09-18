#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		int k;
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
//		for(k=n-1;k>=j;k--)
//		{
//			cout<<"*";
//		}
		cout<<"\n";
	}
	return 0;
}
