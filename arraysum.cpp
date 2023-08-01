#include<iostream>
using namespace std;
int sum(int a[],int n)
{	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}

int main()
{
	int a[5]={1,2,3,4,5};
	
	for(int i=0;i<5;i++)
	{
		cout << a[i] << " ";
		
	}
	
	cout << sum(a,5) <<endl;
}
