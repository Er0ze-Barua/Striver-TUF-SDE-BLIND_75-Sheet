## Approach

* Handle the case where the array contains only one element
* If the first element is smaller than the last element, the array is already sorted
* In that case, return the first element directly
* Traverse the array from index `1`
* Find the position where the current element becomes smaller than the previous element
* This point represents the rotation point
* Return the current element as the minimum value
* If no such point is found, return the stored answer

## Complexity

* Time: O(n)
* Space: O(1)

## Note

* Since the array is sorted and rotated, this problem can be solved in O(log n) time using Binary Search
