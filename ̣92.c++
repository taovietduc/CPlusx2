// VIẾT BẰNG C++
// Bài 92: Tạo hàm sắp xếp chuỗi theo thứ tự bảng chữ cái.

#include <iostream>
#include <algorithm> // Thư viện chứa hàm sort
#include <string>   // Thư viện chứa lớp string
using namespace std;

// Hàm sắp xếp chuỗi theo thứ tự bảng chữ cái
void sap_xep_chuoi(string &str)  // Truyền chuỗi theo tham chiếu
{
    sort(str.begin(), str.end()); // Sắp xếp chuỗi theo thứ tự bảng chữ cái
}

int main() 
{
    string chuoi;
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi); // Nhập chuỗi có dấu cách

    // Sắp xếp chuỗi theo thứ tự bảng chữ cái
    sap_xep_chuoi(chuoi);   // Truyền chuỗi theo tham chiếu

    cout << "Chuỗi sau khi sắp xếp: " << chuoi << endl;

    return 0; // Kết thúc chương trình
}
