#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double item1=12.95,item2=24.95,item3=6.95,item4=14.95,item5=3.95;
	const double SALES_TAX_RATE=0.06;
	double subtotal=item1+item2+item3+item4+item5;
	double salestax=subtotal*SALES_TAX_RATE;
	double total=subtotal+salestax;
	cout<<"price of item 1:$"<<item1<<endl;
	cout<<"price of item 2:$"<<item2<<endl;
	cout<<"price of item 3:$"<<item3<<endl;
	cout<<"price of item 4:$"<<item4<<endl;
	cout<<"price of item 5:$"<<item5<<endl;
	cout<<"subtotal:$"<<subtotal<<endl;
	cout<<"salestax(6%):$"<<salestax<<endl;
	cout<<"total:$"<<total<<endl;
	return 0;
}