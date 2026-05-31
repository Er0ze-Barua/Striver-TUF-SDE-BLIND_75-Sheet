## Approach

* Initialize three variables:

  * `maxprod` to store the maximum product ending at the current index
  * `minprod` to store the minimum product ending at the current index
  * `ans` to store the overall maximum product
* Traverse the array from index `1`
* If the current element is negative, swap `maxprod` and `minprod`
* Update `maxprod` by choosing between:

  * the current element itself
  * the current element multiplied by the previous maximum product
* Update `minprod` similarly
* Continuously update `ans` with the maximum product found so far
* Return `ans`

## Complexity

* Time: O(n)
* Space: O(1)
