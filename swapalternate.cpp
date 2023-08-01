#include<iostream>
using namespace std;
int swapalternat(int a[],int n)
{
	int start=0;
	int end=n-1;
	while((start+1)<end)
	{
		swap(a[start],a[start+1]);
		start=start+2;
	}
}
int main()
{
	int a[6]={10,20,30,40,70,30};
	for(int i=0;i<5;i++)
	{
		cout << a[i] <<endl;
		
	}
	cout<<"after swaping" <<endl;
	swapalternat(a,5);
	for(int i=0;i<5;i++)
	{
		cout << a[i] <<endl;
		
	}
}
