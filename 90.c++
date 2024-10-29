// VIẾT BẰNG C++
// Bài 90: Tạo hàm kiểm tra danh sách có phải là danh sách tăng dần không.

#include <iostream>
using namespace std;

// Hàm kiểm tra danh sách có phải là danh sách tăng dần không
bool kiem_tra_tang_dan(int arr[], int n)  // arr[]: mảng, n: số lượng phần tử của mảng arr
{
    for (int i = 0; i < n - 1; i++)  // Duyệt từ phần tử đầu đến phần tử kế cuối
    {
        if (arr[i] > arr[i + 1])  // Nếu phần tử hiện tại lớn hơn phần tử sau
        {
            return false; // Nếu có phần tử sau nhỏ hơn phần tử trước, danh sách không tăng dần
        }
    }
    return true; // Nếu không có cặp phần tử nào không thỏa mãn, danh sách là tăng dần
}

int main() 
{
    int n;
    cout << "Nhập số lượng phần tử của danh sách: ";
    cin >> n;

    int* arr = new int[n]; // Khởi tạo mảng arr có n phần tử
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách
    {
        cin >> arr[i];
    }

    // Kiểm tra danh sách có phải là tăng dần không
    if (kiem_tra_tang_dan(arr, n))  // Nếu hàm trả về true (danh sách tăng dần)
    { 
        cout << "Danh sách là tăng dần." << endl;
    } 
    else  // Nếu hàm trả về false (danh sách không tăng dần)
    {  
        cout << "Danh sách không phải là tăng dần." << endl;
    }

    delete[] arr; // Giải phóng bộ nhớ đã cấp phát cho mảng arr

    return 0;
}

