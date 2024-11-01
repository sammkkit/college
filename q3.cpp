#include <iostream>
using namespace std;

class Calculator {
public:
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add one integer and one float
    float add(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Adding two integers
    cout << "Sum of two integers (3 + 5): " << calc.add(3, 5) << endl;

    // Adding three integers
    cout << "Sum of three integers (3 + 5 + 7): " << calc.add(3, 5, 7) << endl;

    // Adding one integer and one float
    cout << "Sum of one integer and one float (3 + 5.5): " << calc.add(3, 5.5f) << endl;

    return 0;
}
