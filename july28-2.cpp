class Solution {
    //the first brute force option is to iterate over the vector with the help of nested loops and one by one calculate the maximum difference and store them 

    //the second option is to use a single iteration and in every iteration calculate the profit keep the price minimum for the first day and try to find the highest difference

public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(minPrice>prices[i])minPrice=prices[i];
            int profit = prices[i]-minPrice;
            if(profit>maxProfit)maxProfit=profit;
        }
        return maxProfit;
    }
};