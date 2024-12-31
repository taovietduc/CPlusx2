// Viết Bằng C++
// Bai 182: Tạo hàm tính tổng các số lẻ trên đường chéo chính của ma trận.

#include <iostream>
#include <vector> // Thư viện vector trong C++
using namespace std;

int sumOddDiagonal(const vector<vector<int>>& matrix) 
// Hàm tìm tổng các số lẻ trên đường chéo chính của ma trận
{
    if (matrix.empty()) return 0; // Nếu ma trận rỗng thì trả về 0

    int rows = matrix.size(); // Số hàng của ma trận
    int totalSum = 0; // Tổng các số lẻ trên đường chéo chính

    for (int i = 0; i < rows; i++)  // Duyệt qua các hàng của ma trận
    {
        if (matrix[i][i] % 2 != 0)  // Kiểm tra số lẻ
        {
            totalSum += matrix[i][i]; // Cộng số lẻ vào tổng
        }
    }

    return totalSum; // Trả về tổng các số lẻ trên đường chéo chính của ma trận
}

int main()  
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Tổng các số lẻ trên đường chéo chính: " << sumOddDiagonal(matrix) << endl;
    return 0;
}

// Output:
// Tổng các số lẻ trên đường chéo chính: 15
// Giải thích: Tổng các số lẻ trên đường chéo chính của ma trận 3x3 trên là 1 + 5 + 9 = 15
// Đây là tổng các số lẻ ở các phần tử trên đường chéo chính của ma trận.
// Do đó, tổng các số lẻ trên đường chéo chính của ma trận 3x3 trên là 15.
// Độ phức tạp của thuật toán này là O(n) với n là số hàng của ma trận.
// Vì ta cần duyệt qua tất cả các phần tử trên đường chéo chính của ma trận nên độ phức tạp là O(n).
// Nếu ma trận là ma trận vuông thì độ phức tạp sẽ là O(n) với n là số hàng của ma trận.
// Nếu ma trận không phải là ma trận vuông thì độ phức tạp sẽ là O(min(m, n)) với m là số hàng và n là số cột của ma trận.
// Vì ta chỉ cần duyệt qua các phần tử trên đường chéo chính của ma trận nên độ phức tạp là O(min(m, n)).
