// VIẾT BẰNG C++
// Tạo danh sách từ chuỗi: Nhập một chuỗi và tạo danh sách từ chuỗi đó.

#include <iostream>
#include <sstream> // Để sử dụng stringstream
using namespace std;

int main() {
    // Nhập một chuỗi từ người dùng
    string chuoi; // Chuỗi cần tạo danh sách từ
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để nhập cả dòng

    // Giới hạn số lượng từ (giả sử tối đa 100 từ)
    const int MAX_TU = 100;// Số lượng từ tối đa trong chuỗi (có thể thay đổi tuỳ ý)
    string danh_sach_tu[MAX_TU]; // Mảng chứa danh sách các từ
    int so_tu = 0;

    stringstream ss(chuoi); // Sử dụng stringstream để tách từng từ
    string tu; // Biến chứa từng từ

    // Đọc từng từ và thêm vào mảng
    while (ss >> tu && so_tu < MAX_TU) // Đọc từng từ và kiểm tra số lượng từ
    {
        danh_sach_tu[so_tu] = tu; // Thêm từ vào mảng
        so_tu++; // Tăng số lượng từ lên 1
    }

    // In danh sách các từ
    cout << "Danh sách các từ là: ";
    for (int i = 0; i < so_tu; i++) // Duyệt qua từng từ trong mảng
    {
        cout << danh_sach_tu[i] << " ";
    }
    cout << endl;

    return 0;
}
