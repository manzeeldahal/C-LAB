/*Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and
 a function named "fun". The "fun" function in "Square" namespace, should return the square of an integer passed
  as an argument while the "fun" function in "Cube" namespace, should return the cube of an integer passed as an
   argument. In the main function, set the integer variables "num" of both the namespaces with different values. 
   Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" 
   function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace using the 
   "fun" function of the "Square" namespace.*/
   
#include <iostream>
using namespace std;

namespace Square {
    int num;
    int fun(int x) {
        return x * x;
    }
}

namespace Cube {
    int num;
    int fun(int x) {
        return x * x * x;
    }
}

int main() {
    // Set the integer variables "num" in both namespaces with different values
    Square::num = 3;
    Cube::num = 4;

    // Compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace
    int cubeOfSquareNum = Cube::fun(Square::num);
    cout << "Cube of Square::num (" << Square::num << ") using Cube::fun: " << cubeOfSquareNum << endl;

    // Compute and print the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace
    int squareOfCubeNum = Square::fun(Cube::num);
    cout << "Square of Cube::num (" << Cube::num << ") using Square::fun: " << squareOfCubeNum << endl;

    return 0;
}
