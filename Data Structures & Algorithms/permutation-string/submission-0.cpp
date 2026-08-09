class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         vector<int>freq1(26,0);
         vector<int>freq2(26,0);
         int ans=0;
         for(char ch:s1){
            freq1[ch-'a']++;
         }
              int left=0;
              int right=0;
             for(char c:s2){
             freq2[c-'a']++;

             while(right-left+1>s1.size()){
                freq2[s2[left]-'a']--;
                left++;
             }
             if(freq1==freq2){
                return true;
             }
             right++;
             }
         return false;
    }
};