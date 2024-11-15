// VIẾT BẰNG C++
// Bài 141: Tìm phần tử có tần suất xuất hiện cao nhất trong danh sách.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng kiểu dữ liệu vector (mảng động)
#include <unordered_map> // Thư viện unordered_map để sử dụng bảng băm
using namespace std;

int mostFrequentElement(const vector<int>& lst)  // Hàm tìm phần tử có tần suất xuất hiện cao nhất
{
    if (lst.empty())  // Nếu danh sách rỗng thì trả về -1 (không có phần tử nào)
    return -1;
        unordered_map<int, int> count; // Tạo một bảng băm để lưu tần suất xuất hiện của các phần tử
    for (int num : lst)  // Duyệt qua từng phần tử trong danh sách
    {
        count[num]++; // Tăng tần suất xuất hiện của phần tử đó lên 1 đơn vị
    }
    int maxFrequency = 0, result = lst[0]; // Khởi tạo tần suất xuất hiện lớn nhất và phần tử tương ứng 
    for (const auto& pair : count)  // Duyệt qua từng cặp key-value trong bảng băm count
    {
        if (pair.second > maxFrequency) // Nếu tần suất xuất hiện của phần tử đó lớn hơn tần suất xuất hiện lớn nhất hiện tại
        {
            maxFrequency = pair.second; // Cập nhật tần suất xuất hiện lớn nhất và phần tử tương ứng
            result = pair.first; // Cập nhật phần tử tương ứng với tần suất xuất hiện lớn nhất
        }
    }
    return result; // Trả về phần tử có tần suất xuất hiện lớn nhất
}

// Ví dụ sử dụng
int main()  // Hàm main để kiểm tra hàm mostFrequentElement
{
    vector<int> lst = {1, 2, 3, 4, 2, 3, 2, 5, 5}; // Khởi tạo danh sách các phần tử
    cout << "Phần tử có tần suất xuất hiện cao nhất: " << mostFrequentElement(lst) << endl;
    return 0;
}

// Kết quả: Phần tử có tần suất xuất hiện cao nhất: 2
// Phần tử 2 xuất hiện 3 lần, nhiều hơn các phần tử khác
// Độ phức tạp: O(N) với N là số lượng phần tử trong danh sách

