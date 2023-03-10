#include <iostream>

using namespace std;

int main()
{
    //4.Converts the length in feet to centimeter, you can calculate the length in cm(LCM) by multiplying length in feet(Lft) with 30.

    float lcm, lft;

    cout << "Enter the length in feet: ";
    cin >> lft;

    lcm = lft * 30;

    cout << "The length in cm: " << lcm;
}