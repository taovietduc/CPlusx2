// Viết Bằng C++
// Bài 192: Tạo thuật toán kiểm tra xem một đồ thị biểu diễn bằng danh sách cạnh có chu trình hay không.

#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
    vector<int> parent, rank;

public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; ++i) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY) return false; // Cycle detected
        if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
        else if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

bool hasCycle(int n, vector<pair<int, int>> &edges) {
    UnionFind uf(n);
    for (auto &edge : edges) {
        if (!uf.unionSets(edge.first, edge.second)) return true;
    }
    return false;
}

int main() {
    int n = 5;
    vector<pair<int, int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 4}, {4, 1}};
    cout << "Graph has cycle: " << (hasCycle(n, edges) ? "Yes" : "No") << endl;
    return 0;
}