// Viết Bằng C++
// Bài 194: Tạo hàm tính khoảng cách ngắn nhất giữa hai nút trong đồ thị sử dụng thuật toán Dijkstra.

#include <iostream>
#include <vector>
#include <queue> // Include thư viện này để sử dụng priority_queue
#include <climits> // Include thư viện này để sử dụng INT_MAX
using namespace std;

void dijkstra(int start, int n, vector<vector<pair<int, int>>> &graph) { 
// Hàm tính khoảng cách ngắn nhất giữa hai nút trong đồ thị
    vector<int> dist(n, INT_MAX); // Khởi tạo mảng dist với giá trị INT_MAX
    dist[start] = 0; // Gán dist của nút start bằng 0
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start}); // Thêm cặp giá trị {0, start} vào priority_queue

    while (!pq.empty()) { // Duyệt qua tất cả các nút trong priority_queue
        int u = pq.top().second; // Lấy nút u có dist[u] nhỏ nhất 
        int d = pq.top().first; // Lấy giá trị dist[u] tương ứng
        pq.pop(); // Xóa nút u khỏi priority_queue

        if (d > dist[u]) continue; // Nếu giá trị dist[u] lớn hơn d thì bỏ qua

        for (auto &neighbor : graph[u]) { // Duyệt qua tất cả các nút kề của nút u
            int v = neighbor.first, weight = neighbor.second;
            if (dist[u] + weight < dist[v]) { // Nếu dist[u] + weight nhỏ hơn dist[v]
                dist[v] = dist[u] + weight; // Cập nhật dist[v]
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < n; ++i) { // In ra khoảng cách từ nút start đến các nút còn lại
        cout << "Distance from " << start << " to " << i << ": " << dist[i] << endl;
    }
}

int main() { 
    int n = 5;
    vector<vector<pair<int, int>>> graph(n); // Khởi tạo mảng 2 chiều graph với n phần tử
    graph[0] = {{1, 2}, {4, 1}}; // Thêm các cặp giá trị vào nút 0
    graph[1] = {{2, 3}}; // Thêm các cặp giá trị vào nút 1
    graph[2] = {{3, 1}};
    graph[3] = {{4, 2}};
    graph[4] = {{1, 4}};

    dijkstra(0, n, graph); // Gọi hàm dijkstra với nút start là 0
    return 0;
}