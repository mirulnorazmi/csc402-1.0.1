#include <iostream>
using namespace std;

int main() 
{
    const double phi = 3.1416;
    double volume;
    float radius, distance;

    cout << "\n----------------------------------------------------------------\n";
    cout << "| This program used to calculate the volume of oil in the tank |\n";
    cout << "----------------------------------------------------------------\n";
    cout << "Please enter the radius: ";
    cin >> radius;
    cout << "Please enter the distance measurements: ";
    cin >> distance;

    volume = phi * (radius * radius) * (200 - distance);

    cout << "\nThe volume of oil in the tank : " << volume << endl;
    cout << "\n\n\nThank you for using this system.\n";

    return 0;
}