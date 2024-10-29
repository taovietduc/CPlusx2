// VIẾT BẰNG C++
// Bài 83: Tạo hàm sắp xếp danh sách số theo thứ tự giảm dần với danh sách tự nhập từ bàn phím.

#include <iostream>
#include <algorithm> // Để sử dụng hàm sort 
using namespace std;

void sap_xep_giam_dan(int* arr, int n)  // Hàm sắp xếp mảng giảm dần 
{
    sort(arr, arr + n, greater<int>()); // Sắp xếp mảng theo thứ tự giảm dần
}

int main()
{
    int n;
    cout << "Nhập số lượng phần tử: "; 
    cin >> n;

    // Khởi tạo mảng động
    int* arr = new int[n]; 

    // Nhập các phần tử vào mảng
    for (int i = 0; i < n; i++)  // Vòng lặp để nhập các phần tử vào mảng 
    {
        cout << "Nhập phần tử thứ " << i + 1 << ": "; // Xuất thông báo nhập phần tử thứ i + 1
        cin >> arr[i]; // Nhập phần tử thứ i vào mảng 
    }

    // Sắp xếp mảng giảm dần
    sap_xep_giam_dan(arr, n); // Gọi hàm sắp xếp mảng giảm dần

    // In mảng sau khi sắp xếp
    cout << "Mảng sau khi sắp xếp giảm dần: ";
    for (int i = 0; i < n; i++)  // Vòng lặp để in các phần tử của mảng sau khi sắp xếp
    {
        cout << arr[i] << " "; // In phần tử thứ i của mảng
    }
    cout << endl;

    // Giải phóng bộ nhớ cho mảng động
    delete[] arr; // Giải phóng bộ nhớ cho mảng động

    return 0;
}


