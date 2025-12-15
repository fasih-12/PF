#include <iostream>
using namespace std;
int main() 
{
    string username, password, role;
    string predefinedUsername = "admin";
    string predefinedPassword = "password123";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == predefinedUsername && password == predefinedPassword)
	 {
        cout << "Authentication Successful" << endl;
        cout << "Enter your role (Admin/Guest/User/Manager): ";
        cin >> role;
        if (role == "Admin")
		{
            cout << "Full Access" << endl;
        } 
		else if (role == "Guest") 
		{
            cout << "Limited Access" << endl;
        } 
		else
		{
            cout << "No Access" << endl;
        }
    }
	 else
	{
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
