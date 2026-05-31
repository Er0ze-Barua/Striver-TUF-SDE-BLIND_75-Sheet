## Approach

* Initialize two pointers, one at the beginning and one at the end of the array
* Calculate the area formed by the two lines using the minimum height and the distance between them
* Store the maximum area obtained so far
* Move the pointer having the smaller height inward
* This is because the current height limits the area, so moving the taller line cannot produce a larger area
* Continue until both pointers meet
* Return the maximum area found

## Complexity

* Time: O(n)
* Space: O(1)
