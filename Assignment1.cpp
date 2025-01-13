//1.Write a program to print all elements in an array using pointer.
/* #include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Print the Size of Array = ";
	cin>>n;
	int* arr = new int[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
//	cout<<"---------Print Array---------"<<endl;
	for(int i = 0; i<n;i++){
		cout<<*arr+i<<endl;
	}
	return 0;
}*/
//2.Write a program to find the largest element in an A array.
/*#include<iostream>
using namespace std;
int main(){
	int n,max;
	cout<<"Print the Size of Array = ";
	cin>>n;
	max=0;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max = arr[i];
		}
	}
		cout<<"The Largest element is = "<<max;
	
	return 0;
}*/
//3.Write a program to find the largest element in an array using a pointer.
/*#include<iostream>
using namespace std;
int main(){
	int n,max=0;
	cout<<"Enter the Size of Array = ";
	cin>>n;
	int* arr = new int[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
		if(arr[i]>max){
			max = *(arr+i);
		}
	}
		cout<<"The Largest element is = "<<max;
	
	return 0;
}*/
//4.Sum of all elements in an array.
/*#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Print the Size of Array = ";
	cin>>n;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
		sum = arr[i]+sum;
	}
		cout<<"The Sum is = "<<sum;
	
	return 0;
}*/
//5.Sum of all elements in an array using pointer.
/*#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Print the Size of Array = ";
	cin>>n;
	int* arr = new int[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
		sum = *(arr+i)+sum;	
	}
		cout<<"The Sum is = "<<sum;
	return 0;
}
//5.Sum and average 
/*#include<iostream>
using namespace std;
int main(){
	int n,sum,avg;
	cout<<"Print the Size of Array = ";
	cin>>n;
	sum=0;
	int* arr = new int[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
	for(int i =0;i<n;i++){
		sum = *(arr)+sum;	
	}
		cout<<"The Sum is = "<<sum<<endl;
		avg=sum/n;
		cout<<"The Avg is = "<<avg;
	
	return 0;
}*/
//6.Perform (2D array) matrix multiplication using pointer.

#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible with these dimensions.";
        return 1;
    }
    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2] = {};
    cout << "\nEnter elements for the first matrix:\n";
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols1; ++j)
            cin >> mat1[i][j];
    cout << "\nEnter elements for the second matrix:\n";
    for (int i = 0; i < rows2; ++i)
        for (int j = 0; j < cols2; ++j)
            cin >> mat2[i][j];
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            for (int k = 0; k < cols1; ++k)
                result[i][j] += mat1[i][k] * mat2[k][j];
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            cout << result[i][j] << " ";
        cout << "\n";
    }
    return 0;
}


