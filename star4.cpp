#include<iostream>

using namespace std;
int main()
{
	int n=20;
	for(int i=1;i<=n;i++)
	{
		int space=1;
		while(space<=n-i)
		{
			cout<<" ";
			space++;
		}
		
		int j=space;
		while(j<=n)
		{
			cout<<"* ";
			j++;
		}
		cout<<"\n";
	}
	return 0;
}
