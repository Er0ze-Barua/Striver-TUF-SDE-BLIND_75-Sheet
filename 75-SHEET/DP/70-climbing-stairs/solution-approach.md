## Approach

* Use recursion to calculate the number of ways to reach the nth stair
* For `n <= 1`, return `1` since there is only one way to stay at or reach that position
* Initialize a DP array to store previously computed results
* Before solving a state, check if it has already been computed
* If yes, return the stored value
* Otherwise, calculate the answer using:

  * ways to reach `n - 1`
  * ways to reach `n - 2`
* Store the result in the DP array
* Return the final answer

## Complexity

* Time: O(n)
* Space: O(n)
