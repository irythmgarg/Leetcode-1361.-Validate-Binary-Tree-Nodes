# Leetcode-1361.-Validate-Binary-Tree-Nodes
Validate Binary Tree Nodes
This repository includes an efficient C++ solution for the problem of validating whether a given node-child relationship forms a valid binary tree.

🚩 Problem Statement
Given n nodes labeled 0 to n - 1 and two arrays leftChild and rightChild, return true if the nodes form a valid binary tree.
---
💡 Approach
The solution uses Disjoint Set Union (DSU) to ensure:

Each node has at most one parent.

No cycles exist.

Only one connected component exists (i.e., one root).
---
✨ Key Concepts
DSU (Disjoint Set Union): Tracks components and parent relationships.

Cycle Detection: Ensures a node is not its ancestor.

Component Count: Confirms there is only one valid tree (not a forest).
---
📦 Example
cpp
Input:
n = 4
leftChild = [1,-1,3,-1]
rightChild = [2,-1,-1,-1]

Output:
true
---
⏱️ Time & Space Complexity
Time Complexity: O(n * α(n)), where α(n) is the inverse Ackermann function.

Space Complexity: O(n) for DSU structures.

---

🧠 When to Use
When checking tree validity based on parent-child links.

For hierarchical data validation.

Graph cycle/component checks.

