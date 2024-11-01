#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Abstract base class
class LIST {
public:
    virtual void store(int value) = 0;    // Pure virtual function to store a value
    virtual int retrieve() = 0;           // Pure virtual function to retrieve a value
    virtual ~LIST() {}                    // Virtual destructor
};

// Derived class implementing a stack
class Stack : public LIST {
private:
    stack<int> st;                        // Using STL stack for internal storage

public:
    // Override store to push onto the stack
    void store(int value) override {
        st.push(value);
    }

    // Override retrieve to pop from the stack (LIFO)
    int retrieve() override {
        if (st.empty()) {
            throw out_of_range("Stack is empty");
        }
        int value = st.top();
        st.pop();
        return value;
    }
};

// Derived class implementing a queue
class Queue : public LIST {
private:
    queue<int> q;                         // Using STL queue for internal storage

public:
    // Override store to enqueue into the queue
    void store(int value) override {
        q.push(value);
    }

    // Override retrieve to dequeue from the queue (FIFO)
    int retrieve() override {
        if (q.empty()) {
            throw out_of_range("Queue is empty");
        }
        int value = q.front();
        q.pop();
        return value;
    }
};

int main() {
    // Stack example
    LIST* stack = new Stack();
    stack->store(1);
    stack->store(2);
    stack->store(3);
    cout << "Stack retrieve: " << stack->retrieve() << endl; // Output: 3 (LIFO)
    delete stack;

    // Queue example
    LIST* queue = new Queue();
    queue->store(1);
    queue->store(2);
    queue->store(3);
    cout << "Queue retrieve: " << queue->retrieve() << endl; // Output: 1 (FIFO)
    delete queue;

    return 0;
}
