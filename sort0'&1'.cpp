#include<iostream>
using namespace std;
int main() 
{
    int n;
	int arr[1000000];

	cout<<"size of array : "<<endl;
	cin>>n;
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++)
	{
    	cin>>arr[i];
	}
	for(int j=0;j<n-1;j++)
	{
  		for(int i=0;i<n-1;i++)
		{
    		if(arr[i]>arr[i+1])
			{
    			swap(arr[i],arr[i+1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
    	cout<<arr[i]<<" ";
	}
	return 0;
}



