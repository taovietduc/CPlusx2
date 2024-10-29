// VIẾT BẰNG C++
// Bài 72: Tạo hàm xóa phần tử khỏi từ điển.

#include <iostream>
#include <map> // Thư viện map trong C++
using namespace std;

// Hàm xóa phần tử khỏi từ điển
void xoa_phan_tu(map<string, int>& tu_dien, string khoa) // map<string, int> tu_dien = map<string, int> tu_dien
{
    auto it = tu_dien.find(khoa); // Tìm phần tử có khóa bằng khoa
    if (it != tu_dien.end()) // Nếu phần tử tồn tại
    {
        tu_dien.erase(it); // Xóa phần tử khỏi từ điển
        cout << "Đã xóa khóa '" << khoa << "' khỏi từ điển." << endl; // In ra thông báo
    }
    else // Nếu phần tử không tồn tại
    {
        cout << "Khóa '" << khoa << "' không tồn tại trong từ điển." << endl; // In ra thông báo
    }
}

int main() 
{
    // Tạo một từ điển mẫu
    map<string, int> tu_dien = {{"apple", 3}, {"banana", 2}, {"orange", 5}}; 
    // Tạo một từ điển với các phần tử mẫu

    // Nhập khóa cần xóa từ người dùng
    string khoa;
    cout << "Nhập khóa cần xóa: ";
    cin >> khoa;

    // Xóa phần tử và in kết quả
    xoa_phan_tu(tu_dien, khoa);

    // In từ điển sau khi xóa phần tử
    cout << "Từ điển sau khi xóa: " << endl; 
    for (const auto& pair : tu_dien)  // Duyệt từng phần tử trong từ điển
    {
        cout << pair.first << ": " << pair.second << endl; // In ra khóa và giá trị tương ứng
    }
    return 0;
}
