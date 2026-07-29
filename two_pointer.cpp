// Left rotate array by one
// #include <bits/stdc++.h>
// vector<int> rotateArray(vector<int> &arr, int n) {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++) {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
//     return arr;
// }

// Rotate array by D space
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// void leftRotate(int arr[], int n, int d) {
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n);
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     leftRotate(arr,n,d);
//     for(int i=0;i<n;i++) {
//         cout << arr[i] << " ";}
//     return 0;
// }

// Move zeros to end 
// vector<int> moveZeros(int n, vector<int> a) {
//     int j = -1;
//     for(int i = 0; i < n; i++) {
//         if(a[i] == 0) {
//             j = i;
//             break;
//         }
//     }
//     if(j == -1) return a;
//     for(int i = j + 1; i < n; i++) {
//         if(a[i] != 0) {
//             swap(a[i], a[j]);
//             j++;
//         }
//     }
//     return a;
// }

// Leetcode 26 
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i = 1;
//         for(int j = 1; j < nums.size();j++){
//             if (nums[j] != nums[i-1]){
//                 nums[i] = nums[j];
//                 i++;
//             }
//         }
//         return i;
//     }
// };

// Leetcode 283 Move Zeros
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = -1;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == 0){
//                 j = i;
//                 break;
//             }
//         }
//         if(j == -1){
//             return;
//         }
//         for(int i = j+1; i < nums.size(); i++){
//             if(nums[i] != 0){
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//         return ;
//     }
// };


// Leetcode 189 Rotate Array
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size();
//         rotate(nums.begin(), nums.end());
//         rotate(nums.begin(), nums.begin() + k);
//         rotate(nums.begin() + k, nums.end());
//     return;}
// };