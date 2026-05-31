## Approach

* Traverse the array from the beginning
* Compare every element with the target value
* If the target is found, return its index
* If the entire array is traversed and the target is not found, return `-1`

## Complexity

* Time: O(n)
* Space: O(1)

## Note

* Since the array is rotated but originally sorted, this problem can be solved in O(log n) time using Binary Search
