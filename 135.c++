// VIẾT BẰNG C++
// Bài 135: Tính tổng các phần tử trên đường chéo phụ của ma trận.

#include <iostream>
#include <vector> // Thư viện vector của C++

using namespace std; 

int secondaryDiagonalSum(const vector<vector<int>>& matrix)  
// Hàm tính tổng các phần tử trên đường chéo phụ của ma trận
{
    int n = matrix.size(); // Số hàng của ma trận (ma trận vuông)
    int total = 0; // Biến lưu tổng các phần tử trên đường chéo phụ
    for (int i = 0; i < n; i++)  // Duyệt qua các phần tử trên đường chéo phụ
    {
        total += matrix[i][n - i - 1]; // Cộng dồn các phần tử trên đường chéo phụ
    }
    return total; // Trả về tổng các phần tử trên đường chéo phụ
}

int main()
{
    vector<vector<int>> matrix =  // Khởi tạo ma trận vuông 3x3
    {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    cout << "Tổng các phần tử trên đường chéo phụ là: " << secondaryDiagonalSum(matrix) << endl;
    return 0; // Kết thúc chương trình
}

// Kết quả là: 15
// Giải thích: Tổng các phần tử trên đường chéo phụ của ma trận là 3 + 5 + 7 = 15   
// Đường chéo phụ của ma trận là các phần tử có chỉ số hàng + chỉ số cột = n - 1 (n là số hàng của ma trận)

