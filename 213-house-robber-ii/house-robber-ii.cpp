class Solution {
public:
int helper(vector<int>& nums, int i , vector<int> &dp) {
    if (i<0) {
        return 0 ;
    }
    if (dp[i] != -1) {
        return dp[i] ;
    }
    int pick = nums[i] + helper(nums, i-2 , dp) ;
    int skip = helper(nums, i-1 , dp) ;

    return dp[i] = max(pick,skip) ;
}
    int rob(vector<int>& nums) {
        int n = nums.size() ;
        if (n==1) {
            return nums[0] ;
        }
        vector<int> ans1 ;
        vector<int> ans2 ;

        for(int i = 0 ; i< n ; i++) {
            if(i != n-1) ans1.push_back(nums[i]) ;
            if(i != 0) ans2.push_back(nums[i]) ;
        }

        vector<int> dp1(n,-1) ;
        vector<int> dp2(n, -1) ;

        int r1 = helper(ans1 , ans1.size()-1 , dp1) ;
        int r2 = helper(ans2, ans2.size()-1 , dp2) ;

        return max(r1,r2);
    }
};