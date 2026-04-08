#include <iostream>
using namespace std;

    
void nhapMang(int a[], int n){
    for (int i=0;i <n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int a[], int n){
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; // Khong co swap mang da duoc sap xep
    }
}

int main() {
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
    }while(n<=0 || n>=100);

    int a[100];
    nhapMang(a,n);
    bubbleSort(a,n);
    xuatMang(a,n);
    return 0;
}

