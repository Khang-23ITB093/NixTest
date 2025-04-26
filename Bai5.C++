#include <iostream>
#include <limits>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Nhap lai n: ";
        } else if (n <= 0 || n > 30) { 
            cout << "Nhap lai n: ";
        } else {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}