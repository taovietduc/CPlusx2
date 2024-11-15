// VIẾT BẰNG C++
// Bài 147: Tạo hàm tính tổng các số cách đều nhau trong danh sách với khoảng cách cho trước.

#include <iostream>
#include <vector> // Thư viện vector  
using namespace std;

// Hàm tính tổng các số cách đều nhau với khoảng cách k
int sumNumbersWithDistance(vector<int>& arr, int k) 
{
    int sum = 0; // Khởi tạo biến tổng = 0
    
    // Duyệt từ đầu mảng, mỗi lần nhảy k phần tử
    for(int i = 0; i < arr.size(); i += k) 
    {
        sum += arr[i]; // Cộng phần tử hiện tại vào tổng
    }
    
    return sum; // Trả về tổng
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Mảng ban đầu
    int k; // Khoảng cách giữa các số
    
    cout << "Mang ban dau: ";
    for(int x : arr) cout << x << " "; // In mảng ban đầu
    cout << endl;
    
    cout << "Nhap khoang cach k: "; // Nhập khoảng cách k 
    cin >> k;
    
    int result = sumNumbersWithDistance(arr, k); // Gọi hàm tính tổng
    
    cout << "Tong cac so cach deu nhau " << k << " don vi la: " << result << endl; 
    // In ra kết quả tổng các số cách đều nhau k đơn vị 
    
    // In ra các số được chọn
    cout << "Cac so duoc chon: "; // In ra các số được chọn
    for(int i = 0; i < arr.size(); i += k) 
    {
        cout << arr[i] << " ";
    }
    cout << endl; // In ra kết thúc dòng 
    
    return 0; // Trả về 0 
}

/*
Giải thích chi tiết:

1. Hàm sumNumbersWithDistance(arr, k):
   - Input: Mảng arr và khoảng cách k
   - Khởi tạo biến sum = 0 để lưu tổng
   - Duyệt mảng từ đầu, mỗi lần nhảy k phần tử (i += k)
   - Cộng các phần tử được chọn vào tổng
   - Trả về tổng các số cách đều nhau k đơn vị

2. Hàm main():
   - Khởi tạo mảng ban đầu và nhập khoảng cách k
   - Gọi hàm sumNumbersWithDistance() để tính tổng
   - In ra kết quả và các số được chọn

Ví dụ:
- Mảng: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
- k = 3
- Các số được chọn: 1, 4, 7, 10 (cách nhau 3 đơn vị)
- Tổng = 1 + 4 + 7 + 10 = 22
*/
