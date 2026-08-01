class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
   unordered_map<int,int>mp;
   int count=0;
   for(int val:nums){
    mp[val]++;
        
    }
       for(int val:nums){
    if(mp[val]>1) count++;
    }
 
   if(count>1){
    return true;
   }
   return false;
    }
};