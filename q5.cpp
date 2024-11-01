#include <iostream>
#include <string>
using namespace std;

// Base class First
class First {
protected:
    int book_no;
    string book_name;

public:
    // Function to input book details
    void getdata() {
        cout << "Enter book number: ";
        cin >> book_no;
        cout << "Enter book name: ";
        cin.ignore();
        getline(cin, book_name);
    }

    // Function to display book details
    void putdata() const {
        cout << "Book Number: " << book_no << endl;
        cout << "Book Name: " << book_name << endl;
    }
};

// Base class Second
class Second {
protected:
    string author_name;
    string publisher;

public:
    // Function to input author and publisher details
    void getdata() {
        cout << "Enter author name: ";
        cin.ignore();
        getline(cin, author_name);
        cout << "Enter publisher: ";
        getline(cin, publisher);
    }

    // Function to display author and publisher details
    void showdata() const {
        cout << "Author Name: " << author_name << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

// Derived class Third inheriting from First and Second
class Third : public First, public Second {
private:
    int no_of_pages;
    int year_of_publication;

public:
    // Function to input all details
    void getdata() {
        // Call getdata of base classes
        First::getdata();
        Second::getdata();

        // Input additional details
        cout << "Enter number of pages: ";
        cin >> no_of_pages;
        cout << "Enter year of publication: ";
        cin >> year_of_publication;
    }

    // Function to display all details
    void display() const {
        // Display data from base classes
        putdata();
        showdata();

        // Display additional details
        cout << "Number of Pages: " << no_of_pages << endl;
        cout << "Year of Publication: " << year_of_publication << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    // Array of objects of Third class
    Third books[n];

    // Input details for each book
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].getdata();
    }

    // Display details for each book
    cout << "\nDisplaying details of all books:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nDetails of book " << i + 1 << ":\n";
        books[i].display();
    }

    return 0;
}
