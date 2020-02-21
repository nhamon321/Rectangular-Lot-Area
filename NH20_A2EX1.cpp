/*  Grade book #20
    This program calculates and displays the acreage of a rectangular lot given the
    width and depth of the lot entered by the user in feet and inches
*/

#include<iostream>
using namespace std;

int main()
{

double feet, inches, feet1, inches1, result1, result2, area, acreage;

    cout << "This program calculates the acreage of a rectangular lot." << endl << endl;
    cout << "Enter the width of the lot in feet and inches." << endl;
    cout << "Feet? ";
    cin >> feet;

    // User enters width of lot in feet and inches

    cout << "Inches? ";
    cin >> inches;
    cout << endl;

    cout << "Enter the depth of the lot in feet and inches." << endl;
    cout << "Feet? ";
    cin >> feet1;

    // User enters depth of lot in feet and inches

    cout << "Inches? ";
    cin >> inches1;


    result1 = (feet*12) + inches;
    result2 = (feet1*12) + inches1;
    area = (result1/12) * (result2/12);
    acreage = area * 0.000022957;
    cout << endl;
    cout << "A lot with a width of " << feet << "\' - "<< inches
         << "\" " << " and a depth of " << feet1 << "\' - " << inches1
         << "\" " << " is " << acreage << " acres." << endl;

    return 0;
}



