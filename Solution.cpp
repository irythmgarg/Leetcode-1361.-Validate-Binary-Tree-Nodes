class Solution {
public:
    vector<int> parent;  // Union-Find parent vector
    int component;       // Keeps track of the number of connected components

    // Find function with path compression
    int find(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node]);
    }

    // Union function to connect child to parent
    bool hlo(int pa, int child) {
        // A node can only have one parent, so if it's already connected, return false
        if (find(child) != child)
            return false;

        // Cycle detection: parent cannot be a descendant of child
        if (find(pa) == child)
            return false;

        parent[child] = pa;  // Connect child to parent
        component--;         // Merge one component
        return true;
    }

    // Main function to validate binary tree structure
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        parent.resize(n);
        component = n;

        // Initialize each node as its own parent
        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (int i = 0; i < n; i++) {
            // Check and connect left child
            if (leftChild[i] != -1 && hlo(i, leftChild[i]) == false)
                return false;

            // Check and connect right child
            if (rightChild[i] != -1 && hlo(i, rightChild[i]) == false)
                return false;
        }

        // A valid binary tree must have exactly one connected component
        return component == 1;
    }
};
