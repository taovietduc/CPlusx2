// VIẾT BẰNG C++
// Lọc danh sách theo điều kiện: Nhập một danh sách và một điều kiện, lọc các phần tử thỏa mãn điều kiện.

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng tĩnh để lưu danh sách các phần tử
    int danh_sach[100]; // Giả sử tối đa 100 phần tử
    int danh_sach_loc[100]; // Mảng để lưu các phần tử lọc (số chẵn)
    int count_loc = 0; // Biến đếm số phần tử thỏa mãn điều kiện

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) // Vòng lặp để nhập từng phần tử
    {
        cin >> danh_sach[i]; // Nhập phần tử
    }

    // Lọc các phần tử thỏa mãn điều kiện (số chẵn)
    for (int i = 0; i < n; i++) // Vòng lặp để duyệt từng phần tử
    {
        if (danh_sach[i] % 2 == 0) // Kiểm tra điều kiện số chẵn
        {
            danh_sach_loc[count_loc++] = danh_sach[i]; // Lưu phần tử vào danh sách lọc
        }
    }

    // In danh sách đã lọc
    cout << "Danh sách các số chẵn là: ";
    for (int i = 0; i < count_loc; i++) // Vòng lặp để in từng phần tử đã lọc
    {
        cout << danh_sach_loc[i] << " "; // In phần tử
    }
    cout << endl;

    return 0;
}

// Mảng tĩnh: danh_sach[100] và danh_sach_loc[100] được sử dụng thay thế cho vector, 
// với giả định tối đa có 100 phần tử trong danh sách.
// Lọc số chẵn: Chương trình duyệt qua từng phần tử trong danh sách và thêm các số chẵn vào mảng danh_sach_loc.
// Biến đếm count_loc: Dùng để theo dõi số phần tử chẵn đã lọc, nhằm in ra đúng số phần tử.