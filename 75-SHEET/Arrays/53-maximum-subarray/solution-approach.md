## Approach

* Initialize a DP array where each index stores the maximum subarray sum ending at that particular index
* Set the first element of the DP array as the first element of the input array
* Maintain a variable `max_sum` to store the overall maximum subarray sum
* Traverse the array starting from index `1`
* For every index, decide whether:

  * to start a new subarray from the current element
  * or extend the previous subarray by adding the current element
* Store the maximum of these two choices in the DP array
* Continuously update `max_sum`
* Finally return `max_sum`

## Complexity

* Time: O(n)
* Space: O(n)
