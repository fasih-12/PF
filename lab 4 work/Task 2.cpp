#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age : ";
	cin>>age;
	string a =(age<13)?"Child":((age>=13 && age<=19)?"Teenager":"Adult");
	cout<<"Age "<<age<<" falls under the category "<<":"<<a<<endl;
	return 0;
}
