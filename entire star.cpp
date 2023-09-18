#include<iostream>
using namespace std;
int main()
{
	int i,j,space,k,n;
    n=5;
	for(i=1;i<n;i++)
	{
		for(space=1;space<=n-i-1;space++)
		{
			cout<<" ";
		}
		for(j=1;j<=(i*2)-1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(i=2;i<n;i++)
	{
		for(space=1;space<i;space++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*(n-space)-1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
