#include <iostream>
using namespace std;

void nhapDay(int X[], int n){
    for(int i=0; i<n; i++){
        cout << "a[" << i << "] = ";
        cin >> X[i];
    }
}

void inDay(int X[], int n){
    for(int i=0 ; i< n; i++){
        cout << X[i] << " ";
    }
}

void selectionSort(int X[], int n){
    for(int i=0; i<n-1; i++){
        int m =i;
        for(int j=i+1; j<n; j++){
            if(X[j]<X[m]){
                m = j;
            }
        }
        if(m!=i){
            swap(X[i], X[m]);
        }
    }
}

int main(){
    int x[100];
    int n;
    do{
        cout << "Nhap so phan tu cua day: ";
        cin >> n;
    }while(n<0 || n>100);
    cout << "Nhap day: " << endl;
    nhapDay(x, n);
    cout << "Day da nhap: ";
    inDay(x, n);
    cout << endl;
    selectionSort(x, n);
    cout << "Day da sap xep: ";
    inDay(x, n);

}
