class Solution {
public:
int helper(int n, vector<int>&ans) {
    if (n<= 1) {
        return 1 ;
    }
    if (ans[n] != -1) {
        return ans[n] ;
    }

    return ans[n] = helper(n-1, ans) + helper(n-2, ans) ;
}
    int climbStairs(int n) {
        vector<int> ans(n+1 , -1) ;
        return helper(n,ans) ;
    }
};