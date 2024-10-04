#include<bits/stdc++.h>
using namespace std;
void StringCopy(char *str1,char *str2){
    while (*str1=*str2){
        str1++;
        str2++;

    }

}
int main() {
    char arr[5] = "1234"; // last character is null char!
    char *ptr = arr;
// if there is character type data then it will print untill null character is found.. it's just implemented like that!
    cout << arr << endl; // both 8 and 9 line  will print 1234..  
    cout << ptr << endl;
    // pointers in characters are different then integer!

    cout << (void*) arr << endl;
    cout << (void*) ptr << endl;

    // for normal char.! it will work as same as array character.!
    char name ='B';
    char *ptr1 = &name;
    cout << &name << endl; // random chars!
    cout << ptr1 << endl;
    cout << (void*)&name << endl;  // now it will give address!
    cout << (void*)ptr1 << endl;

    // question 1!

    char x[] = "Gate2024";
    char *px = x;
    cout << px + px[3] - px[1]; // adress + 69 - 64 = 104 --> 2 . and then it prints until it gets null character!

// STRING COPY PROGRAM!
    char first[] = "ROHIT";
    char second[] = "MOHIT";
    
    StringCopy(first,second);
    cout << first; // MOHIT!
}