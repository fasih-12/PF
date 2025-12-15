#include <iostream>
using namespace std;
int main() 
{
    float amount,convertedAmount;
    int choice;
    float usdToPkr = 278.5, usdToInr = 83.5, usdToEuro = 0.93;
    cout<<"Currency Converter (USD to other currencies)\n";
    cout<<"Enter the amount in USD: ";
    cin>>amount;
    cout<<"Choose conversion:\n";
    cout<<"1. USD to PKR\n";
    cout<<"2. USD to INR\n";
    cout<<"3. USD to Euros\n";
    cin>>choice;
    switch(choice) 
	{
        case 1:
            convertedAmount = amount * usdToPkr;
            cout<<amount<<" USD = "<<convertedAmount<<" PKR\n";
            break;
        case 2:
            convertedAmount = amount * usdToInr;
            cout<<amount<<" USD = "<<convertedAmount<<" INR\n";
            break;
        case 3:
            convertedAmount = amount * usdToEuro;
            cout<<amount<<" USD = "<<convertedAmount<<" Euros\n";
            break;
        default:
            cout<<"Invalid choice!\n";
    }
    return 0;
}
