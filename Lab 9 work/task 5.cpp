#include <iostream>
using namespace std;
int main() {
    float balance = 1000;
    int choice;
    float amount;
    while (true)
	{
        cout<<"\nBanking System Menu:\n";
        cout<<"1. Deposit Money\n";
        cout<<"2. Withdraw Money\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
		{
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance += amount;
                cout<<"Amount deposited successfully.\n";
                break;
            case 2:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount > balance)
				{
                    cout<<"Insufficient balance!\n";
                } else
				{
                    balance -= amount;
                    cout<<"Amount withdrawn successfully.\n";
                }
                break;
                cout<<"Current balance: "<<balance<<endl;
                break;
                cout<<"Exiting program. Goodbye!\n";
                cout<<"Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
