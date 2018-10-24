#include<iostream>
using namespace std;
struct student
{
	char name[20];
	char stid[15];
	char department[20];
	char semester[5];
	char courses[20];
	char marks[15];
	char cid[5];
	char cname[15];
	char cmarks[5];
};
student stu;
int student()
{
cout<<"enter name : "<<endl;
cin.getline(stu.name,20);
cout<<" enter id : "<<endl;
cin.getline(stu.stid,15);
cout<<" enter department : "<<endl;
cin.getline(stu.department,20);
cout<<" enter courses : "<<endl;
cin.getline(stu.courses,20);
cout<<" enter marks : "<<endl;
cin.getline(stu.marks,15);
cout<<" enter semester : "<<endl;
cin.getline(stu.semester,5);
cout<<" enter course id : "<<endl;
cin.getline(stu.cid,5);
cout<<" enter course name : "<<endl;
cin.getline(stu.cname,15);
cout<<" enter course marks : "<<endl;
cin.getline(stu.cmarks,5);
return 0;
}
int students(){


	cout<<"\n displaying information : "<<endl;
	cout<<" student name : "<<stu.name<<endl;
	cout<<" student id : "<<stu.stid<<endl;
	cout<<" student department : "<<stu.department<<endl;
	cout<<" student semester : "<<stu.semester<<endl;
	cout<<" student course : "<<stu.courses<<endl;
	cout<<" student marks  : "<<stu.marks<<endl;
	cout<<" course name : "<<stu.cname<<endl;
	cout<<" course id : "<<stu.cid<<endl;
	cout<<"  course  marks : "<<stu.cmarks<<endl;
	
}
int main()
{
	student();
	students();
	return 0;
}

