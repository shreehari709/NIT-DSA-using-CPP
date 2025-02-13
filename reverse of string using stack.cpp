#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100  

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = ch;
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return stack[top--];
}

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        push(str[i]);
    }
    for (int i = 0; i < n; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX];
    cout << "Enter a string: ";
    cin.getline(str, MAX);
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}