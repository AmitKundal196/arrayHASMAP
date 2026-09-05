class Solution {
public:
void help( int i, int& total,int sum,vector<int>& nums){
    if(i==nums.size()){
        total+=sum;
        return;
    }
    help(i+1,total,sum^nums[i],nums);

    help(i+1,total,sum,nums);

}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
         int total=0;
         int sum=0;
         help(0,total,sum,nums);
         return total;
    }
};