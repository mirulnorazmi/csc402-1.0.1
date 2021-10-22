#include <iostream>
using namespace std;

int main()
{
    //variables
    float fahrenheit, celcius;
    
    cout << "\n-----------------------------------------------------------\n";
    cout << "| This program used to convert from Fahrenheit to Celcius |\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Please enter a degree in Fahrenheit: ";
    cin >> fahrenheit;

    celcius = 5.0 / 9.0 * (fahrenheit - 32.0);

    cout << "\nDegree in Celcius is " << celcius << endl;
    cout << "\n\n\nThank you for using this system.\n";

    return 0;
}