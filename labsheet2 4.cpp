/*Write a function that passes two temperatures by reference and sets the larger of the
 two numbers to a value entered by user by using return by reference.*/

#include <iostream>
using namespace std;

// Function that passes two temperatures by reference
// and sets the larger of the two to a value entered by user
double& setLargerTemperature(double& temp1, double& temp2) {
    if (temp1 > temp2) {
        return temp1;
    } else {
        return temp2;
    }
}

int main() {
    double temperature1, temperature2;

    // Input initial temperatures
    cout << "Enter the first temperature: ";
    cin >> temperature1;
    cout << "Enter the second temperature: ";
    cin >> temperature2;

    // Input new value to set
    double newValue;
    cout << "Enter the new value to set to the larger temperature: ";
    cin >> newValue;

    // Set the larger temperature to the new value
    setLargerTemperature(temperature1, temperature2) = newValue;

    // Output the results
    cout << "After setting the larger temperature to " << newValue << ":\n";
    cout << "Temperature 1: " << temperature1 << "\n";
    cout << "Temperature 2: " << temperature2 << "\n";

    return 0;
}
