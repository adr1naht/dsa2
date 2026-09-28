# Comparison Table

| Feature | Max Heap / Priority Queue | Heap Sort | Quick Sort |
|---|---|---|---|
| Main purpose | Maintain highest priority | Sorting | Sorting |
| Highest value access | O(1) | Not the main operation | Not the main operation |
| Insertion | O(log n) | N/A | N/A |
| Delete maximum | O(log n) | N/A | N/A |
| Average sorting time | N/A | O(n log n) | O(n log n) |
| Worst-case sorting time | N/A | O(n log n) | O(n²) |
| Extra space | O(n) for heap storage | O(1) | O(log n) average recursion |
| Suitable for continuous priority updates | Yes | No | No |

## Conclusion from the comparison

For a hospital that continuously inserts patients and needs the highest-priority patient immediately, a **Max Heap priority queue** directly supports the required operations. The maximum severity is maintained at the root, giving O(1) access to the highest-priority patient and O(log n) insertion.
