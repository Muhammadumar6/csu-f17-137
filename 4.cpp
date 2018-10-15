#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 'a' : ";
	cin>>a;
	cout<<"Enter 'b' : ";
	cin>>b;
	cout<<"enter 'c' : ";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"'a' is greater then b and c: "<<a;
		}
		
	}
	if(b>a)
	{
		if(b>c){
			cout<<"'b' is greater then a and c: "<<b;
		
		}
	}
	cout<<"'c' is greater then b and c: "<<c;
	return 0;
}
