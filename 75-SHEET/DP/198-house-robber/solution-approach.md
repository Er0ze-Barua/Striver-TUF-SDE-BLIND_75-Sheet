## Approach

* Use recursion to find the maximum amount that can be robbed up to a given house
* For every house, there are two choices:

  * rob the current house and move to house `i - 2`
  * skip the current house and move to house `i - 1`
* If the index becomes negative, return `0`
* Use a DP array to store already computed results
* Each DP state represents the maximum money that can be robbed up to index `i`
* Before solving a state, check if it has already been computed
* Calculate both choices and store the maximum of the two
* Return the answer for the last house

## Complexity

* Time: O(n)
* Space: O(n)