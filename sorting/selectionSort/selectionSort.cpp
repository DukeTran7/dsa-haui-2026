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

void selectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int m =i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[m]){
                m = j;
            }
        }
        swap(a[i], a[m]);
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
    selectionSort(a,n);
    xuatMang(a,n);
    return 0;
}

