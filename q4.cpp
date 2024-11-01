#include <iostream>
using namespace std;

class Counter {
public:
    int value;

    // Constructor
    Counter(int v) : value(v) {}

    // Custom pre-increment (decrements by 1)
    Counter& operator++() {
        value -= 1;  // Decrement instead of increment
        return *this;
    }

    // Custom post-increment (decrements by 1)
    Counter operator++(int) {
        Counter temp = *this;
        value -= 1;  // Decrement instead of increment
        return temp;
    }

    // Custom pre-decrement (increments by 1)
    Counter& operator--() {
        value += 1;  // Increment instead of decrement
        return *this;
    }

    // Custom post-decrement (increments by 1)
    Counter operator--(int) {
        Counter temp = *this;
        value += 1;  // Increment instead of decrement
        return temp;
    }
};

int main() {
    Counter count(10);

    cout << "Initial value: " << count.value << endl;

    // Demonstrate custom pre-increment (actually decrements by 1)
    ++count;
    cout << "After pre-increment (++count): " << count.value << endl;

    // Demonstrate custom post-increment (actually decrements by 1)
    count++;
    cout << "After post-increment (count++): " << count.value << endl;

    // Demonstrate custom pre-decrement (actually increments by 1)
    --count;
    cout << "After pre-decrement (--count): " << count.value << endl;

    // Demonstrate custom post-decrement (actually increments by 1)
    count--;
    cout << "After post-decrement (count--): " << count.value << endl;

    return 0;
}
