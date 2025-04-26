#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    while (true) {
        cin >> n;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Nhap lai n: ";
        } else if (n <= 0) {
            cout << "Nhap lai n: ";
        } else {
            break;
        }
    }
    
    char arr[n];
    
    cout << "Nhap " << n << " phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    cout << "Cac gia tri phan biet trong mang la: ";
        
    for (int i = 1; i < n; i++) {
        bool isDuplicate = false;
        
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}