## Approach

* Use bitwise operations to simulate addition
* Traverse until there is no carry remaining
* Calculate the carry using `a & b`
* Left shift the carry by one position since carry affects the next bit
* Calculate the sum without carry using `a ^ b`
* Update `a` with the partial sum
* Update `b` with the carry
* Repeat the process until `b` becomes `0`
* Return `a` as the final answer

## Complexity

* Time: O(1)
* Space: O(1)
