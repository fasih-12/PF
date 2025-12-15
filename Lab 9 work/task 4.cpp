#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num = 1;
    while (num <= 5)
	{
        sum += num;
        num++;
    }
    cout<<"Sum of first five natural numbers:"<<sum<<endl;
    return 0;
}
