// Viết Bằng C++
// Bài 180: Tìm tất cả các đường đi từ góc trên trái đến góc dưới phải của một ma trận.

#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy để tìm tất cả các đường đi từ (0, 0) đến (m-1, n-1)
void findPaths(vector<vector<int>>& matrix, int i, int j, vector<int>& path, vector<vector<int>>& allPaths) {
    int m = matrix.size();
    int n = matrix[0].size(); // Giả sử ma trận không rỗng

    // Thêm phần tử hiện tại vào đường đi
    path.push_back(matrix[i][j]); 

    // Nếu đã đến góc dưới phải, lưu đường đi
    if (i == m - 1 && j == n - 1) {
        allPaths.push_back(path);
    } else { // Nếu chưa đến góc dưới phải
        // Di chuyển xuống 
        if (i + 1 < m) { // Kiểm tra xem có thể di chuyển xuống không
            findPaths(matrix, i + 1, j, path, allPaths);
        }
        // Di chuyển sang phải
        if (j + 1 < n) { // Kiểm tra xem có thể di chuyển sang phải không
            findPaths(matrix, i, j + 1, path, allPaths);
        }
    }

    // Loại bỏ phần tử hiện tại khỏi đường đi (backtracking)
    path.pop_back(); 
}

int main() {
    // Ví dụ ma trận
    vector<vector<int>> matrix = { // Ma trận 3x3 
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> path; // Đường đi hiện tại
    vector<vector<int>> allPaths; // Lưu tất cả các đường đi

    // Tìm tất cả các đường đi từ (0, 0) đến (m-1, n-1)
    findPaths(matrix, 0, 0, path, allPaths); 

    // Hiển thị tất cả các đường đi
    cout << "All paths from top-left to bottom-right:" << endl;
    for (const auto& p : allPaths) { // Duyệt qua tất cả các đường đi
        for (int val : p) { // Duyệt qua các phần tử trong đường đi
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
