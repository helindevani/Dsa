#include<iostream>
using namespace std;
int reverse(int a[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	}
}
int main()
{
	int a[5]={10,20,50,40,30};
	for(int i=0;i<5;i++)
	{
		cout << a[i] << " "<<endl;
		
	}
	reverse(a,5);
	for(int i=0;i<5;i++)
	{
		cout << a[i] << " ";
		
	}
}
