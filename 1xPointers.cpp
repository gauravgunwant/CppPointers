#include<bits/stdc++.h>
using namespace std;
// we get to see the output of any variable due to symbol table, in symbol table there is variable and adress column, first we see the variable and then see the adress and we go to the adress and then the output comes.!

// 4gb = 2^32 bytes , 8gb = 2^33 (no) ==> 8gb = 2^64BYTE , 64 is taken because 33 is not a power of 2.

// to store the adress , we use pointers.! as they are used to contain the adress.. (symbol table contains :- variable and adress of the variable!)

int main(){
    int x = 10;
    cout << &x << endl; // & is used to get the address of x variable!

    int * ptr = &x;
    cout << ptr << endl; // another way to print adress of var..!
    cout << *ptr << endl; // this will print the value of x i.e., 10 as * here is used as deref operator!
    cout << *(&x) << endl; // & is used to get the address of x variable! and again * is used as deref operator!
// also the outputs will be in hexadecimal form.. but they are actually in binary form!

    int a = 110;
    int *pt1 = &a;
    int b = 20;
    pt1 = &b; // we dont need to initialise the ptr again as it was alr. initialized so we dont need to use * again!
    cout<< sizeof(pt1)<<endl; // 8byte!
    cout<< pt1<<endl;

    return 0;
}
