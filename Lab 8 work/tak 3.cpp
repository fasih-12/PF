#include <iostream>
using namespace std;
int main()
{
    int choice;
    float radius, length, width, base, height, area;
    cout<<"Select a shape to calculate area:\n";
    cout<<"1. Circle\n2. Rectangle\n3. Triangle\n";
    cout<<"Enter your choice (1/2/3):";
    cin>>choice;
    switch(choice)
	{
        case 1:
            cout<<"Enter radius of the circle:";
            cin>>radius;
            area = 3.14159 * radius * radius;
            cout<<"Area of the circle = "<<area;
            break;
        case 2:
            cout<<"Enter length and width of the rectangle:";
            cin>>length>>width;
            area = length * width;
            cout<<"Area of the rectangle = "<<area;
            break;
        case 3:
            cout<<"Enter base and height of the triangle:";
            cin>>base>>height;
            area = 0.5 * base * height;
            cout<<"Area of the triangle = "<<area;
            break;
        default:
            cout<<"Error: Invalid choice. Please select 1, 2, or 3.";
    }
    return 0;
}
