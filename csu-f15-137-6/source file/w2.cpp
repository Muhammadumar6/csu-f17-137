#include<iostream>
using namespace std;
class count
{
	private:
		
			char name[20],location[20],capital[30];
			int area,population;
	public:
		void setinput();
		void getoutput();
			
		
};
void count::setinput()
{
	cout<<"Enter country Name: ";
	cin>>name;
	cout<<"Enter location: ";
	cin>>location;
	cout<<"Enter area: ";
	cin>>area;
	cout<<"Enter population: ";
	cin>>population;
	cout<<"Enter Capital: ";
	cin>>capital;
}
void count::getoutput()
{   
    int x; 
	cout<<"Enter 1 to display Country Name: "<<endl;
	cout<<"Enter 2 to display Country Location: "<<endl;
	cout<<"Enter 3 to display Country Area: "<<endl;
	cout<<"Enter 4 to display Country population: "<<endl;
	cout<<"Enter 5 to display Country Capital: "<<endl;
	cin>>x;
	
   switch (x) 
   { 
       case 1: cout<<"\nCountry Name:"<<name; ; 
               break; 
       case 2: 	cout<<"\nLocation:"<<location;; 
                break; 
       case 3: 	cout<<"\nArea:"<<area;; 
               break; 
       case 4:  cout<<"\nPopulation:"<<population;
               break;
       case 5:  	cout<<"\nCapital:"<<capital;
	         break;         
       default: cout<<"Choice other than 1, 2 , 3 , 4 and 5"; 
                break;   
   } 
	
	
	
	
	


	

}
int main()
{
	count c;
	c.setinput();
	c.getoutput();
}
