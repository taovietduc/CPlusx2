// VIẾT BẰNG C++
// Bai 103: Tạo hàm kiểm tra một danh sách có chứa phần tử trùng lặp hay không.

#include <iostream>
#include <unordered_set> // Thư viện chứa class unordered_set
using namespace std;

// Hàm kiểm tra xem danh sách có chứa phần tử trùng lặp hay không
bool kiem_tra_phan_tu_trung_lap(int arr[], int n)  // arr[]: mảng chứa các phần tử, n: số lượng phần tử
{
    unordered_set<int> tap_phan_tu;  // Sử dụng unordered_set để lưu các phần tử

    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        // Nếu phần tử đã tồn tại trong set thì danh sách có phần tử trùng lặp
        if (tap_phan_tu.find(arr[i]) != tap_phan_tu.end())  // find() trả về iterator cuối cùng nếu không tìm thấy phần tử
        {
            return true; // Có phần tử trùng lặp
        } 
        tap_phan_tu.insert(arr[i]);  // Thêm phần tử vào set
    }

    return false;  // Không có phần tử trùng lặp
}

int main()  // Hàm main
{
    int n;
    cout << "Nhập số lượng phần tử của danh sách: "; // Nhập số lượng phần tử
    cin >> n;

    int*  arr = new int[n]; // Khai báo mảng chứa các phần tử
    cout << "Nhập các phần tử của danh sách: "; // Nhập các phần tử
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử
    {
        cin >> arr[i]; // Nhập phần tử thứ i
    }

    if (kiem_tra_phan_tu_trung_lap(arr, n))  // Kiểm tra xem danh sách có chứa phần tử trùng lặp hay không
    {
        cout << "Danh sách có chứa phần tử trùng lặp." << endl; // Xuất thông báo
    }  
    else  // Nếu không có phần tử trùng lặp thì xuất thông báo
    {
        cout << "Danh sách không chứa phần tử trùng lặp." << endl; // Xuất thông báo
    }

    delete[] arr; // Xóa mảng

    return 0;
}


