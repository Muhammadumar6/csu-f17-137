#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b= temp;
   return;
} 
int main()
{
    int p,q;
    cout<<"Enter value of a: ";
	cin>>p;
	cout<<"Enter value of b: ";
	cin>>q;
	cout<<"Value befor swapping\n a: "<<p<<"\tb: "<<q<<endl;  
    swap(&p, &q);
    	cout<<"Value after swapping\n a: "<<p<<"\tb: "<<q;
    return 0;
}
