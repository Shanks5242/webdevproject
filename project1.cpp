#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* que;
    int c;
    int head;
    int tail;
public:
    CircularQueue(int k) {
        c = k;
        que = new int[c];
        head = -1;
        tail = -1;
    }

    ~CircularQueue() {
        delete[] que;
    }

    bool isFull() {
        return (head == (tail + 1) % c);
    }

    bool isEmpty() {
        return (head == -1);
    }

    void inqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Enqueue operation cannot be performed." << endl;
        } else {
            if (isEmpty()) {
                head = 0;
            }
            tail = (tail + 1) % c;
            que[tail] = item;
            cout << "Enqueued item: " << item << endl;
        }
    }

    void outqueue() {
        if (isEmpty()) {
            cout << "Queue is empty. Dequeue operation cannot be performed." << endl;
        } else {
            cout << "Dequeued item: " << que[head] << endl;
            if (head == tail) {
                head = -1;
                tail = -1;
            } else {
                head = (head + 1) % c;
            }
        }
    }
};

int main() {
    int capacity;
    cout << "Enter the capacity of the circular queue: ";
    cin >> capacity;

    CircularQueue queue(capacity);

    int choice;
    do {
        cout << "\nCircular Queue Menu\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int item;
                cout << "Enter the item to enqueue: ";
                cin >> item;
                queue.inqueue(item);
                break;
            case 2:
                queue.outqueue();
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
