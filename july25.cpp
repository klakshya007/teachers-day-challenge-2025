class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int eveCount=0;
        for(int i=0;i<nums.size();i++){
            int count = log10(nums[i])+1;
            if(count%2==0)eveCount++;
        }
        return eveCount;
    }
};