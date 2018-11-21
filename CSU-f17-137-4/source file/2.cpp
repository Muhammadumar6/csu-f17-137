#include <iostream>
using namespace std;
void log_in(string a,string b);
int main ()
{
    string userName;
    string userPassword;
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;
      log_in(userName,userPassword);
    }
void log_in(string userName,string userPassword)
{
	  if (userName == "leo" && userPassword == "123")
        {
            cout << "Welcome to Program\n";
        
        }
      
        else
        {
            cout << "Invalid login attempt. Please try again.\n";
        }
}
