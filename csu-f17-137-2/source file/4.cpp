#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter number: ";
	cin>>n;
	sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			cout<<"Even number: "<<i<<endl;
			sum=sum+i;
		}
		else{
			cout<<"\n Odd numbers: "<<i<<endl;
		}
	}
	cout<<"Sum= "<<sum;
}
