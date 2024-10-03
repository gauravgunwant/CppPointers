#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr =arr;
    cout << arr << endl; // it will give the address of the array.! 
    cout << arr+0 << endl; // it will also give the address of the array.! also arr = arr+0
    cout << &(arr[0]) << endl; // it will also give the address of the array.! 

    // printing the arrays using pointers 
    for (int i = 0; i < 5; i++){
        cout << *(arr+i) << endl;
    }
    // second method
    cout << "SECOND METHOD"<<endl;
    for (int i = 0; i < 5; i++){
        cout << ptr[i] << endl;
    }
    // printing all the address of array
    for (int i = 0; i < 5; i++){
        cout << arr+i << endl; // or ptr+i 
    }

    // Arithmetic Operations ++ ,--
    cout << "ARITHMETIC OPERATIONS!"<< endl;

    for (int i=0;i < 5;i++){
        cout << *(ptr) << endl; // ptr = ptr+1
        ptr++;
    }

    for (int i=0;i <5 ;i++){
        cout << *(ptr +4)  << endl;
        ptr--;
    } 
    
    // address can't be changed.!
    
}