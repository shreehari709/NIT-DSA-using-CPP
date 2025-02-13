// 1) WAP to evaluate the given postfix expression.
// 2) WAP to reverse a given string using stack.
// 3) WAP to implement multiple stacks using array.


#include<iostream>
using namespace std;
class stack{
    int top1=-1,top2=19,stack[20],max_size=19;
    public:
    void push(int stack_num,int val){
    if(top1+1 == top2){
        cout<<"Stack is full";
        return;
    }
    if(stack_num==1){
        top1 ++;
        stack[top1]=val;
    }
    else{
        top2 --;
        stack[top2]=val;
    }
}
int pop(int stack_num){
    if(stack_num==1){
        if(top1==-1){
            cout<<"Stack is empty";
            return -1;
        }
        int val=stack[top1];
        top1 --;
        return val;
    }
    else{
        if(top2==max_size){
            cout<<"Stack 2 is empty"<<endl;
            return -1;
        }
        int val=stack[top2];
        top2 ++;
        return val;
    }
}
void display(int stack_num){
    if(stack_num==1){
        cout<<"Element of stack 1 are : "<<endl;
        for(int i=top1;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<"Element of stack 2 are : "<<endl;
        for(int j=top2;j<max_size;j++){
            cout<<stack[j]<<endl;
        }
    }
}

};

int main(){
    stack s1 ;
    s1.push(2,2);
    s1.push(1,4);
    s1.push(1,8);
    s1.push(2,0);
    s1.push(1,6);
    s1.push(2,3);
    s1.push(2,7);
    s1.push(1,5);
    s1.push(2,9);
    cout<<s1.pop(1)<<endl;
    cout<<s1.pop(1)<<endl;
    cout<<s1.pop(2)<<endl;
    cout<<s1.pop(2)<<endl;
    s1.display(1);
    s1.display(2);
    return 0;
}

