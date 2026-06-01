## Approach

* First initialize an empty set to store the elements that have already been seen
* Start traversing the array using a single loop
* For each element, check whether it already exists inside the set
* If the element is already present, it means a duplicate has been found, so return `true`
* Otherwise, insert the current element into the set
* If the traversal completes without finding any duplicate element, return `false`

## Complexity

* Time: O(n)
* Space: O(n)

## Other Possible Approaches

### 1. Brute Force

* Use two nested loops
* Compare every element with every other element
* If any two elements are equal, return `true`

#### Complexity

* Time: O(n²)
* Space: O(1)

---

### 2. Sorting Approach

* First sort the array
* Then traverse the array once
* Compare every element with its adjacent element
* If two adjacent elements are equal, return `true`

#### Complexity

* Time: O(n log n)
* Space: O(1) (excluding sorting space used internally)

---

### 3. XOR Approach (Tried the idea, Not Reliable)

* XOR works only in special cases where elements follow specific repetition patterns
* Different arrays can produce the same XOR value
* Hence it cannot reliably detect duplicates in a general array

#### Complexity

* Time: O(n)
* Space: O(1)
