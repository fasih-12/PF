#include <iostream>
using namespace std;
int main() {
    string correctPassword = "admin123";
    string userInput;
    do {
        cout<<"Enter password:";
        cin>>userInput;
        if(userInput != correctPassword) 
	 {
            cout<<"Incorrect password! Try again."<<endl;
        }
    } 
	while(userInput != correctPassword);
    cout << "Password matched! Access granted." << endl;
    return 0;
}
