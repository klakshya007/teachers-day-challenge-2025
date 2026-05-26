class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Three Possible Approaches
        //First : Brute Force - running a nested loop and returning the two numbers
        //Second : Two Pass Hashmap : Create a hashtable
        //Iterate through the array and select the complement by subtracting the 
        //i-th element from the target, then use the count function of hashmap
        //Third: One Pass Hashmap : Same as two pass just merge both the creation
        //loop of the hashmap with the iteration loop
        //THIRD SOLUTION
        map<int,int>numMap;
        for(int i=0;i<nums.size();i++){
            numMap[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(numMap.count(complement) && numMap[complement]!=i){
                return {numMap[complement],i};
            }
        }
        return {};
    }
};