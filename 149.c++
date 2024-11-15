// VIẾT BẰNG C++
// Bài 149: Tạo hàm tìm độ dài dãy con đơn điệu dài nhất (tăng hoặc giảm) trong danh sách.

#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm độ dài dãy con đơn điệu dài nhất
int longestMonotonicSubarray(vector<int>& arr) {
    if (arr.empty()) // Nếu mảng rỗng
        return 0; // Trả về 0
        
    int n = arr.size(); // Lấy độ dài mảng
    
    // Khởi tạo mảng lưu độ dài dãy tăng và giảm tại mỗi vị trí
    vector<int> inc(n, 1); // Mảng lưu độ dài dãy tăng, ban đầu mỗi phần tử là 1
    vector<int> dec(n, 1); // Mảng lưu độ dài dãy giảm, ban đầu mỗi phần tử là 1
    
    // Tính độ dài dãy tăng và giảm tại mỗi vị trí
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) // Nếu phần tử hiện tại lớn hơn phần tử trước
            inc[i] = inc[i-1] + 1; // Độ dài dãy tăng tại i bằng độ dài tại i-1 cộng 1
        if (arr[i] < arr[i-1]) // Nếu phần tử hiện tại nhỏ hơn phần tử trước  
            dec[i] = dec[i-1] + 1; // Độ dài dãy giảm tại i bằng độ dài tại i-1 cộng 1
    }
    
    // Tìm độ dài lớn nhất trong cả 2 mảng
    int maxLen = 1; // Khởi tạo độ dài lớn nhất = 1
    for (int i = 0; i < n; i++) {
        maxLen = max(maxLen, max(inc[i], dec[i])); // Cập nhật độ dài lớn nhất
    }
    
    return maxLen; // Trả về độ dài lớn nhất
}

int main() {
    vector<int> arr; // Khai báo mảng
    int n; // Số phần tử của mảng
    
    cout << "Nhap so phan tu: "; // Nhập số phần tử
    cin >> n;
    
    cout << "Nhap mang: "; // Nhập mảng
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x); // Thêm phần tử vào mảng
    }
    
    int result = longestMonotonicSubarray(arr); // Gọi hàm tìm độ dài dãy con đơn điệu dài nhất
    
    cout << "Do dai day con don dieu dai nhat: " << result << endl; // In kết quả
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm longestMonotonicSubarray:
   - Input: vector số nguyên arr
   - Output: độ dài dãy con đơn điệu dài nhất

2. Thuật toán:
   - Sử dụng 2 mảng inc và dec để lưu độ dài dãy tăng và giảm tại mỗi vị trí
   - Duyệt mảng từ trái qua phải:
     + Nếu arr[i] > arr[i-1]: cập nhật độ dài dãy tăng
     + Nếu arr[i] < arr[i-1]: cập nhật độ dài dãy giảm
   - Tìm độ dài lớn nhất trong cả 2 mảng inc và dec

3. Ví dụ:
   arr = [1, 3, 2, 4]
   inc = [1, 2, 1, 2]
   dec = [1, 1, 2, 1]
   Độ dài dãy con đơn điệu dài nhất = 2
*/
