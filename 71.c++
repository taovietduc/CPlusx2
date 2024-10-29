// VIẾT BẰNG C++
// Bài 71: Tạo hàm thêm phần tử vào từ điển.

#include <iostream>
#include <map> // Thư viện map trong C++ 
using namespace std;

// Hàm thêm phần tử vào từ điển
void them_vao_tu_dien(map<string, string>& tu_dien, string khoa, string gia_tri)  
// map<string, string> tu_dien = map<string, string> tu_dien 
{
    tu_dien[khoa] = gia_tri; // Thêm phần tử vào từ điển (map) với khóa và giá trị tương ứng 
}

int main()  // Hàm main 
{
    map<string, string> tu_dien; // Tạo một từ điển (map) trống

    string khoa, gia_tri; // Khai báo biến khoa và gia_tri kiểu string 

    // Nhập khóa và giá trị từ người dùng
    cout << "Nhập khóa: "; 
    cin >> khoa;
    cout << "Nhập giá trị: ";
    cin >> gia_tri;

    // Thêm phần tử vào từ điển
    them_vao_tu_dien(tu_dien, khoa, gia_tri); // Gọi hàm thêm phần tử vào từ điển 

    // In từ điển sau khi thêm phần tử
    cout << "Từ điển sau khi thêm: " << endl;
    for (const auto& pair : tu_dien)  // Duyệt từng phần tử trong từ điển
    {
        cout << pair.first << ": " << pair.second << endl;
        // In ra khóa và giá trị tương ứng
    }

    return 0;
}
