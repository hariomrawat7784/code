#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int sum,i;
    sum = 0;
    i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i<=10);
    cout <<"total is ="<<sum;
    return 0;
}
