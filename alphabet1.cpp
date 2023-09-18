#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		
		for(char a='a';a<'a'+i;a++)
		{
			cout<<a;
		}
		cout<<"\n";
	}
	return 0;
}
