#include<iostream>
using namespace std;
int main()
{
	int arr[100], limit, i, j, temp;
	cout<<" Please Enter a limit of an array : ";
	cin>>limit;
	cout<<" Now enter array elements : ";
	for(i=0; i<limit; i++)
	{
		cin>>arr[i];
	}
	j=i-1;  
	i=0;   
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now the Reverse of the Array is :"<<endl;
	for(i=0; i<limit; i++)
	{
		cout<<arr[i]<<" ";
	}
}


