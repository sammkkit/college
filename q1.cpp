#include <bits/stdc++.h>
using namespace std;

class ComplexNumber
{
private:
    float real;
    float imag;

public:
    // Default constructor
    ComplexNumber()
    {
        real = 0;
        imag = 0;
        cout << "Default Constructor called." << endl;
    }

    // Parameterized constructor
    ComplexNumber(float real, float imag)
    {
        this->real = real;
        this->imag = imag;
        cout << "Parameterized Constructor called." << endl;
    }

    // Copy constructor
    ComplexNumber(const ComplexNumber &c)
    {
        real = c.real;
        imag = c.imag;
        cout << "Copy Constructor called." << endl;
    }

    // Method to set data
    void setData(float real, float imag)
    {
        this->real = real;
        this->imag = imag;
    }

    // Method to get data
    void getData() const
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }

    // Destructor
    ~ComplexNumber()
    {
        cout << "Destructor called for Complex(" << real << ", " << imag << ")" << endl;
    }
};

int main()
{
    ComplexNumber c1;  
    c1.getData(); 

    ComplexNumber c2(3.5, 2.5); 
    c2.getData();

    ComplexNumber c3(1.5, 4.5); 
    c3.getData(); 

    c1.setData(2.5, 3.5);
    c1.getData(); 

    return 0;  
}
