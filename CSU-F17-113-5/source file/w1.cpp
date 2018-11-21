#include<iostream>
using namespace std;
class stu
{
	private:
		
			char f_name[30],l_name[30],add[30];
			int customer_id,credit_lim;
	public:
		void setCustomerID();
		void getCustomerID();
			
		
};

void stu::setCustomerID()
{
	cout<<"\t\t\t INFORMATION ABOUT CUSTOMERS \t\t\t "<<endl;
	cout<<"first Name of customer : ";
	cin>>f_name;
	cout<<"last Name of customer.: ";
	cin>>l_name;
	cout<<"Enter Address of customer: ";
	cin>>add;
	cout<<"Enter Customer ID: ";
	cin>>customer_id;
	cout<<"Enter Credit Limit of custmer: ";
	cin>>credit_lim;
}
void stu::getCustomerID()
{
	cout<<"\nFirst Name:"<<f_name;
	cout<<"\nLast Name:"<<l_name;
	cout<<"\nAddress:"<<add;
	cout<<"\nCustomer ID:"<<customer_id;
	cout<<"\nCredit Limit:"<<credit_lim;
}
int main()
{
	stu s;
	s.setCustomerID();
	s.getCustomerID();
}
