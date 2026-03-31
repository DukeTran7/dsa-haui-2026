#include <iostream>
#include <string>
using namespace std;

bool search(string dict[], int left, int right, string word) {
    // nếu chỉ còn 1 "trang" (1 phần tử)
    if (left > right)
        return false;

    int mid = (left + right) / 2;

    if (dict[mid] == word)
        return true;
    else if (word < dict[mid])
        return search(dict, left, mid - 1, word);   // nửa trước
    else
        return search(dict, mid + 1, right, word);  // nửa sau
}

int main() {
    string dict[] = {"apple", "banana", "cat", "dog", "elephant"};
    int n = sizeof(dict) / sizeof(dict[0]);

    string word = "dog";

    if (search(dict, 0, n - 1, word))
        cout << "Found";
    else
        cout << "Not found";
}