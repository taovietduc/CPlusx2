// VIẾT BẰNG C++
// Bài 84: Tạo hàm kiểm tra chuỗi có chứa toàn chữ số không.

#include <iostream>
#include <cctype> // Thư viện cho hàm isdigit
using namespace std;

// Hàm kiểm tra chuỗi có chứa toàn chữ số không
bool kiem_tra_toan_chu_so(const string& chuoi) 
{
    for (char c : chuoi) 
    {
        if (!isdigit(c)) // Nếu có bất kỳ ký tự nào không phải là chữ số
        { 
            return false; // Trả về false luôn và kết thúc hàm
        }
    }
    return true;
}

int main()
{
    string chuoi;
    cout << "Nhập chuỗi: ";
    cin >> chuoi;

    if (kiem_tra_toan_chu_so(chuoi))  // Nếu hàm trả về true thì in ra chuỗi chứa toàn chữ số
    {
        cout << "Chuỗi chứa toàn chữ số." << endl;
    } 
    else  // Ngược lại in ra chuỗi không chứa toàn chữ số
    {
        cout << "Chuỗi không chứa toàn chữ số." << endl;
    }

    return 0;
}
