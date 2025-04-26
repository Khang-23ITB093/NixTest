#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n =0;
    cin>>n;
    if (n <= 2)
    {
        cout<<"Khong co so nguyen to";
    }
    
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i) == true)
        {
            cout<<i<<" ";
        }
    }
}
