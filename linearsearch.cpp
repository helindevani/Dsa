#include<iostream>
using namespace std;
bool search(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		return 1;
	}	
}
int main()
{
	int a[10]={10,6,5,7,8,9,4,5,1,2};
	int key;
	cin >> key;
	
	bool found=search(a,10,key);
	if(found=1)
		cout<< "key found";
	else
		cout<< "key not found";
}
