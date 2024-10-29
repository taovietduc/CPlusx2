// VIẾT BẰNG C++
// Bài 65: Tạo hàm đếm số lượng từ trong chuỗi.

#include <iostream>
#include <sstream>  // Để sử dụng stringstream (đọc từng từ trong chuỗi)
#include <string> // Để sử dụng kiểu string
using namespace std;

int dem_so_luong_tu(const string& chuoi) // Hàm đếm số lượng từ nhận vào một chuỗi
{
    stringstream ss(chuoi); // Sử dụng stringstream để đọc từng từ trong chuỗi
    string tu; // Biến lưu từ
    int count = 0; 

    // Đếm số lượng từ trong chuỗi
    while (ss >> tu)  // Đọc từng từ trong chuỗi và lưu vào biến tu
    {
        count++; // Tăng biến đếm lên 1 sau mỗi từ được đọc ra từ chuỗi
    }
    return count; // Trả về số lượng từ đã đếm được
}

int main() 
{
    string chuoi; // Khai báo chuỗi
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để đọc cả dòng

    // Đếm số lượng từ và in ra kết quả
    int so_luong_tu = dem_so_luong_tu(chuoi); // Gọi hàm đếm số lượng từ
    cout << "Số lượng từ trong chuỗi: " << so_luong_tu << endl;

    return 0;
}
