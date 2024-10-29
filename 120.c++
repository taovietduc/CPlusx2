// VIẾT BẰNG C++
// Bài 120: Tạo hàm tính tích các phần tử trong một danh sách.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng kiểu dữ liệu vector và các hàm liên quan

using namespace std; // Sử dụng namespace std

int productOfElements(const vector<int> &lst) // Hàm tính tích các phần tử trong một danh sách
{
    int product = 1;    // Khởi tạo biến product = 1 để lưu giá trị tích
    for (int num : lst) // Duyệt qua từng phần tử trong danh sách
    {
        product *= num; // Nhân từng phần tử vào tích product
    }
    return product; // Trả về giá trị tích của các phần tử trong danh sách
}

int main()
{
    vector<int> lst = {2, 3, 4}; // Khởi tạo danh sách lst với các phần tử là 2, 3, 4
    cout << "Tích các phần tử trong danh sách là: " << productOfElements(lst) << endl;
    return 0;
}
