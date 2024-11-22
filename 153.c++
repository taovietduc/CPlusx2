// VIẾT BẰNG C++
// Bài 153: Viết hàm xác định xem có thể tạo được số Fibonacci từ tổ hợp của các phần tử trong danh sách không.

#include <iostream>
#include <vector> // Thư viện vector để lưu trữ danh sách các số nguyên
#include <cmath> // Thư viện cmath để sử dụng hàm sqrt
using namespace std;

// Hàm kiểm tra số chính phương
bool isPerfectSquare(int x) {
    int s = sqrt(x); // Lấy căn bậc 2 của x
    return (s * s == x); // Kiểm tra xem bình phương có bằng x hay không
}

// Hàm kiểm tra số Fibonacci
bool isFibonacci(int n) {
    // Một số là số Fibonacci nếu một trong (5n^2 + 4) hoặc (5n^2 - 4) là số chính phương
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4); // Kiểm tra xem có phải số Fibonacci hay không
}

// Hàm kiểm tra có thể tạo số Fibonacci từ tổng các phần tử trong mảng
bool canMakeFibonacci(vector<int>& arr) 
{
    int n = arr.size(); // Lấy kích thước của mảng
    
    // Duyệt qua tất cả các tổ hợp có thể (sử dụng bit masking)
    for (int mask = 1; mask < (1 << n); mask++) 
    {
        int sum = 0;
        
        // Tính tổng các phần tử được chọn
        for (int i = 0; i < n; i++) 
        {
            if (mask & (1 << i)) // Kiểm tra xem bit thứ i có được chọn hay không
            {
                sum += arr[i]; // Tính tổng các phần tử được chọn
            }
        }
        
        // Kiểm tra xem tổng có phải là số Fibonacci
        if (isFibonacci(sum)) 
        {
            return true; // Trả về true nếu tổng là số Fibonacci
        }
    }
    
    return false;
}

int main() {
    // Test thử chương trình
    vector<int> arr1 = {1, 2, 4, 6}; // Có thể tạo số Fibonacci (2 là số Fibonacci)
    vector<int> arr2 = {7, 9, 13, 15}; // Không thể tạo số Fibonacci
    
    cout << "Mang 1: "; // In ra màn hình
    if (canMakeFibonacci(arr1))
        cout << "Co the tao so Fibonacci" << endl; // In ra màn hình
    else 
        cout << "Khong the tao so Fibonacci" << endl; // In ra màn hình 
        
    cout << "Mang 2: "; // In ra màn hình
    if (canMakeFibonacci(arr2))
        cout << "Co the tao so Fibonacci" << endl; // In ra màn hình    
    else 
        cout << "Khong the tao so Fibonacci" << endl; // In ra màn hình             
        
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isPerfectSquare():
   - Kiểm tra một số có phải là số chính phương hay không
   - Lấy căn bậc 2 và kiểm tra bình phương có bằng số ban đầu

2. Hàm isFibonacci():
   - Kiểm tra một số có phải là số Fibonacci hay không
   - Sử dụng tính chất: n là số Fibonacci khi và chỉ khi một trong hai số (5n^2 + 4) hoặc (5n^2 - 4) là số chính phương

3. Hàm canMakeFibonacci():
   - Sử dụng kỹ thuật bit masking để duyệt qua tất cả các tổ hợp có thể của mảng
   - Với mỗi tổ hợp:
     + Tính tổng các phần tử được chọn
     + Kiểm tra xem tổng có phải là số Fibonacci
   - Nếu tìm thấy một tổ hợp tạo được số Fibonacci, trả về true
   - Ngược lại trả về false

4. Hàm main():
   - Test chương trình với hai mảng ví dụ
   - Mảng 1: {1, 2, 4, 6} có thể tạo số Fibonacci (2 là số Fibonacci)
   - Mảng 2: {7, 9, 13, 15} không thể tạo số Fibonacci

5. Độ phức tạp:
   - Thời gian: O(2^n) do phải duyệt qua tất cả tổ hợp có thể
   - Không gian: O(1)
*/
