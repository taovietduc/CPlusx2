// Viết Bằng C++
// Bài 185: Chuyển đổi ma trận thành danh sách xoắn ốc.

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix) // Hàm chuyển đổi ma trận thành danh sách xoắn ốc 
{
    vector<int> result;
    while (!matrix.empty())  // Kiểm tra ma trận có rỗng không 
    {
        result.insert(result.end(), matrix[0].begin(), matrix[0].end()); 
        // Chèn các phần tử của hàng đầu tiên vào cuối danh sách
        matrix.erase(matrix.begin()); // Xóa hàng đầu tiên

        if (!matrix.empty() && !matrix[0].empty())  // Kiểm tra ma trận có rỗng không 
        {
            for (auto& row : matrix)  // Duyệt qua các hàng của ma trận 
            {
                result.push_back(row.back()); // Chèn phần tử cuối cùng của hàng vào cuối danh sách
                row.pop_back();
            }
        }

        if (!matrix.empty())  // Kiểm tra ma trận có rỗng không 
        {
            result.insert(result.end(), matrix.back().rbegin(), matrix.back().rend()); 
            // Chèn các phần tử của hàng cuối cùng vào cuối danh sách
            matrix.pop_back();
        }

        if (!matrix.empty() && !matrix[0].empty())  // Kiểm tra ma trận có rỗng không 
        {
            for (auto it = matrix.rbegin(); it != matrix.rend(); ++it)  
            // Duyệt qua các hàng của ma trận từ cuối lên đầu
            {
                result.push_back(it->front()); // Chèn phần tử đầu tiên của hàng vào cuối danh sách
                it->erase(it->begin());
            }
        }
    }
    return result; // Trả về danh sách xoắn ốc
} 

int main()  
{
    vector<vector<int>> matrix =   // Khởi tạo ma trận 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = spiralMatrix(matrix); 
    // Gọi hàm chuyển đổi ma trận thành danh sách xoắn ốc
    cout << "Danh sách xoắn ốc: ";
    for (int val : result)  // Duyệt qua danh sách xoắn ốc 
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}


// Output:
// Danh sách xoắn ốc: 1 2 3 6 9 8 7 4 5
// Giải thích:
// Ma trận ban đầu:
// 1 2 3
// 4 5 6
// 7 8 9
// Danh sách xoắn ốc:
// 1 2 3 6 9 8 7 4 5
// Danh sách xoắn ốc của ma trận trên là 1 2 3 6 9 8 7 4 5.
