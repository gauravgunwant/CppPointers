#include<bits/stdc++.h>
using namespace std;

int main(){
    // variable assignation in pointers, and using them!
    int *ptr = new int;
    *ptr = 5; // value assigned!
    float *ptr1 = new float;
    *ptr1 = 3.144; // value assigned!

    cout << *ptr << " "<< *ptr1 << endl;

    // array assignation in pointers, and using them!
    int n;
    cin >> n;
    int *ptr2 = new int[n];

    // giving values to array indexes!

    for (int i =0; i<n;i++){
        ptr2[i] = i+1;
    }
    
    // printing values!

    for (int i =0; i<n;i++){
        cout << ptr2[i] << endl;
    }
    
    // Deleting all the created heap memories! 
    delete ptr;
    delete ptr1;
    delete[] ptr2; // deleting array!


}   
