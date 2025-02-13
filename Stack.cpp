#include<iostream>
#include<cstdlib>
using namespace std;

int **arr;
int *top;
int n;

void stack(int size){
    n = size;
    arr = (int **)malloc(n * sizeof(int*));
 
    top = (int *)malloc(sizeof(int));
   
    *top = -1;
}

void pop() {
    if (*top < 0) {
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << "Popped: " << *arr[*top] << endl;
    free(arr[*top]);
    *top -= 1;
}

void push(int val) {
    if (*top >= n - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    *top += 1;
    arr[*top] = (int *)malloc(sizeof(int));
   
    *arr[*top] = val;
    cout << "Pushed: " << val << endl;
}

void display() {
    if (*top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack contents: ";
    for (int i = *top; i >= 0; i--) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}

void freeStack() {
    for (int i = 0; i <= *top; i++) {
        free(arr[i]);
    }
    free(arr);
    free(top);
}

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    stack(size);

    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    pop();
    pop();
    pop(); 

    freeStack();
    return 0;
}
