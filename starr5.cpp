#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<5;i++)
	{
		int space;
		for(space=1;space<i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*(n-space)-1;j++)
		{
				cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
