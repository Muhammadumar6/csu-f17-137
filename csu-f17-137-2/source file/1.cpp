#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"please enter the value of a :"<<endl;
	cin>>a;
	cout<<"please enter the value of b :"<<endl;
	cin>>b;
	cout<<"please enter operations : "<<endl;
	cin>>op;
	switch(op)
	{
		case'+':
			cout<< a+b  <<endl;
			break;
	    case'-':
	    	cout<<a-b<<endl;
	    	break;
	    case'*':
	    	cout<<a*b<<endl;
	    	break;
	    case'/':
		cout<< a/b<<endl;
		    break;
			
			
	 } 
}
