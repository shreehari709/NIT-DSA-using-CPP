#include<iostream>
#include<stack>
//#include<string>
using namespace std;

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if (isalnum(c)) {
            postfix += c;
        }
       
        else if (c == '(') {
            s.push(c);
        }
  
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); 
        }
 
        else {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }


    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix; 
}

int main() {
    string infix;
    cout << "Enter infix expression: ",cin >> infix;
    cout << "Postfix expression: " << infixToPostfix(infix) << endl;

    return 0;
}
