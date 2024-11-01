#include <bits/stdc++.h>

using namespace std;

class String {
private:
    string str;

public:
    // Constructor
    String(string str = "") : str(str) {}

    // Overload + operator to concatenate two String objects
    String operator+(const String& s) const {
        return String(str + s.str);
    }

    // Overload = operator to copy one String object to another
    String& operator=(const String& s) {
        if (this != &s) {  // Prevent self-assignment
            str = s.str;
        }
        return *this;
    }

    // Overload <= operator to compare two String objects
    bool operator<=(const String& s) const {
        return str <= s.str;
    }

    // Function to display the length of the string
    int length() const {
        return str.length();
    }

    // Function to convert all characters to lowercase
    void tolower() {
        for (char& c : str) {
            c = std::tolower(c);
        }
    }

    // Function to convert all characters to uppercase
    void toupper() {
        for (char& c : str) {
            c = std::toupper(c);
        }
    }

    // Function to print the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2(" World");

    // Test + operator (concatenation)
    String s3 = s1 + s2;
    s3.display();  // Output: "Hello World"

    // Test = operator (assignment)
    String s4;
    s4 = s1;
    s4.display();  // Output: "Hello"

    // Test <= operator (comparison)
    if (s1 <= s2) {
        cout << "s1 is less than or equal to s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }

    // Test length function
    cout << "Length of s1: " << s1.length() << endl;  // Output: 5

    // Test tolower function
    s1.tolower();
    s1.display();  // Output: "hello"

    // Test toupper function
    s1.toupper();
    s1.display();  // Output: "HELLO"

    return 0;
}
