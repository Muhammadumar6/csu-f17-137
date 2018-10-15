#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,root;
double qe=0.00;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
root=sqrt((b*b)-(4*a*c));
qe=-b+root/(2*a);
cout<<"quardatic equation is="<<qe;
return 0;
}
