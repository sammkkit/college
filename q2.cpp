#include <iostream>
using namespace std;

class Complex
{
private:
    float real;  
    float imag;  

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex &c) const
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator for subtraction
    Complex operator-(const Complex &c) const
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Method to display the complex number
    void display() const
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.0, 2.0);  
    Complex c2(1.5, 4.5);  

    cout << "First ";
    c1.display(); 
    cout << "Second ";
    c2.display(); 

    Complex c3 = c1 + c2;  
    cout << "After Addition: ";
    c3.display();  

    Complex c4 = c1 - c2;  
    cout << "After Subtraction: ";
    c4.display(); 

    return 0;  
}
