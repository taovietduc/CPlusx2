// Viết Bằng C++
// Bài 181: Viết hàm tìm tổng các phần tử trên biên của ma trận.

#include <iostream>
#include <vector>
using namespace std;

int sumBoundary(const vector<vector<int>>& matrix)  // Hàm tìm tổng các phần tử trên biên của ma trận 
{
    if (matrix.empty()) return 0; // Nếu ma trận rỗng thì trả về 0 

    int rows = matrix.size(); // Số hàng của ma trận 
    int cols = matrix[0].size(); // Số cột của ma trận
    int totalSum = 0; // Tổng các phần tử trên biên của ma trận

    // Tổng các phần tử hàng đầu và hàng cuối
    for (int j = 0; j < cols; j++)  // Duyệt qua các cột của ma trận     
    {
        totalSum += matrix[0][j] + matrix[rows - 1][j]; // Cộng các phần tử ở hàng đầu và hàng cuối vào tổng
    }

    // Tổng các phần tử cột đầu và cột cuối (trừ các góc đã cộng trước đó)
    for (int i = 1; i < rows - 1; i++) // Duyệt qua các hàng từ hàng thứ 2 đến hàng trước hàng cuối
    {
        totalSum += matrix[i][0] + matrix[i][cols - 1]; // Cộng các phần tử ở cột đầu và cột cuối vào tổng
    }

    return totalSum; // Trả về tổng các phần tử trên biên của ma trận
}

int main() 
{
    vector<vector<int>> matrix = { // Khởi tạo ma trận 3x3 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Tổng các phần tử trên biên: " << sumBoundary(matrix) << endl;
    return 0; // Kết thúc chương trình
}

// Output: 
// Tổng các phần tử trên biên: 25
// Giải thích: Tổng các phần tử trên biên của ma trận 3x3 trên là 1 + 2 + 3 + 4 + 6 + 7 + 8 + 9 = 25
// Đây là tổng các phần tử ở các hàng đầu, hàng cuối, cột đầu và cột cuối của ma trận.
// Các phần tử ở góc trên trái và góc dưới phải đã được cộng ở 2 vòng lặp trước đó.
// Do đó, tổng các phần tử trên biên của ma trận 3x3 trên là 25.
// Độ phức tạp của thuật toán này là O(m + n) với m là số hàng và n là số cột của ma trận.
// Vì ta cần duyệt qua tất cả các phần tử trên biên của ma trận nên độ phức tạp là O(m + n).
