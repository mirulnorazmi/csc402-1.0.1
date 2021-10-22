#include <iostream>
using namespace std;
int main()
{
    int nTerms, nFirst, nDiff, sum;

    cout << "\n-----------------------------------------------------------------------\n";
    cout << "| This program used to calculate the sum of the numbers from 1 to 100 |\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "Please enter the number of terms: ";
    cin >> nTerms;
    cout << "Please enter the first number: ";
    cin >> nFirst;
    cout << "Please enter the difference between each number: ";
    cin >> nDiff;

    sum = (nTerms / 2) * (2 * nFirst + (nTerms - 1) * nDiff);

    cout << "\nThe sum of the numbers from 1 to 100 : " << sum << endl;
    cout << "\n\n\nThank you for using this system.\n";

    return 0;
}
