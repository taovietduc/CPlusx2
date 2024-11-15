// VIẾT BẰNG C++
// Bài 142: Tính trung bình cộng của các số chẵn trong danh sách.

#include <iostream>
#include <vector> // Thư viện vector trong C++ giúp lưu trữ một dãy các phần tử
using namespace std;

double averageEvenNumbers(const vector<int>& lst)  // Hàm tính trung bình cộng các số chẵn trong danh sách
{
    int sum = 0, count = 0; // Biến sum lưu tổng các số chẵn, count lưu số lượng số chẵn trong danh sách
    
    for (int num : lst)  // Duyệt qua từng phần tử trong danh sách lst để kiểm tra số chẵn 
    {
        if (num % 2 == 0)  // Nếu số chia hết cho 2 thì là số chẵn  
        {  // Kiểm tra nếu là số chẵn
            sum += num; // Cộng số chẵn vào tổng 
            count++; // Tăng biến đếm số lượng số chẵn lên 1
        }
    }
    
    if (count == 0) return 0;  // Nếu không có số chẵn, trả về 0
    
    return static_cast<double>(sum) / count;  // Tính trung bình cộng
}

// Ví dụ sử dụng
int main()  // Hàm main 
{
    vector<int> lst = {1, 2, 3, 4, 5, 6}; // Khởi tạo danh sách số nguyên lst
    cout << "Trung bình cộng của các số chẵn: " << averageEvenNumbers(lst) << endl;
    return 0;
}

// Kết quả: Trung bình cộng của các số chẵn: 4
// Giải thích: Trong danh sách số nguyên lst, có 3 số chẵn là 2, 4, 6. Trung bình cộng của 3 số chẵn này là (2 + 4 + 6) / 3 = 4