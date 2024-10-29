// VIẾT BẰNG C++
// Bài 68: Tạo hàm tìm số lớn nhất trong danh sách.

#include <iostream> // Thư viện nhập xuất
using namespace std;

int tim_so_lon_nhat(int danh_sach[], int n)  // Hàm tìm số lớn nhất trong danh sách
{
    int max_value = danh_sach[0]; // Khởi tạo giá trị lớn nhất là phần tử đầu tiên
    
    // Duyệt qua mảng để tìm số lớn nhất
    for (int i = 1; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    { 
        if (danh_sach[i] > max_value)  // Nếu phần tử thứ i lớn hơn giá trị lớn nhất
        {
            max_value = danh_sach[i]; // Cập nhật giá trị lớn nhất
        }
    }
    
    return max_value; // Trả về giá trị lớn nhất
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
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        cin >> danh_sach[i]; // Nhập phần tử thứ i
    }
    
    // Tìm số lớn nhất và in kết quả
    int so_lon_nhat = tim_so_lon_nhat(danh_sach, n); // Gọi hàm tìm số lớn nhất
    cout << "Số lớn nhất trong danh sách là: " << so_lon_nhat << endl;
    
    return 0;
}
