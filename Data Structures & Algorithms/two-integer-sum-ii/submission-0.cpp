class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n=nums.size()-1;
       int start=0;
         int end=n;
         while(start<end){
            if(nums[start]+nums[end]==target){
              return {start + 1, end + 1};
            }
            if(nums[start]+nums[end]>target){
                end--;
            }
            else
            start++;
         }
    
         return{};
    }
};
