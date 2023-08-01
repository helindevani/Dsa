#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int duplicate(int a[],int n)
{
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1]){
			cout << a[i] << " ";
		}
	}
}

int main()
{
	int a[5]={1,2,2,4,5};
	for(int i=0;i<5;i++)
	{
	
			cout << a[i] << " ";
		
	}
	
	
	cout << duplicate(a,5) << " ";
		
	
}
