#include <iostream>
using namespace std;
int main()
{
    float  midpointX, midpointY;
    int  x1, x2, y1, y2;

    cout << "\n------------------------------------------------------------------------------\n";
    cout << "| This program used to calculate and display the coordinates of the midpoint |\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << "Please enter the x1: ";
    cin >> x1;
    cout << "Please enter the x2: ";
    cin >> x2;
    cout << "Please enter the y1: ";
    cin >> y1;
    cout << "Please enter the y2: ";
    cin >> y2;

    midpointX = (x1+x2)/2;
    midpointY = (y1+y2)/2;

    cout << "\nThe x coordinate of the the midpoint is " << midpointX << endl;
    cout << "The y coordinate of the the midpoint is " << midpointY << endl;
    cout << "\n\n\nThank you for using this system.\n";

    return 0;
}
