#include <iostream>
#include<cstdio>
using namespace std;

typedef struct{
    char hoTen[50]; // chuoi ki tu
    int namsinh;
    float dt, dl, tdiem;
} SV;

void Nhap(SV a[], int n){
    SV tg;
    for(int i=0; i<n; i++){
        cin.ignore();   // thay fflush(stdin)
     // xoa bo dem
        cout << "\nHo ten: "; cin.getline(a[i].hoTen, 50);
        cout << "\nNam sinh :"; cin >> tg.namsinh;
        cout << "\nDiem toan: "; cin >> tg.dt;
        cout << "\nDiem ly: "; cin >> tg.dl;
        tg.tdiem = tg.dt + tg.dl;
        a[i] = tg;
    }
}

void Xuat(SV a[], int n){
    cout << "\nHo ten\tNam sinh\tToan\tLy\tTong\n";
    for(int i = 0; i < n; i++){
        cout << a[i].hoTen << "\t"
             << a[i].namsinh << "\t"
             << a[i].dt << "\t"
             << a[i].dl << "\t"
             << a[i].tdiem << endl;
    }
}

void svDiemMax(SV a[], int n){
    float max = a[0].tdiem;
    for (int i = 1; i < n; i++){
        if(max < a[i].tdiem){
            max = a[i].tdiem;
        }
    }
    for (int i = 0; i < n; i++){
        if(max == a[i].tdiem){
            cout << a[i].hoTen << "\t";
            cout << a[i].namsinh << "\t";
            cout << a[i].dt << "\t" << a[i].dl << "\t";
            cout << a[i].tdiem << endl;
        }
    }
}

void SelectSort(SV a[], int n){
    SV tg;
    for(int i=0; i<n; i++){
        int m =i;
        for (int j = i+1; j < n; j++){
            if(a[j].tdiem < a[m].tdiem){
                m = j;
            }
        }
        if(m!=i){
            swap(a[i],a[m]);
        }
    }
}

int main(){
    system("clear"); //clrscr();
    SV a[100];
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cout << "Nhap thong tin sinh vien :" << endl;
    Nhap(a, n);
    Xuat(a, n);
    SelectSort(a, n);
    cout << "Sinh vien sau khi sap xep" << endl;
    Xuat(a, n);
    cout << "Sinh vien co tong diem cao nhat: " << endl;
    svDiemMax(a, n);
}