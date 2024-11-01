#include <iostream>
#include <string>
using namespace std;

// Base class for student details
class STUDENT {
protected:
    int rollno;
    string name;

public:
    void setStudentDetails(int r, const string& n) {
        rollno = r;
        name = n;
    }
    
    void displayStudentDetails() const {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class to store exam marks, inheriting from STUDENT
class EXAM : public STUDENT {
protected:
    int marks[6];

public:
    void setMarks(int m[6]) {
        for (int i = 0; i < 6; i++) {
            marks[i] = m[i];
        }
    }
    
    void displayMarks() const {
        cout << "Marks in six subjects: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class to calculate and display total marks, inheriting from EXAM
class RESULT : public EXAM {
private:
    int totalmarks;

public:
    void calculateTotalMarks() {
        totalmarks = 0;
        for (int i = 0; i < 6; i++) {
            totalmarks += marks[i];
        }
    }
    
    void displayResult() const {
        displayStudentDetails();
        displayMarks();
        cout << "Total Marks: " << totalmarks << endl;
    }
};

int main() {
    RESULT studentResult;
    
    // Setting up student details
    studentResult.setStudentDetails(1, "Samkit");
    
    // Setting up exam marks for 6 subjects
    int subjectMarks[6] = {85, 90, 78, 92, 88, 76};
    studentResult.setMarks(subjectMarks);
    
    // Calculating total marks
    studentResult.calculateTotalMarks();
    
    // Displaying the final result
    studentResult.displayResult();

    return 0;
}
