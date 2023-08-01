

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int intersection(int a[],int b[],int n1,int n2)
{
	for(int i=0;i<n1;i++)
  	{
    	for(int j=0;j<n2;j++)
    	{
      		if(a[i]==b[j])
      		{
        		cout<<a[i]<<" ";
      		}
    	}
  	}
}

int main()
{
	int a[5]={1,2,2,4,5};
	int i;
	int b[5]={1,5,4,8,1};
	for(i=0;i<5;i++)
	{
	
			cout << a[i] << " ";
			
		
		
	}
	for(i=0;i<5;i++)
	{
	
			cout << b[i] << " ";
			
		
		
	}
	cout << intersection(a,b,5,5) << " ";
		
	
}
