class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int start=0;
        int end=n-1;
          int maxwater=0;
        while(start<end){
              int width=end-start;
              int h=min(heights[start],heights[end]);
              int area=width*h;
              maxwater=max(maxwater,area);

              if(heights[start]<heights[end]){
                start++;
              }
              else{
              end--;
              }

        }
     

        return maxwater;
    }
};
