class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0] ;
        }
        if (nums[0] < nums[nums.size()-1]) {
            return nums[0] ;
        }
        int ans = -1 ;
        for (int i = 1 ; i< nums.size() ; i++) {
            if (nums[i] < nums[i-1]) {
                ans = nums[i] ;
                break ;
            }
        }
        return ans ;
    }
};