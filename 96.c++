// VIẾT BẰNG C++
// Bài 96: Tạo hàm kiểm tra chuỗi có phải là chuỗi con của một chuỗi khác hay không.

#include <iostream>
#include <string> // Thư viện string
using namespace std;

// Hàm kiểm tra chuỗi con
bool la_chuoi_con(const string& chuoi_cha, const string& chuoi_con) 
{
    // Sử dụng hàm find() để kiểm tra vị trí chuỗi con trong chuỗi cha
    return chuoi_cha.find(chuoi_con) != string::npos; 
    // Trả về true nếu chuỗi con tồn tại trong chuỗi cha
}

int main() 
{
    string chuoi_cha, chuoi_con; // Khai báo 2 chuỗi

    cout << "Nhập chuỗi cha: "; // Nhập chuỗi cha
    getline(cin, chuoi_cha); // Đọc chuỗi từ bàn phím (có thể chứa khoảng trắng)

    cout << "Nhập chuỗi con: "; // Nhập chuỗi con
    getline(cin, chuoi_con); // Đọc chuỗi từ bàn phím (có thể chứa khoảng trắng)

    if (la_chuoi_con(chuoi_cha, chuoi_con))  // Gọi hàm kiểm tra chuỗi con
    {
        cout << "Chuỗi con '" << chuoi_con << "' có tồn tại trong chuỗi cha." << endl;
    } 
    else  // Nếu không tồn tại
    {
        cout << "Chuỗi con '" << chuoi_con << "' không tồn tại trong chuỗi cha." << endl;
    }

    return 0; // Kết thúc chương trình
}
