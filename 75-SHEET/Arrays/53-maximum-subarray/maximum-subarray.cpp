class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> dp(n+1) ;

        dp[0] = nums[0] ;
        int max_sum = dp[0] ;

        for (int i = 1 ; i<n ; i++) {
            dp[i] = max(nums[i] , nums[i] + dp[i-1]) ;
            max_sum = max(max_sum , dp[i]) ;
        }

        return max_sum ;
    }
};