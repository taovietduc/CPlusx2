// VIẾT BẰNG C++
// Bài 128: Tạo hàm tìm số lẻ nhỏ nhất trong danh sách.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng mảng động trong C++
#include <limits> // Thư viện limits để sử dụng giá trị lớn nhất của kiểu dữ liệu int

using namespace std;

int smallestOddNumber(const vector<int>& numbers)  // Hàm tìm số lẻ nhỏ nhất trong mảng số nguyên
{
    int smallest_odd = numeric_limits<int>::max();  // Khởi tạo biến với giá trị lớn nhất của kiểu int
    
    for (int num : numbers)  // Duyệt qua từng phần tử trong mảng số nguyên
    {
        if (num % 2 != 0 && num < smallest_odd) {  // Kiểm tra nếu là số lẻ và nhỏ hơn số lẻ nhỏ nhất hiện tại
            smallest_odd = num; // Gán số lẻ nhỏ nhất bằng số lẻ hiện tại đang xét
        }
    }

    return (smallest_odd == numeric_limits<int>::max()) ? -1 : smallest_odd;  // Trả về số lẻ nhỏ nhất hoặc -1 nếu không có
}

int main() 
{
    vector<int> numbers = {2, 4, 6, 7, 10, 9, 3}; // Khởi tạo mảng số nguyên với các phần tử
    cout << "Số lẻ nhỏ nhất là: " << smallestOddNumber(numbers) << endl; // In ra số lẻ nhỏ nhất trong mảng số nguyên
    return 0;
}

// Kết quả là 3
// Giải thích: Số lẻ nhỏ nhất trong mảng số nguyên là 3