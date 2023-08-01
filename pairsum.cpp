#include<iostream>
using namespace std;
int pairsum(int a[],int n)
{
	int start=0;
	int end=n-1;
	int sum=0;
	while(start<end)
	{
		sum=a[start]+a[start+1];
		cout << sum << " ";
		start=start+2;
	}
}
int main()
{
	int a[6]={10,20,30,40,70};
	for(int i=0;i<5;i++)
	{
		cout << a[i] <<endl;
		
	}
	cout<< pairsum(a,5) <<endl;
	
}
