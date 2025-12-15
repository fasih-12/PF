#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temperature";
	cin>>temp;
	if(temp>=40)
	{
		cout<<"Stay indoors because it is extremely hot and could be dangerous to health"<<endl;
	}
	else if(temp>=30 && temp<40)
	{
		cout<<"Drink plenty of water to stay hydrated in the hot weather"<<endl;
	}
	else if(temp>=20 && temp<30)
	{
		cout<<"The weather is pleasant and suitable for outdoor activities"<<endl;
	}
	else
	{
	cout<<"Wear warm clothes to stay comfortable in the cooler weather"<<endl;
}
return 0;
}
