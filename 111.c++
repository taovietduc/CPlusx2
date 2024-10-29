// VIẾT BẰNG C++
// Bài 111: Tạo hàm tính tổng các phần tử trên đường chéo chính của ma trận.

#include <iostream> 
#include <vector> // Thư viện vector của C++ 

using namespace std;

int diagonalSum(vector<vector<int>> matrix)  // Hàm tính tổng các phần tử trên đường chéo chính
{
    /*
    Tính tổng các phần tử trên đường chéo chính của ma trận.

    Parameters:
    matrix (vector<vector<int>>): Ma trận dưới dạng vector 2 chiều.

    Returns:
    int: Tổng các phần tử trên đường chéo chính.
    */
    int n = matrix.size();  // Kích thước của ma trận (giả sử là ma trận vuông)
    int total = 0;
    for (int i = 0; i < n; i++)  // Duyệt qua các phần tử trên đường chéo chính
    {
        total += matrix[i][i];  // Phần tử nằm trên đường chéo chính
    }
    return total;
}

int main() 
{
    vector<vector<int>> matrix =  // Ma trận vuông 3x3
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Tổng các phần tử trên đường chéo chính là: " << diagonalSum(matrix) << endl;
    return 0;
}

// Giải thích:
// Tham số matrix: Ma trận được truyền vào dưới dạng một vector 2 chiều.
// Duyệt qua đường chéo chính: Tương tự như trong Python, phần tử trên đường chéo chính là matrix[i][i].
// Kết quả: Trả về tổng các phần tử trên đường chéo chính.