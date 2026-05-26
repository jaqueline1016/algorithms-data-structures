# Data Structures, Algorithms & LeetCode Patterns

A comprehensive, low-level computer science portfolio built from scratch in C and Python. This repository showcases my understanding of manual memory management (`malloc`, `realloc`, `free`), pointer architecture, foundational data structures, and algorithmic optimization for technical interviews.

---

## Repository Architecture

The project is strictly organized to separate core data structures and theoretical algorithms from practical problem-solving patterns.

```text
algorithms-data-structures/
│
├── data_structures/         # Low-level implementation of core data layouts
│   ├── arrays/              # Static & dynamic contiguous memory management
│   └── linked_lists/        # Self-referential memory nodes and linking logic
│
├── algorithms/              # Classic computer science algorithms
│   └── search_algorithms/   # Time complexity optimization (Linear vs Binary)
│
└── leetcode_patterns/      
```

---

## Key Concepts & Implementation Details

### 1. Manual Memory Management (The Heap)

Every dynamic structure inside `data_structures/` explicitly manages the RAM layout using the standard C allocation library.

* **`malloc`:** Utilized to allocate clean, explicit byte blocks in the Heap based on system data-type sizes (`sizeof`).
* **`realloc`:** Applied for dynamic array resizing, ensuring data preservation during memory displacement.
* **`free`:** Strictly implemented across all structures to avoid **Memory Leaks**, keeping the server runtime lightweight and safe.

### 2. Pointer Architecture & Structs

* **Self-Referential Nodes:** Linked lists are built using recursive structures (`struct Node* next`) where data is dispersed throughout the Heap rather than packed into rigid blocks.
* **Pointer to Pointer (`head_ref`):** Functions manipulate the original pointers by reference instead of using local copies, preserving global state changes.
* **Arrow Operator (`->`):** Standardized throughout the codebase to cleanly dereference pointers and access structure members directly from the Heap.

---

## Algorithmic Efficiency Matrix

| Category | Algorithm / Structure | Time Complexity (Best/Avg) | Time Complexity (Worst) | Space Complexity |
| --- | --- | --- | --- | --- |
| **Search** | Linear Search | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| **Search** | Binary Search (Sorted) | $\mathcal{O}(1)$ | $\mathcal{O}(\log n)$ | $\mathcal{O}(1)$ |
| **Data Layout** | Array Access | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ |
| **Data Layout** | Linked List Head Insertion | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ |
| **Data Layout** | Linked List Search | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |

