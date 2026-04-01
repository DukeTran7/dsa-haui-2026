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

void insertionSort(int x[], int n){
    for (int i = 1; i < n; i++){
        int tam = x[i];
        int j = i-1;
        while(j>-1 && x[j]>tam){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = tam;
    }
}

int main(){
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
    }while(n<=0 || n>=100);

    int a[100];
    nhapMang(a,n);
    insertionSort(a,n);
    xuatMang(a,n);
    return 0;
}