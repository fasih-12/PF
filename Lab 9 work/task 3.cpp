#include <iostream>
using namespace std;
int main()
{
    int num;
    while(true) 
	{
        cout<<"Enter a positive number:";
        cin>>num;
        if(num > 0)
		{
            cout<<"You entered: "<<num<<endl;
            break;
        } else {
            cout<<"Error: Please enter a positive number (greater than zero)."<<endl;
        }
    }
    return 0;
}
