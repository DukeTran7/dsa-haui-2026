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
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
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

