#include<iostream>
using namespace std;
int main()
{
	int n;
	n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
