## Approach

* Initialize an answer vector of size `n + 1`
* Set `ans[0] = 0`
* Traverse from `1` to `n`
* For every number, use the relation:

  * `ans[i] = ans[i & (i - 1)] + 1`
* `i & (i - 1)` removes the lowest set bit from the current number
* Since the count for the smaller number is already known, add `1` for the removed bit
* Store the result in the answer vector
* Return the answer vector

## Complexity

* Time: O(n)
* Space: O(n)
