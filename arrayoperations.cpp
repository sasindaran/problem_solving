#include<iostream>
using namespace std;
void prt(int arr[],int n)
{	for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
}
int main()
{
	int ch,n=5,i,j,k,index;

	cout<<"Choose any opt\n1)Transveral\n2)Insertion\n3)Deletion\n4)searching\n5)sorting\n";
	cin>>ch;
	int arr[6]={10,30,20,40,50};
//	for(i=0;i<n;i++)
//	{
//		cout<<"Enter the "<<i+1<<"th element";
//		cin>>arr[i];
//	}
	switch (ch)
	{
		case 1:
			prt(arr,n);
			break;
		case 2:
			cout<<"Enter the element to insert and index :";
			cin>>k;
			cin>>index;
			
			cout<<"The k value is "<<k<<"\n";
			for(j=n+1;j>=index;j--)
			{
				arr[j]=arr[j-1];
			}
			
			cout<<"The k value is "<<k<<"\n";
			n++;
			arr[index]=k;
			prt(arr,n);
			break;

		case 3:
			cout<<"Enter the index to delete :";
			cin>>index;
			for(j=index;j<=n;j++)
			{
				arr[j]=arr[j+1];
			}
			n--;
			prt(arr,n);
			break;
			
		case 4:
			cout<<"Enter the element to search :";
			cin>>k;
			prt(arr,n);
			for(i=0;i<n;i++)
			{
				if(arr[i]==k)
				{
					cout<<"Found at "<<i<<" index\n";
				}
			}
			break;
		case 5:
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
					{
						k=arr[i];
						arr[i]=arr[j];
						arr[j]=k;
					}
				}
			}
			prt(arr,n);
			}
	
	return 0;
}
