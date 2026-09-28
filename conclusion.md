# Final Conclusion

The given patient severity scores were successfully inserted into a Max Heap, and the heap was recorded after every insertion. The final Max Heap was:

`90 72 85 45 65 30 50`

Both Heap Sort and Quick Sort sorted the severity scores into:

`30 45 50 65 72 85 90`

Heap Sort provides O(n log n) worst-case sorting time and O(1) auxiliary space in the implemented version. Quick Sort has O(n log n) average time but can take O(n²) in the worst case.

For the hospital's continuously changing priority queue, the **Max Heap** is the suitable data structure because it keeps the highest severity score at the root. A new patient's score can be inserted in O(log n), while the highest-priority score can be accessed in O(1).
