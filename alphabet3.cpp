#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<char(65+i);
		}
		cout<<"\n";
	}
	return 0;
}
