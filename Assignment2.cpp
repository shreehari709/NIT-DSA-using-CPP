/*
Assignment 2:
1.	WAP to arrange a list of names in alphabetical order using malloc for memory allocation.
2.	WAP to add/multiply two matrices using using malloc.
3.	WAP to implement function pointer as an argument to the function.
4.	WAP to implement an array of function pointer.
*/
//1.	WAP to arrange a list of names in alphabetical order using malloc for memory allocation.
/*#include<iostream>
using namespace std;
int add(int a, int b){	
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int cal(int a, int b, 	int (*functionPointer)(int, int)){
	cout<<functionPointer(a,b)<<endl;
}
int main(){
	cal(10,5,add);
	cal(10,5,sub);
	return 0;
}*/
//4.	WAP to implement an array of function pointer.
/*#include<iostream>
using namespace std;
int add(int a, int b){	
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int main(){
int (*arrOfPointer[])(int, int)={add,sub};
int x = 10, y = 5;
for(int i = 0; i<=1;i++){
	cout<<"Reuslt = "<<arrOfPointer[i](x,y)<<endl;
}
	return 0;
}*/
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    int **A = (int **)malloc(rows * sizeof(int *));
    int **B = (int **)malloc(rows * sizeof(int *));
    int **Sum = (int **)malloc(rows * sizeof(int *));
    int **Product = (int **)malloc(rows * sizeof(int *));
    
    for (int i = 0; i < rows; i++) {
        A[i] = (int *)malloc(cols * sizeof(int));
        B[i] = (int *)malloc(cols * sizeof(int));
        Sum[i] = (int *)malloc(cols * sizeof(int));
        Product[i] = (int *)malloc(cols * sizeof(int));
    }
    
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];
            
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];
            
    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Product of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Product[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
            cout << Product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    char** names = (char**)malloc(n * sizeof(char*));
    cout << "Enter the names:\n";
    for (int i = 0; i < n; ++i) {
        names[i] = (char*)malloc(100 * sizeof(char));  
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char* temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }    }    }
    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << endl;
    }
  
    return 0;
}
*/
