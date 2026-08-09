class Solution {
public:
    int characterReplacement(string s, int k) {
         int left=0;
         int right=0;
         int ans=0;
         vector<int>freq(26,0);
         for(char ch:s){
            freq[ch-'A']++;
         int maxfreq=0;
         for(int x:freq){
            maxfreq=max(maxfreq,x);
         }
        while((right-left+1)-maxfreq>k){
             freq[s[left]-'A']--;
             left++;
        }
       
        ans=max(ans,right-left+1);
         right++;
         }
         return ans;
    }
};
