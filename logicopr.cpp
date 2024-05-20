#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int n = f,f1= -1, f2 = 1;
    cout << "Enter no. of terms";
    cin >> n;
    while (n>0)
    {
        f = f1+f2;
        f1= f2;
        f2 = f;
        cout << f << endl;
        n--;
        
    }
}
