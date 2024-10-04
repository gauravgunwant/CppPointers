#include<bits/stdc++.h>
using namespace std;

// 20:38 hw! ---> https://youtu.be/j2GInxA3HpI?list=PLQEaRBV9gAFttZ9ArI8oMp8eVrBC8ey-Y&t=1244
void fnn(int *(&p1)){
    p1++;
}

int main(){
    // int n =10;
    // int *p = &n;
    // fnn(p);
    // cout << p;

    // modifying value using multiple pointers!

    int x =5;
    int *p = &x;
    int **p1 = &p;
    int ***p2 = &p1;
    ***p2 = ***p2 + 5;

    cout << x << endl; // 10
    

}