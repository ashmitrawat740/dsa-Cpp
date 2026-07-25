// Leetcode 1920
// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {

//         int n = nums.size();

//         vector<int> ans(n);

//         for(int i=0;i<n;i++)
//         {
//             ans[i]=nums[nums[i]];
//         }

// Leetcode 1929
// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {

//         int n = nums.size();

//         vector<int> ans(2*n);

//         for(int i = 0; i < n; i++)
//         {
//             ans[i] = nums[i];
//             ans[i+n] = nums[i];
//         }

//         return ans;
//     }
// };

Leetcode 1480
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        for(int i = 0; i < n; i++)
        {
            int sum = 0;

            for(int j = 0; j <= i; j++)
            {
                sum += nums[j];
            }

            ans[i] = sum;
        }