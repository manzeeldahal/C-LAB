/*Write a program using the function overloading that converts feet to inches.
 Use function with no argument, one argument and two arguments. 
 Decide yourself the types of arguments.
 Use pass by reference in any one of the function above.*/

#include <iostream>
using namespace std;

// Function prototypes
double feetToInches();
double feetToInches(double feet);
void feetToInches(double feet, double& inches);

int main() {
    // Using the function with no argument
    double inches = feetToInches();
    cout << "Default conversion (1 foot): " << inches << " inches" << endl;

    // Using the function with one argument
    double feet = 5.5;
    inches = feetToInches(feet);
    cout << feet << " feet is " << inches << " inches" << endl;

    // Using the function with two arguments (one passed by reference)
    double resultInches;
    feetToInches(feet, resultInches);
    cout << feet << " feet is " << resultInches << " inches (using reference)" << endl;

    return 0;
}

// Function definitions

// Function with no argument
double feetToInches() {
    double feet = 1.0;  // Default feet value
    return feet * 12.0;
}

// Function with one argument
double feetToInches(double feet) {
    return feet * 12.0;
}

// Function with two arguments (one passed by reference)
void feetToInches(double feet, double& inches) {
    inches = feet * 12.0;
}
