#include <iostream>
#include<conio.h>
using namespace std;
int a = 100;//global variable
int main(){
    int m = a;
    int a = 200;
    {
        int k = a;
        int a = 300;
        cout << a ; 
        cout << k;
        cout << ::a;

    }
    cout << m;
    cout << a;
    cout << a;
    getch();

}