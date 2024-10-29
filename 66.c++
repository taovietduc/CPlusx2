// VIẾT BẰNG C++
// Bài 66: Tạo hàm đếm số lượng ký tự 'a' trong chuỗi.

#include <iostream>
#include <string> // Thư viện string
using namespace std;

int dem_ky_tu_a(const string& chuoi) // Hàm đếm số lượng ký tự 'a' trong chuỗi
{
    int count = 0; // Biến đếm số lượng ký tự 'a'

    // Duyệt qua từng ký tự trong chuỗi và đếm ký tự 'a'
    for (char ky_tu : chuoi)  // Duyệt qua từng ký tự trong chuỗi
    {
        if (ky_tu == 'a')  // Nếu ký tự là 'a'
        {
            count++; // Tăng biến đếm lên 1
        }
    }
    return count; // Trả về số lượng ký tự 'a'
}

int main() 
{
    string chuoi;
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để đọc cả dòng

    // Đếm số lượng ký tự 'a' và in ra kết quả
    int so_luong_a = dem_ky_tu_a(chuoi); // Gọi hàm đếm số lượng ký tự 'a'
    cout << "Số lượng ký tự 'a' trong chuỗi: " << so_luong_a << endl; // In ra kết quả

    return 0; // Kết thúc chương trình
}
