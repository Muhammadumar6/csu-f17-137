#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter a character in UPPERCASE: "; 
   cin>>ch;
   ch=ch+32;
   cout<<"Entered character in lowercase: "<<ch;
   return 0;
}
