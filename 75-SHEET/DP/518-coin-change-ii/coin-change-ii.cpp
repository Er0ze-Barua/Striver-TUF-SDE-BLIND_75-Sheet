class Solution {
public:
int helper(int i,int amount, vector<int>& coins , vector<vector<int>>&dp) {
    if (amount == 0) {
        return 1 ;
    }
    if (i == coins.size()) {
        return 0 ;
    }
    if (amount < 0) {
        return 0 ;
    }

    if (dp[i][amount] != -1) {
        return dp[i][amount] ;
    }
    int take = helper(i, amount-coins[i] , coins ,dp) ;
    int not_take = helper(i+1 , amount , coins , dp) ;

    return dp[i][amount] = take + not_take ;
}
    int change(int amount, vector<int>& coins) {
        int n = coins.size() ;
        vector<vector<int>> dp( n ,vector<int>(amount+1 , -1)) ;
        return helper(0 , amount, coins ,dp) ;
    }
};