#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=3;
	int no=2;
    while(no<=n)
    {
		cout<<no<<"\n";
		no+=no;
		if(no==n)
            {
                cout<<"YES";
            }
            no+=no;
        }
        if(no>n)
        {
            cout<<"NO";
        }
	return 0;
}
