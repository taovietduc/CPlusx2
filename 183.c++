// Viết Bằng C++
// Bài 183: Kiểm tra ma trận có phải là ma trận tam giác trên hoặc tam giác dưới không.

#include <iostream>
#include <vector>
using namespace std; 

bool isUpperTriangle(const vector<vector<int>>& matrix)  // kiểm tra ma trận có phải là tam giác trên không
{
    int rows = matrix.size(); // lấy số hàng của ma trận 
    for (int i = 0; i < rows; i++)  // duyệt từ hàng đầu tiên đến hàng cuối cùng
    {
        for (int j = 0; j < i; j++)  // duyệt từ cột đầu tiên đến cột trước cột i
        {
            if (matrix[i][j] != 0)  
            // nếu phần tử khác 0 thì không phải là ma trận tam giác trên
            {
                return false;
            }
        }
    }
    return true;
}

bool isLowerTriangle(const vector<vector<int>>& matrix)  
// kiểm tra ma trận có phải là tam giác dưới không
{
    int rows = matrix.size(); // lấy số hàng của ma trận
    for (int i = 0; i < rows; i++)  // duyệt từ hàng đầu tiên đến hàng cuối cùng
    {
        for (int j = i + 1; j < rows; j++)  // duyệt từ cột sau cột i đến cột cuối cùng
        {
            if (matrix[i][j] != 0)  
            // nếu phần tử khác 0 thì không phải là ma trận tam giác dưới
            {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> matrix1 = 
    {
        {1, 2, 3},
        {0, 4, 5},
        {0, 0, 6}
    };

    vector<vector<int>> matrix2 = 
    {
        {1, 0, 0},
        {4, 5, 0},
        {6, 7, 8}
    };

    cout << "Ma trận là tam giác trên: " << isUpperTriangle(matrix1) << endl;
    cout << "Ma trận là tam giác dưới: " << isLowerTriangle(matrix2) << endl;
    
    return 0;
}

// Output
// Ma trận là tam giác trên: 1
// Ma trận là tam giác dưới: 1
// Như vậy, ma trận 1 là ma trận tam giác trên và ma trận 2 là ma trận tam giác dưới.
// Nếu muốn kiểm tra ma trận có phải là ma trận tam giác không thì chỉ cần kiểm tra cả 2 điều kiện trên.
// Nếu cả 2 điều kiện đều đúng thì ma trận đó là ma trận tam giác.
// Nếu một trong 2 điều kiện sai thì ma trận đó không phải là ma trận tam giác.
// Độ phức tạp của thuật toán là O(n^2) với n là số hàng của ma trận.
