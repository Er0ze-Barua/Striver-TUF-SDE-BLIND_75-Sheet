## Approach

* Use recursion and backtracking to generate all possible combinations
* Start from index `0` and keep track of the remaining target value
* At every index, there are two choices:

  * take the current element
  * skip the current element and move to the next index
* If the current element is taken, stay at the same index since elements can be used multiple times
* If the target becomes `0`, a valid combination has been found
* If the target becomes negative or the index goes out of bounds, stop exploring that path
* Store the current combination in a temporary vector
* Use backtracking to remove the last chosen element before exploring the next choice
* Add every valid combination to the final answer

## Complexity

* Time: O(2^target) (worst case)
* Space: O(target)