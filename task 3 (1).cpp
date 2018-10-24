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
	employee e1;
	cout<<"employee name : ";
	cin>>e1.name;
	cout<<" date of joining : ";
	cin>>e1.date_of_joining;
	cout<<"employee designation : ";
	cin>>e1.designation;
	
	cout<<"--------- detail information of employee---------"<<endl;
	cout<<e1.name<<endl;
	cout<<e1.date_of_joining<<endl;
	cout<<e1.designation<<endl;
	
}
