// VIẾT BẰNG C++
// Tạo danh sách các số lẻ từ danh sách: Nhập một danh sách các số và tạo danh sách các số lẻ.

// VIẾT THEO MẢNG ĐỘNG
#include <iostream>
using namespace std;

int main() {
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng động để lưu danh sách các phần tử
    int* danh_sach = new int[n]; // Mảng để lưu các số nguyên
    int* danh_sach_le = new int[n]; // Mảng để lưu các số lẻ
    int count_le = 0; // Biến đếm số phần tử lẻ

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> danh_sach[i];
    }

    // Lọc các phần tử lẻ và thêm vào mảng danh_sach_le
    for (int i = 0; i < n; i++) {
        if (danh_sach[i] % 2 != 0) { // Kiểm tra số lẻ
            danh_sach_le[count_le++] = danh_sach[i];
        }
    }

    // In danh sách các số lẻ
    cout << "Danh sách các số lẻ là: ";
    for (int i = 0; i < count_le; i++) {
        cout << danh_sach_le[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] danh_sach;
    delete[] danh_sach_le;

    return 0;
}

// VIẾT THEO MẢNG TĨNH

#include <iostream>
using namespace std;

int main() {
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng tĩnh để lưu danh sách các phần tử
    int danh_sach[100]; // Giả sử tối đa 100 phần tử
    int danh_sach_le[100]; // Mảng để lưu các phần tử lẻ
    int count_le = 0; // Biến đếm số phần tử lẻ

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> danh_sach[i];
    }

    // Lọc các phần tử lẻ và thêm vào mảng danh_sach_le
    for (int i = 0; i < n; i++) {
        if (danh_sach[i] % 2 != 0) { // Kiểm tra số lẻ
            danh_sach_le[count_le++] = danh_sach[i];
        }
    }

    // In danh sách các số lẻ
    cout << "Danh sách các số lẻ là: ";
    for (int i = 0; i < count_le; i++) {
        cout << danh_sach_le[i] << " ";
    }
    cout << endl;

    return 0;
}