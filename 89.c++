// VIẾT BẰNG C++
// Bài 89: Tạo hàm đảo ngược danh sách.

#include <iostream>
using namespace std;

// Hàm đảo ngược danh sách
void dao_nguoc_danh_sach(int arr[], int n)  // arr[] tương đương với *arr 
{
    int left = 0, right = n - 1; // left là vị trí đầu, right là vị trí cuối
    while (left < right)  // Khi left < right thì đổi chỗ
    {
        // Đổi chỗ phần tử đầu và cuối
        int temp = arr[left]; // temp là biến tạm
        arr[left] = arr[right]; // đổi chỗ phần tử đầu với phần tử cuối
        arr[right] = temp; // đổi chỗ phần tử cuối với phần tử đầu
        left++; // tăng left lên 1
        right--; // giảm right đi 1
    }
}

int main() 
{
    int n; // Số lượng phần tử của danh sách
    cout << "Nhập số lượng phần tử của danh sách: "; 
    cin >> n;
 
    int* arr = new int[n]; // Khởi tạo mảng động
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách
    {
        cin >> arr[i]; 
    }

    // Gọi hàm đảo ngược danh sách
    dao_nguoc_danh_sach(arr, n); // arr tương đương với *arr 

    // In danh sách sau khi đảo ngược
    cout << "Danh sách sau khi đảo ngược: ";
    for (int i = 0; i < n; i++)  // In danh sách sau khi đảo ngược
    {
        cout << arr[i] << " "; 
    }
    cout << endl; // Xuống dòng

    delete[] arr; // Xóa mảng động sau khi sử dụng xong
 
    return 0;
}


