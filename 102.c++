// VIẾT BẰNG C++
// Bài 102: Tạo hàm tìm số lớn nhất thứ ba trong danh sách.

#include <iostream>
#include <algorithm> // Thư viện hỗ trợ sắp xếp mảng theo thứ tự giảm dần
using namespace std;

// Hàm tìm số lớn thứ ba trong danh sách
int tim_so_lon_thu_ba(int arr[], int n)  // arr[]: mảng các phần tử, n: số lượng phần tử
{
    if (n < 3)  // Nếu danh sách không đủ 3 phần tử
    {
        cout << "Danh sách không đủ 3 phần tử." << endl; // Thông báo
        return -1; // Trả về giá trị không hợp lệ
    }
    
    // Sắp xếp mảng theo thứ tự giảm dần
    sort(arr, arr + n, greater<int>()); // greater<int>() để sắp xếp giảm dần
 
    // Tìm số lớn thứ ba
    int count = 1; // Đếm số lượng phần tử lớn nhất
    for (int i = 1; i < n; i++)  // Duyệt từ phần tử thứ 2 đến cuối danh sách
    {
        if (arr[i] != arr[i - 1])  // Nếu phần tử hiện tại khác phần tử trước đó
        {
            count++; // Tăng biến đếm lên 1 đơn vị (đếm số lượng phần tử lớn nhất)
        }
        if (count == 3)  // Nếu đã tìm được số lớn thứ ba
        {
            return arr[i]; // Trả về giá trị số lớn thứ ba đó
        }
    }
    
    cout << "Không tìm thấy số lớn thứ ba (có thể có ít hơn 3 giá trị duy nhất)." << endl;
    return -1; // Trả về giá trị không hợp lệ
}

int main()  // Hàm main
{
    int n;
    cout << "Nhập số lượng phần tử: "; // Nhập số lượng phần tử
    cin >> n;
 
    int arr[n]; // Khai báo mảng chứa các phần tử
    cout << "Nhập các phần tử của danh sách: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử của danh sách
    {
        cin >> arr[i];  // Nhập phần tử thứ i
    }

    int so_lon_thu_ba = tim_so_lon_thu_ba(arr, n); // Gọi hàm tìm số lớn thứ ba trong danh sách
    if (so_lon_thu_ba != -1)  // Nếu tìm thấy số lớn thứ ba
    {
        cout << "Số lớn thứ ba trong danh sách là: " << so_lon_thu_ba << endl; // Xuất kết quả
    }

    return 0; // Kết thúc chương trình
}
