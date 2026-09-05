class Solution {
public: 
void help(int start,vector<int>&temp,vector<vector<int>>&ans, vector<int>&nums){
 if(start==nums.size()){
    ans.push_back( temp);
    return;
 }   
     temp.push_back(nums[start]);
    help(start+1,temp,ans,nums);
    temp.pop_back();
    help(start+1,temp,ans,nums);
 
}
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int> temp;
         help(0,temp,ans,nums);
         return ans;

    }
};
