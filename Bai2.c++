#include <iostream>
#include <limits>
using namespace std;

int main(){
    int n = 0;
    cout << "Nhap n: ";
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
    
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        while (true) {
            cout << "Nhap arr[" << i << "]: ";
            cin >> arr[i];

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Nhap lai arr[" << i << "]: " << endl;
            } else if (arr[i] < 0) {
                cout << "Nhap lai arr[" << i << "]: " << endl;
            } else {
                break;
            }
        }
        
    }
    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    
    if (temp == -1)
    {
        cout << "Khong co" << endl;
    }
    else
    {
        cout << temp << endl;
    }
}