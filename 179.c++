// Viết Bằng C++
// Bài 179: Viết hàm kiểm tra xem một ma trận có phải là ma trận đối xứng không.

#include <iostream>
#include <vector>
using namespace std;

// Hàm kiểm tra xem một ma trận có phải là ma trận đối xứng không
bool isSymmetricMatrix(const vector<vector<int>>& matrix) { // Ma trận vuông n x n
    int n = matrix.size();

    // Kiểm tra nếu ma trận không phải là vuông
    for (int i = 0; i < n; ++i) { // Duyệt qua các hàng của ma trận
        if (matrix[i].size() != n) { // Ma trận không vuông (không phải ma trận vuông)
            cout << "Matrix is not square!" << endl;
            return false;
        }
    }

    // Duyệt qua các phần tử trên tam giác trên của ma trận
    for (int i = 0; i < n; ++i) { // Duyệt qua các hàng của ma trận
        for (int j = i + 1; j < n; ++j) {   // Duyệt qua các cột của ma trận
            if (matrix[i][j] != matrix[j][i]) { // Nếu phần tử tại vị trí (i, j) khác với phần tử tại vị trí (j, i)
                return false; // Không đối xứng
            }
        }
    }

    return true; // Đối xứng
}

int main() { // Test hàm isSymmetricMatrix
    vector<vector<int>> matrix1 = { // Ma trận đối xứng
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    vector<vector<int>> matrix2 = { // Ma trận không đối xứng
        {1, 0, 3},
        {2, 5, 6},
        {3, 6, 9}
    };

    cout << "Matrix 1 is symmetric: " << (isSymmetricMatrix(matrix1) ? "Yes" : "No") << endl;
    cout << "Matrix 2 is symmetric: " << (isSymmetricMatrix(matrix2) ? "Yes" : "No") << endl;

    return 0;
}
