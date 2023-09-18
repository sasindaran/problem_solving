#include<iostream>
using namespace std;
int n=5;
int main()
{
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<char(65+j);
		}
		cout<<"\n";
	}
	return 0;
}
