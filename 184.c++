// Viết Bằng C++
// Bài 184:Tính tổng các phần tử nằm ở vị trí lẻ (theo chỉ số hàng và cột). 

#include <iostream>
#include <vector>
using namespace std;

int sumOddPositions(const vector<vector<int>>& matrix) 
// const vector<vector<int>>& matrix: truyền vào 1 mảng 2 chiều
{
    int totalSum = 0; // khởi tạo tổng = 0
    for (int i = 0; i < matrix.size(); i++) // duyệt từng hàng của mảng 2 chiều 
    {
        for (int j = 0; j < matrix[i].size(); j++)  // duyệt từng phần tử của hàng đó
        {
            if ((i + j) % 2 != 0)  // nếu tổng chỉ số hàng và cột là số lẻ thì cộng vào tổng
            {
                totalSum += matrix[i][j];
            }
        }
    }
    return totalSum;
}

int main() 
{
    vector<vector<int>> matrix =  // khởi tạo mảng 2 chiều 3x3 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Tổng các phần tử ở vị trí lẻ: " << sumOddPositions(matrix) << endl;
    return 0;
}

// Output
// Tổng các phần tử ở vị trí lẻ: 20
// Phân tích code 
// Mảng 2 chiều 3x3
// 1 2 3
// 4 5 6
// 7 8 9
// Các phần tử ở vị trí lẻ là 2, 4, 6, 8. Tổng của chúng là 20.
// Đầu tiên, chúng ta khởi tạo biến totalSum = 0 để lưu tổng các phần tử ở vị trí lẻ.
// Sau đó, chúng ta duyệt qua từng hàng của mảng 2 chiều.
// Trong mỗi hàng, chúng ta duyệt qua từng phần tử của hàng đó.
// Nếu tổng chỉ số hàng và cột của phần tử đó là số lẻ, chúng ta cộng giá trị của phần tử đó vào totalSum.
// Cuối cùng, chúng ta trả về totalSum.