// VIẾT BẰNG C++
// Bài 69: Tạo hàm tìm số nhỏ nhất trong danh sách.

#include <iostream>
using namespace std;

int tim_so_nho_nhat(int danh_sach[], int n)  // Hàm tìm số nhỏ nhất trong danh sách
{
    int min_value = danh_sach[0]; // Khởi tạo giá trị nhỏ nhất là phần tử đầu tiên
    
    // Duyệt qua mảng để tìm số nhỏ nhất
    for (int i = 1; i < n; i++)  // Bắt đầu từ phần tử thứ 2 vì đã lấy phần tử đầu tiên làm giá trị nhỏ nhất
    {
        if (danh_sach[i] < min_value)  // Nếu phần tử hiện tại nhỏ hơn giá trị nhỏ nhất
        {
            min_value = danh_sach[i]; // Cập nhật giá trị nhỏ nhất
        }
    }
    
    return min_value;
}

int main() 
{
    int n;
    
    // Nhập số lượng phần tử trong danh sách
    cout << "Nhập số lượng phần tử trong danh sách: "; 
    cin >> n;
    
    int danh_sach[100]; // Giả sử tối đa 100 phần tử
    
    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử để nhập giá trị
    { 
        cin >> danh_sach[i]; 
    }
    
    // Tìm số nhỏ nhất và in kết quả
    int so_nho_nhat = tim_so_nho_nhat(danh_sach, n); // Gọi hàm tìm số nhỏ nhất
    cout << "Số nhỏ nhất trong danh sách là: " << so_nho_nhat << endl;
    
    return 0;
}
