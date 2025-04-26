#include <iostream>
#include <limits>

using namespace std;

struct SinhVien
{
    string ten;
    float toan, ly, hoa;
};

int nhapDiem(){
    int diem = 0;
    cout << "Nhap diem: ";
    while (true) {
        cin >> diem;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Nhap lai n: ";
        } else if (diem <= 0) {
            cout << "Nhap lai diem: ";
        } else {
            break;
        }
    }
    return diem;
}
int main(){
    int n = 0;
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
    SinhVien* arr = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Sinh Vien "<<i+1<<endl;
        cout<<"Nhap ten: ";
        cin>>arr[i].ten;
        cout<<"Nhap diem toan: ";
        arr[i].toan = nhapDiem();
        cout<<"Nhap diem ly: ";
        arr[i].ly = nhapDiem();
        cout<<"Nhap diem hoa: ";
        arr[i].hoa = nhapDiem();
    }
    for (int i = 0, temp; i < n; i++)
    {
        temp = (arr[i].toan + arr[i].ly + arr[i].hoa) / 3;
        if (temp >= 8)
        {
            cout << "Sinh vien " << arr[i].ten << endl << "Diem toan:"<< arr[i].toan<< endl<< "Diem ly:"<< arr[i].ly<< endl<< "Diem hoa:"<< arr[i].hoa<< endl<< "Diem trung binh:"<< temp << endl<<endl;
        }
    }
    
}