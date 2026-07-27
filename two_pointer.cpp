Left rotate array by one
#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

Rotate array by D space
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d) {
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";}
    return 0;
}

Move zeros to end 
vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }
    if(j == -1) return a;
    for(int i = j + 1; i < n; i++) {
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}