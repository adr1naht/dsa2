# Complexity Analysis

## 1. Max Heap

- Insertion: **O(log n)** in the worst case.
- Access highest-priority element (root): **O(1)**.
- Delete maximum: **O(log n)**.
- Building a heap by repeated insertion: **O(n log n)**.
- Array-based heap space: **O(n)**.
- For 7 elements, the heap height is `floor(log2(7)) = 2` (root at level 0).

## 2. Heap Sort

- Best case: **O(n log n)**
- Average case: **O(n log n)**
- Worst case: **O(n log n)**
- Extra auxiliary space: **O(1)** for the in-place implementation.

## 3. Quick Sort

- Best case: **O(n log n)**
- Average case: **O(n log n)**
- Worst case: **O(n²)** when partitions are highly unbalanced.
- Recursion stack: **O(log n)** average; **O(n)** worst case.

## Observation

For this input, both sorting algorithms produce:

`30 45 50 65 72 85 90`

The Max Heap is specifically useful for the hospital priority-queue requirement because the maximum severity is always stored at the root.
