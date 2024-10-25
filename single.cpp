#include <iostream>
using namespace std;

// Base class A
class A {
public:
    int num1, num2;

    // Constructor to initialize the numbers
    A(int x, int y) : num1(x), num2(y) {}
};

// Derived class B inheriting from class A
class B : public A {
public:
    // Constructor to initialize base class A
    B(int x, int y) : A(x, y) {}

    // Function to calculate and display product
    void displayProduct() {
        cout << "Product of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    }
};

int main() {
    // Create an object of derived class B and pass values to the constructor
    B obj(4, 5);
    
    // Call the function to display product
    obj.displayProduct();

    return 0;
}
