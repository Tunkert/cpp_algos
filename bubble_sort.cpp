//
// Created by tunkert on 10/25/22.
//

#include <iostream>

using namespace std;

int * returnSorted(int arr[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int main() {
    int arr[5];
    int newArr[5];
    int idx = 0;
    while(idx < 5) {
        cout << "Enter a number, bro: ";
        cin >> arr[idx];
        idx = idx + 1;
    }
    newArr[0] = returnSorted(arr)[0];
    newArr[1] = returnSorted(arr)[1];
    newArr[2] = returnSorted(arr)[2];
    newArr[3] = returnSorted(arr)[3];
    newArr[4] = returnSorted(arr)[4];
    cout << "The sorted array is: " << endl;
    for (int i : newArr) {
        cout << i << endl;
    }
}