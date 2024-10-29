// VIẾT BẰNG C++
// Câu 86: Tạo hàm tìm phần tử lớn thứ hai trong danh sách.

#include <iostream>
#include <limits.h> // Để sử dụng INT_MIN
using namespace std;

// Hàm tìm phần tử lớn thứ hai trong danh sách
int tim_phan_tu_lon_thu_hai(int arr[], int n)  // arr[]: mảng, n: số lượng phần tử trong mảng
{
    int max1 = INT_MIN, max2 = INT_MIN; // Biến lưu phần tử lớn nhất và lớn thứ hai

    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        if (arr[i] > max1)  // Nếu phần tử lớn hơn max1
        {
            max2 = max1; // Cập nhật max2 bằng giá trị cũ của max1
            max1 = arr[i]; // max1 được cập nhật với phần tử lớn nhất mới
        } 
        else if (arr[i] > max2 && arr[i] < max1)  // Nếu phần tử lớn hơn max2 nhưng nhỏ hơn max1
        {
            max2 = arr[i]; // Cập nhật max2 khi phần tử nhỏ hơn max1 nhưng lớn hơn max2
        }
    }

    if (max2 == INT_MIN) // Nếu max2 không thay đổi, nghĩa là không có phần tử lớn thứ hai
    { 
        return -1; // Trả về -1 nếu không tìm được phần tử lớn thứ hai
    }
    return max2;
}

int main()  // Hàm main sử dụng hàm tim_phan_tu_lon_thu_hai
{
    int n;
    cout << "Nhập số lượng phần tử của danh sách: "; 
    cin >> n;

    int* arr = new int[n]; // Cấp phát bộ nhớ động cho mảng arr 
     // Khai báo mảng arr có n phần tử
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách
    {
        cin >> arr[i]; // Nhập phần tử thứ i    
    }

    int lon_thu_hai = tim_phan_tu_lon_thu_hai(arr, n); // Gọi hàm tim_phan_tu_lon_thu_hai

    if (lon_thu_hai != -1)  // Nếu tìm được phần tử lớn thứ hai
    {
        cout << "Phần tử lớn thứ hai trong danh sách là: " << lon_thu_hai << endl;
    } 
    else  // Nếu không tìm được phần tử lớn thứ hai
    {
        cout << "Không tìm được phần tử lớn thứ hai." << endl;
    }

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng arr

    return 0;
}
