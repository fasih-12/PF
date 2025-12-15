#include <iostream>
using namespace std;
int main() 
{
    int choice;
    float totalBill = 0.0;
    char orderMore;
    do {
        cout<<"\nMenu:\n1. Chicken Karahi (Rs. 800/kg)\n2. Biryani (Rs. 500/kg)\n";
        cout<<"Enter your choice (1 or 2): ";
        cin>>choice;
        int quantity;
        cout<<"Enter quantity (in kg): ";
        cin>>quantity;
        if(choice == 1) 
		{
            totalBill += 800 * quantity;
            cout << "Added " << quantity << " kg Chicken Karahi." << endl;
        } 
		else if(choice == 2)
		{
            totalBill += 500 * quantity;
            cout<<"Added " << quantity << " kg Biryani." << endl;
        } else
		 {
            cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> orderMore;
    } 
	while (orderMore == 'y' || orderMore == 'Y');

    cout << "Total bill: Rs. " << totalBill << endl;
    cout << "Thank you for ordering!" << endl;
    return 0;
}
