# 🚀 Sorting Algorithms 

This repository contains implementations of different **sorting algorithms** in **C++** and **Python**.  
The goal of this project is to:  
- Practice and understand classic sorting algorithms  
- Compare time and space complexities  
- Provide a simple reference for learning  

---

## 📊 Algorithm Comparison

| Algorithm           | Best Case   | Average Case | Worst Case   | Space Complexity | Stable |
|---------------------|------------|--------------|--------------|------------------|--------|
| **Bubble Sort**     | O(n)       | O(n²)        | O(n²)        | O(1)             | ✅ |
| **Selection Sort**  | O(n²)      | O(n²)        | O(n²)        | O(1)             | ❌ |
| **Insertion Sort**  | O(n)       | O(n²)        | O(n²)        | O(1)             | ✅ |
| **Merge Sort**      | O(n log n) | O(n log n)   | O(n log n)   | O(n)             | ✅ |
| **Quick Sort**      | O(n log n) | O(n log n)   | O(n²)        | O(log n)         | ❌ |
| **Heap Sort**       | O(n log n) | O(n log n)   | O(n log n)   | O(1)             | ❌ |
| **Counting Sort**   | O(n+k)     | O(n+k)       | O(n+k)       | O(k)             | ✅ |
| **Radix Sort**      | O(nk)      | O(nk)        | O(nk)        | O(n+k)           | ✅ |
| **Bucket Sort**     | O(n+k)     | O(n+k)       | O(n²)        | O(n)             | ✅ |
| **Shell Sort**      | O(n log n) | O(n log² n)  | O(n²)        | O(1)             | ❌ |
| **Pigeonhole Sort** | O(n+range) | O(n+range)   | O(n+range)   | O(range)         | ✅ |

---

## 📘 Algorithm Descriptions
- **Bubble Sort:** Repeatedly compares and swaps adjacent elements until sorted. (Simple but inefficient).  
- **Selection Sort:** Selects the smallest element in each pass and places it in the correct position.  
- **Insertion Sort:** Similar to sorting playing cards in hand, inserts elements one by one in the right position.  
- **Merge Sort:** Divide and conquer; splits the array in halves and merges them back sorted.  
- **Quick Sort:** Picks a pivot, partitions elements smaller/larger than it, and recursively sorts.  
- **Heap Sort:** Builds a max-heap and extracts the maximum element one by one.  
- **Counting Sort:** Counts occurrences of each element (good for limited ranges).  
- **Radix Sort:** Sorts numbers digit by digit, starting from the least significant digit.  
- **Bucket Sort:** Distributes elements into buckets, sorts each bucket, and combines results.  
- **Shell Sort:** Improvement of insertion sort with gradually decreasing gaps.  
- **Pigeonhole Sort:** Distributes elements into "holes" based on their values, then collects them in order. Works best when the range of input values is small.  

---

## ✍️ Author
The codes were written as part of my **Data** **Structures** and **Algorithms** practice.
This repository can serve as a good reference for anyone who wants to compare and learn sorting algorithms.

