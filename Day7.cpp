/*
You are given coins of different denominations and a total amount of money. Write a function to compute the number of combinations that make up that amount. You may assume that you have infinite number of each kind of coin.
Input: amount = 5, coins = [1, 2, 5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
*/
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        const int c = coins.size();
        vector<int> dp(amount+1,0);
        dp[0]=1;
        for(int i =0;i<c;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(j>=coins[i])
                {
                    dp[j] = dp[j]+dp[j-coins[i]];
                }
            }
        }
        return(dp[amount]);
    }
};
