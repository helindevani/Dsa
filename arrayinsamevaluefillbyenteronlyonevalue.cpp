#include<iostream>
using namespace std;
int main()
{
	int a[15];
	fill_n(a,15,1);
	int n=15;
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
		
	}
	int b=sizeof(a)/sizeof(int);
	cout << b <<endl;
}
