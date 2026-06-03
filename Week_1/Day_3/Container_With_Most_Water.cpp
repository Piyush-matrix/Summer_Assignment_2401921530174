class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int l=0;
        int r=n-1;
        int wid,ht,curr;
        while(l<r){
            wid=r-l;
            ht=min(height[l],height[r]);
            curr=wid*ht;
            ans=max(curr,ans);
            
            height[l]<height[r]?l++:r--;
        } return ans;
        
    }
};
