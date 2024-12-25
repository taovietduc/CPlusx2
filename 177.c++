// Viết Bằng C++
// Bài 177: Viết hàm xoay một ma trận vuông 90 độ theo chiều kim đồng hồ

#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) { // Xoay ma trận 90 độ theo chiều kim đồng hồ     
    int n = matrix.size();
    for (int i = 0; i < n / 2; ++i) {  // Xoay từng lớp của ma trận từ ngoài vào trong
        for (int j = i; j < n - i - 1; ++j) { // Xoay từng phần tử trong lớp đó từ trái sang phải
            int temp = matrix[i][j]; // Lưu giá trị của phần tử trên cùng bên trái
            matrix[i][j] = matrix[n - j - 1][i]; // Gán giá trị của phần tử dưới cùng bên trái cho phần tử trên cùng bên trái
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1]; // Gán giá trị của phần tử dưới cùng bên phải cho phần tử dưới cùng bên trái
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1]; // Gán giá trị của phần tử trên cùng bên phải cho phần tử dưới cùng bên phải
            matrix[j][n - i - 1] = temp; // Gán giá trị của phần tử trên cùng bên trái cho phần tử trên cùng bên phải
        }
    }
}

int main() { // Test
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Ma trận 3x3
    rotateMatrix(matrix); // Xoay ma trận 90 độ theo chiều kim đồng hồ
    for (const auto& row : matrix) { // In ma trận sau khi xoay
        for (int val : row) { // In từng phần tử trong hàng
            cout << val << " "; // In phần tử
        }
        cout << endl;
    }
    // Output: 7 4 1, 8 5 2, 9 6 3
    return 0;
}
