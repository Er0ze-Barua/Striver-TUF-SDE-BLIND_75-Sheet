## Approach

* Sort the array first
* Traverse the array and fix one element at a time
* For every fixed element, use two pointers to find the remaining two elements
* Initialize one pointer just after the fixed element and the other at the end of the array
* Calculate the sum of all three elements
* If the sum is `0`, store the triplet and move both pointers
* Skip duplicate values to avoid adding the same triplet multiple times
* If the sum is smaller than `0`, move the left pointer forward
* If the sum is greater than `0`, move the right pointer backward
* Continue until all valid triplets are found

## Complexity

* Time: O(n²)
* Space: O(1) excluding the output array
