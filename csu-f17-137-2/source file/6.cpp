#include <iostream>
using namespace std;

int main()
{
    
        int a,b,n,sum=0;  //sum block
        cout<<"enter digits : ";
        cin>>n;

        {
            while(n!=0)
            {
                b=n % 10;
                sum+=b;
                n=n/10;
            }
            cout<<"integars digit sum: "<<sum <<endl;
        }
       
    
}
