#include<iostream>
using namespace std;

int main() {
    
    //ι
    int a = 10;
    cout << !a << endl; // 0
    cout << !!a << endl; // 1
    system("pause");
    return 0;

    //δΈ
    int a = 10;
    int b = 10;
    cout << (a && b) << endl;// 1
    
    a = 10;
    b = 0;
    cout << (a && b) << endl;// 0

    a = 0;
    b = 0;
    cout << (a && b) << endl;// 0

    //ζ
    int a = 10;
    int b = 10;
    cout << (a || b) << endl;// 1
   
    a = 10;
    b = 0;
    cout << (a || b) << endl;// 1
   
    a = 0;
    b = 0;
    cout << (a || b) << endl;// 0

    system("pause");
    return 0;
}

