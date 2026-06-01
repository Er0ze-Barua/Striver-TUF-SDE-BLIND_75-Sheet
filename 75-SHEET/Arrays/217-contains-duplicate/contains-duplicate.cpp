class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> numbers ;
       int n = nums.size() ;

       for (int i = 0 ; i<n ; i++) {
        numbers.insert(nums[i]) ;
       }
       if (n == numbers.size()) {
        return false ;
       }
       return true ; 
    }
};