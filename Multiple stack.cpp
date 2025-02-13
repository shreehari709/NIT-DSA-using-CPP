#include <iostream>
using namespace std;
const int MAX = 100;  
int arr[MAX];         
int top[10];          
int nextIndex[MAX];   
int freeSpot;         
void initialize(int n, int k) {
    for (int i = 0; i < k; i++) 
        top[i] = -1;  

    freeSpot = 0;  
    for (int i = 0; i < n - 1; i++) 
        nextIndex[i] = i + 1; 

    nextIndex[n - 1] = -1;  
}

void push(int num, int stackNum, int n) {
    if (freeSpot == -1) {
        cout << "Stack Overflow" << endl;
        return;
    }

    int index = freeSpot;  
    freeSpot = nextIndex[index]; 

    arr[index] = num;      
    nextIndex[index] = top[stackNum]; 
    top[stackNum] = index;  
}

void pop(int stackNum) {
    if (top[stackNum] == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }

    int index = top[stackNum]; 
    top[stackNum] = nextIndex[index]; 

    nextIndex[index] = freeSpot; 
    freeSpot = index;    

    cout << "Popped Element: " << arr[index] << endl;
}

void display(int stackNum) {
    if (top[stackNum] == -1) {
        cout << "Stack " << stackNum + 1 << " is empty" << endl;
        return;
    }

    cout << "Stack " << stackNum + 1 << " elements: ";
    for (int i = top[stackNum]; i != -1; i = nextIndex[i]) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter total size of array: ";
    cin >> n;
    cout << "Enter number of stacks: ";
    cin >> k;

    if (k > 10 || n > MAX) {
        cout << "Error: Maximum stacks = 10 and array size should be <= " << MAX << endl;
        return 1;
    }

    initialize(n, k);
    int choice, stackNum, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter stack number (1 to " << k << "): ";
                cin >> stackNum;
                if (stackNum < 1 || stackNum > k) {
                    cout << "Invalid stack number!" << endl;
                    break;
                }
                cout << "Enter value to push: ";
                cin >> value;
                push(value, stackNum - 1, n);
                break;
            case 2:
                cout << "Enter stack number (1 to " << k << "): ";
                cin >> stackNum;
                if (stackNum < 1 || stackNum > k) {
                    cout << "Invalid stack number!" << endl;
                    break;
                }
                pop(stackNum - 1);
                break;
            case 3:
                cout << "Enter stack number (1 to " << k << "): ";
                cin >> stackNum;
                if (stackNum < 1 || stackNum > k) {
                    cout << "Invalid stack number!" << endl;
                    break;
                }
                display(stackNum - 1);
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;    }    }
    return 0;
}
