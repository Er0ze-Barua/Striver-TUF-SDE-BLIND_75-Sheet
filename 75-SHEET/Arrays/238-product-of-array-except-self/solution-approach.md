## Approach

* First initialize an answer vector of size `n` with all elements as `1`
* Traverse the array from left to right and store the prefix product at every index inside the answer vector
* Each index stores the product of all elements present before it
* Initialize a variable `suff` as `1`
* Traverse the array from right to left
* Multiply the current answer element with the suffix product
* Update the suffix product by multiplying it with the current array element
* Finally return the answer vector

## Complexity

* Time: O(n)
* Space: O(1) extra space (excluding the output array)
