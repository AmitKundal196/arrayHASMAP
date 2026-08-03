class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int left=0;
        int right=0;
         unordered_map<char,int>mp;

         while(right<n){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                left++;
            }
            int curr_ans=right-left+1;

            ans=max(ans,curr_ans);
            right++;
         }
      return ans;
    }
};
