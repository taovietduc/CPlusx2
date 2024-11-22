// VIẾT BẰNG C++
// Bài 151: Tạo hàm tìm hai số trong danh sách sao cho tích của chúng là lớn nhất.

#include <iostream>
using namespace std;

// Hàm tìm hai số có tích lớn nhất trong mảng
void TimHaiSoCoTichLonNhat(int arr[], int n) 
{
    if (n < 2) // Kiểm tra nếu mảng có ít hơn 2 phần tử
    {
        cout << "Mang can it nhat 2 phan tu!" << endl; 
        // In ra màn hình nếu mảng có ít hơn 2 phần tử
        return;
    }

    int so1 = arr[0], so2 = arr[1]; // Khởi tạo hai số lớn nhất và hai số nhỏ nhất
    int tichLonNhat = arr[0] * arr[1]; // Khởi tạo tích lớn nhất

    // Duyệt qua tất cả các cặp số có thể
    for (int i = 0; i < n - 1; i++)  // Duyệt qua tất cả các cặp số có thể
    {
        for (int j = i + 1; j < n; j++) // Duyệt qua tất cả các cặp số có thể
        {
            int tichHienTai = arr[i] * arr[j]; // Tính tích hiện tại của cặp số
            if (tichHienTai > tichLonNhat) 
            // Kiểm tra nếu tích hiện tại lớn hơn tích lớn nhất
            {
                tichLonNhat = tichHienTai; // Cập nhật tích lớn nhất
                so1 = arr[i]; // Cập nhật số lớn nhất
                so2 = arr[j]; // Cập nhật số lớn nhất
            }
        }
    }

    cout << "Hai so co tich lon nhat la: " << so1 << " va " << so2 << endl; 
    // In ra màn hình hai số có tích lớn nhất
    cout << "Tich cua chung la: " << tichLonNhat << endl; 
    // In ra màn hình tích của hai số
}

int main() 
{
    int n;
    cout << "Nhap so phan tu cua mang: "; // Nhập số phần tử của mảng
    cin >> n;

    int arr[100];
    cout << "Nhap cac phan tu cua mang:" << endl; // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) // Duyệt qua tất cả các phần tử của mảng
    {
        cout << "arr[" << i << "] = "; // In ra màn hình phần tử thứ i
        cin >> arr[i]; // Nhập phần tử thứ i
    }

    TimHaiSoCoTichLonNhat(arr, n); // Gọi hàm tìm hai số có tích lớn nhất trong mảng            
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm TimHaiSoCoTichLonNhat(arr, n):
   - Input: Mảng arr và số phần tử n
   - Output: In ra hai số có tích lớn nhất và tích của chúng

2. Các bước thực hiện:
   - Kiểm tra điều kiện n >= 2 (mảng cần ít nhất 2 phần tử)
   - Khởi tạo:
     + so1, so2: lưu 2 số có tích lớn nhất
     + tichLonNhat: lưu tích lớn nhất hiện tại
   
   - Dùng 2 vòng lặp lồng nhau để:
     + Duyệt qua tất cả các cặp số có thể
     + Tính tích của từng cặp số
     + So sánh với tích lớn nhất hiện tại
     + Cập nhật so1, so2 và tichLonNhat nếu tìm thấy tích lớn hơn
   
   - In kết quả:
     + Hai số có tích lớn nhất
     + Tích của chúng

3. Hàm main():
   - Nhập số phần tử n và các phần tử của mảng
   - Gọi hàm TimHaiSoCoTichLonNhat() để tìm kết quả

4. Độ phức tạp: O(n^2) do sử dụng 2 vòng lặp lồng nhau
*/
