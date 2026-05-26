class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> vec;
        int sum=0;
        int max=INT_MIN;
        int n =nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};