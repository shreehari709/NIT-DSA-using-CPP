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
	cout<<"---------Print Array---------"<<endl;
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
			max = arr[i;
		}
	}
		cout<<"The Largest element is = "<<max;
	
	return 0;
}*/
//3.Write a program to find the largest element in an array using a pointer.
/*#include<iostream>
using namespace std;
int main(){
	int n,max;
	cout<<"Print the Size of Array = ";
	cin>>n;
	max=0;
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
	int n,sum;
	cout<<"Print the Size of Array = ";
	cin>>n;
	sum=0;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
	for(int i =0;i<n;i++){
		sum = arr[i]+sum;	
	}
		cout<<"The Sum is = "<<sum;
	
	return 0;
}*/
//5.Sum of all elements in an array using pointer.
/*#include<iostream>
using namespace std;
int main(){
	int n,sum;
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
		cout<<"The Sum is = "<<sum;
	
	return 0;
}*/
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
#include<iostream>
using namespace std;
int main(){
	int mat1[3][3], mat2[3][3], result[3][3];
  	cout << "\nEnter elements for the first matrix:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(*(mat1 + i) + j);
        }
    }

    cout << "\nEnter elements for the second matrix:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(*(mat2 + i) + j);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < 3; ++k) {
                *(*(result + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
        }
    }

    cout << "\nResultant Matrix after multiplication:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << *(*(result + i) + j) << " ";
        }
        cout << "\n";
    }
	return 0;
}


