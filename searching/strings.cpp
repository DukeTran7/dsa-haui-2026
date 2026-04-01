#include <iostream>
#include <string>
using namespace std;


void bubbleSort(string &s, int n){
    for(int i=0; i < n-1;i++){
        for(int j = 0; j < n-i-1;j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
}

int binarySearch(string &s, int l, int r, char key){
    if(r<l){
        return -1;
    }
    else{
        int m = (l+r)/2;
        if(s[m]== key){
            return m;
        }else if(s[m]>key){
            return binarySearch(s, l, m-1, key);
        }else{
            return binarySearch(s, m+1, r, key);
        }
    }
}

int main(){
    string s ="nguyenvana";
    int n = s.length();

    bubbleSort(s,n);
    cout << s << endl;

    int r = n;
    char key = 'n';
    int result = binarySearch(s, 0, r, key);
    cout << "Tìm được 'n' tại vị trí: " << result;
    return 0;
}