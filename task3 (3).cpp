#include<iostream>
using namespace std;
struct length
{
	float value;
};
int main()
{
	float inches;
	length f1;
	cout<<"enter  length in feets : "<<endl;
	cin>>f1.value;
	inches=f1.value*12;
	cout<<"length in inches : "<<inches;
	
}
