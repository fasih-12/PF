#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cout<<"Enter account balance: $";
	cin>>n;
	cout<<"Is the customer loyal (type 1 for loyal,0 for not loyal) :";
	cin>>f;
	string r=(n <100)? "Low Balance Account":(n <=500)? "Standard Account":"Premium Account";
	cout<<"Account Type :"<<r<<endl;
	string g=(n>=200 && f==1)? "Eligible":"Not Eligible";
	cout<<"Special Offer Status : "<<g<<endl;
	return 0;
}
