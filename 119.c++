// VIẾT BẰNG C++
// Bài 119: Tạo hàm kiểm tra một danh sách có phải là danh sách giảm dần hay không.

#include <iostream>
#include <vector> // Thư viện vector của C++ giúp tạo mảng động

using namespace std;

bool isDescending(const vector<int>& lst)  // Hàm kiểm tra danh sách có phải là giảm dần không
{
    for (size_t i = 0; i < lst.size() - 1; i++)  // Duyệt qua từng phần tử của mảng
    {
        if (lst[i] < lst[i + 1])  // Nếu một phần tử nhỏ hơn phần tử tiếp theo
        {
            return false; // Trả về false vì không phải là giảm dần
        }
    }
    return true; // Trả về true nếu mảng là giảm dần
}

int main() 
{
    vector<int> lst = {9, 7, 5, 3, 1}; // Khởi tạo mảng giảm dần
    if (isDescending(lst))  // Kiểm tra mảng có phải là giảm dần không
    {
        cout << "Danh sách là giảm dần." << endl;
    } 
    else  // Nếu không phải là giảm dần thì in ra màn hình
    {
        cout << "Danh sách không phải là giảm dần." << endl;
    }

    return 0; // Kết thúc chương trình
}
