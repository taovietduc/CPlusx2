// VIẾT BẰNG C++
// Kiểm tra phần tử có trong danh sách: Nhập một danh sách và một phần tử, kiểm tra xem phần tử đó có trong danh sách không.

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng tĩnh để lưu danh sách các phần tử
    int danh_sach[100]; // Giả sử kích thước tối đa của danh sách là 100

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: "; // Nhập các phần tử vào danh sách
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        cin >> danh_sach[i]; // Nhập phần tử thứ i
    }

    // Nhập phần tử cần kiểm tra
    int phan_tu_kiem_tra;
    cout << "Nhập phần tử cần kiểm tra: ";
    cin >> phan_tu_kiem_tra;

    // Kiểm tra xem phần tử có trong danh sách không
    bool found = false; // Biến kiểm tra phần tử có trong danh sách không
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        if (danh_sach[i] == phan_tu_kiem_tra) // Nếu phần tử tìm thấy
        {
            found = true; // Đánh dấu phần tử tìm thấy
            break; // Thoát khỏi vòng lặp
        }
    }

    if (found)  // Nếu phần tử tìm thấy
    {
        cout << "Phần tử " << phan_tu_kiem_tra << " có trong danh sách." << endl;
    } 
    else // Nếu phần tử không tìm thấy
    {
        cout << "Phần tử " << phan_tu_kiem_tra << " không có trong danh sách." << endl;
    }

    return 0;
}

// Mảng tĩnh: Sử dụng mảng tĩnh danh_sach[100] để lưu các phần tử. Giả sử danh sách có tối đa 100 phần tử, 
// các bạn có thể tăng hoặc giảm kích thước này tùy theo yêu cầu.