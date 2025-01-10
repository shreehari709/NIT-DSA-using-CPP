#include<iostream>
using namespace std;
int add(int a, int b){
	return a+b;
}
int main(){
	int a,b;
	int (*functionPointer)(int, int); 
	cout<<"Enter the Number = ";
	cin>>a;
	cout<<"Enter the Number = ";
	cin>>b;
	functionPointer=add;
	int reuslt = functionPointer(a,b);
	cout<<"Sum of Two Number is "<<reuslt;
	return 0;
}
