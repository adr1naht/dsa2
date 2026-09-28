#include <stdio.h>

#define N 7

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d%s", a[i], (i == n - 1) ? "\n" : " ");
}

void insertMaxHeap(int heap[], int *size, int value) {
    int i = (*size)++;
    heap[i] = value;

    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[parent] >= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;
        i = parent;
    }
}

void maxHeapify(int a[], int n, int i) {
    while (1) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && a[left] > a[largest])
            largest = left;
        if (right < n && a[right] > a[largest])
            largest = right;

        if (largest == i)
            break;

        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        i = largest;
    }
}

void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(a, n, i);

    printf("\nHeap Sort intermediate states:\n");
    for (int end = n - 1; end > 0; end--) {
        int temp = a[0];
        a[0] = a[end];
        a[end] = temp;

        printf("After moving max to position %d: ", end);
        printArray(a, n);

        maxHeapify(a, end, 0);
    }
}

void quickSort(int a[], int low, int high) {
    if (low >= high)
        return;

    int pivot = a[low];
    int i = low, j = high;

    while (i < j) {
        while (i < high && a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;

        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    a[low] = a[j];
    a[j] = pivot;

    printf("Partition: pivot %d, range [%d,%d] -> ", pivot, low, high);
    printArray(a, N);

    quickSort(a, low, j - 1);
    quickSort(a, j + 1, high);
}

int main(void) {
    int scores[N] = {45, 72, 30, 90, 65, 50, 85};

    printf("ROLL NO. 6 - ASSIGNMENT 2 - QUESTION 1\n");
    printf("Patient severity scores: ");
    printArray(scores, N);

    /* Part A: Max Heap insertion */
    int heap[N];
    int size = 0;

    printf("\nA) MAX HEAP INSERTION\n");
    for (int i = 0; i < N; i++) {
        insertMaxHeap(heap, &size, scores[i]);
        printf("After inserting %d: ", scores[i]);
        printArray(heap, size);
    }

    /* Part B: Heap Sort */
    int heapData[N];
    for (int i = 0; i < N; i++)
        heapData[i] = scores[i];

    printf("\nB) HEAP SORT\n");
    heapSort(heapData, N);
    printf("Final Heap Sort result: ");
    printArray(heapData, N);

    /* Part B: Quick Sort */
    int quickData[N];
    for (int i = 0; i < N; i++)
        quickData[i] = scores[i];

    printf("\nB) QUICK SORT\n");
    quickSort(quickData, 0, N - 1);
    printf("Final Quick Sort result: ");
    printArray(quickData, N);

    return 0;
}
