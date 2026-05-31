## Approach

* Use recursion to explore all possible ways to form the target amount
* At every index, there are two choices:

  * take the current coin
  * skip the current coin and move to the next one
* If the amount becomes `0`, a valid combination has been found
* If all coins have been processed or the amount becomes negative, return `0`
* Use a 2D DP array to store already computed states
* Each state is represented by:

  * current coin index
  * remaining amount
* Before solving a state, check if it already exists in the DP array
* Store and return the computed result
* Return the total number of valid combinations

## Complexity

* Time: O(n × amount)
* Space: O(n × amount)
