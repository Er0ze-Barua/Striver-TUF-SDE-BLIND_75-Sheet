## Approach

* Initialize a variable `count` as `0`
* Traverse the number until it becomes `0`
* Check whether the last bit is set by checking if the number is odd
* If it is set, increment `count`
* Divide the number by `2` to move to the next bit
* Continue until all bits have been processed
* Return `count`

## Complexity

* Time: O(number of bits)
* Space: O(1)

## Note

* This can be optimized using `n & (n - 1)` which removes the lowest set bit in every iteration
