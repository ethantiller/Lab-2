#include <iostream>
using namespace std;

int Year1;
int Year2;
double PatientsYear1;
double PatientsYear2;

// The main function uses inputs to take in information
// from the user and calculates the increase or decrease
// in patients seen over a specific amount of years, along
// with how much the hospital pays in charity patient charges.

int main() {
    cout << "Enter the first year: ";
    cin >> Year1;
    cout << "Enter the number of patients we saw that year: ";
    cin >> PatientsYear1;
    cout << "Enter the second year: ";
    cin >> Year2;
    cout << "Enter the number of patients we saw that year: ";
    cin >> PatientsYear2;

    double IncreaseOrDecrease = ((PatientsYear2-PatientsYear1)/PatientsYear1)*100;

    cout << "In year " << Year1 << ", our hospital issued " << PatientsYear1*1008.97
         << " dollars of charity charges.\n";
    cout << "In year " << Year2 << ", our hospital issued " << PatientsYear2*1008.97
         << " dollars of charity charges.\n";
    cout << "Between " << Year1 << " and " << Year2 << ", "
         << "there was a " << IncreaseOrDecrease << "% increase in patients seen at our hospital.\n";


    return 0;
}

