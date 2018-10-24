#include<iostream>
using namespace std;
struct employee
{
    char name[50];
    char date_of_joining[50];
    char designation[15];
};
int main()
{
	employee e[5];
	for (int i=1;i<=5;i++)
	{
	cout<<"employee name : ";
	cin>>e[i].name;
	cout<<" date of joining : ";
	cin>>e[i].date_of_joining;
	cout<<"employee designation : ";
	cin>>e[i].designation;
}
	for( int i=1;i<=5;i++)
	{
			
	cout<<"--------- detail information of employee---------"<<endl;

	cout<<"employee no."<<i<<" : "<<e[i].name<<endl;
	cout<<"employee no."<<i<<" : "<<e[i].date_of_joining<<endl;
	cout<<"employee no."<<i<<" : "<<e[i].designation<<endl;
}
}


