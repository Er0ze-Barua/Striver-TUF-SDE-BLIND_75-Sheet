## Approach

* Initialize a variable `result` as `0`
* Iterate exactly `32` times since an integer contains `32` bits
* In each iteration:

  * Left shift `result` by one position
  * Extract the last bit of `n` using `n & 1`
  * Add the extracted bit to `result`
  * Right shift `n` by one position
* This gradually builds the reversed bit sequence inside `result`
* Return `result`

## Complexity

* Time: O(1)
* Space: O(1)
