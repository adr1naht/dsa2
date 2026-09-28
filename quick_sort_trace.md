# Quick Sort Trace

Input: `45 72 30 90 65 50 85`

The program uses the first element of each subarray as the pivot.

| Partition | Pivot | Range | Array after partition |
|---|---:|---|---|
| 1 | 45 | [0,6] | 30 45 72 90 65 50 85 |
| 2 | 72 | [2,6] | 30 45 65 50 72 90 85 |
| 3 | 65 | [2,3] | 30 45 50 65 72 90 85 |
| 4 | 90 | [5,6] | 30 45 50 65 72 85 90 |

Final sorted sequence: **30 45 50 65 72 85 90**
