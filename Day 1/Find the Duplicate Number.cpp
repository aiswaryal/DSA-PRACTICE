//Question: You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


//First Attempt
//Time limit exceeded
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n;
        int x = nums.size();
        n = x-1;
        int ans;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n+1 ; j++){
                if(nums[i] == nums[j]){
                    ans = nums[i];
                }
            }
            
        }
        return ans;
    }
};

