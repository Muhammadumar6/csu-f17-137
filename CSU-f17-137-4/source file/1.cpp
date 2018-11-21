#include<iostream>
using namespace std;
int larger(int a,int b);
int main(){
	int a,b;
	cout<<"Enter 1st value: ";
	cin>>a;
	cout<<"Enter 2nd value: ";
	cin>>b;
	larger(a,b);
	return 0;
}
int larger(int a,int b)
{
	if(a>b)
	cout<<"1st value is greater '"<<a<<"'";
	else
	cout<<"2nd value is greater '"<<b<<"'";
}
