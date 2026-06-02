class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int sum=0;
        int l=0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            if(i-l+1>k){
                sum-=nums[l];
                l++;
            }
            if(i-l+1==k){
                maxi=max(maxi, sum);
            }
        }
         return (double)maxi/k;
    }
};
