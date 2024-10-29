// VIẾT BẰNG C++
// Bài 100: Tạo hàm kiểm tra một chuỗi có chứa chữ cái in hoa hay không.

#include <iostream>
#include <string> // Thư viện string để sử dụng chuỗi
using namespace std;

// Hàm kiểm tra chuỗi có chứa chữ cái in hoa hay không
bool chua_chu_in_hoa(const string& str) 
{
    for (char c : str)  // Duyệt từng ký tự trong chuỗi str 
    {
        if (isupper(c)) // Kiểm tra xem ký tự có phải là chữ cái in hoa
        {  
            return true; // Nếu có thì trả về true và kết thúc hàm 
        }
    }
    return false; // Nếu không có chữ cái in hoa thì trả về false
}

int main() 
{
    string chuoi; // Khai báo chuỗi cần kiểm tra chứa chữ cái in hoa hay không
    
    cout << "Nhập chuỗi: "; // Nhập chuỗi từ bàn phím
    getline(cin, chuoi); // Hàm getline() để nhập chuỗi có thể chứa khoảng trắng
    
    if (chua_chu_in_hoa(chuoi))  // Gọi hàm kiểm tra chuỗi có chứa chữ cái in hoa hay không
    {
        cout << "Chuỗi có chứa chữ cái in hoa." << endl;
    } 
    else  // Nếu không có chữ cái in hoa thì in ra màn hình
    {
        cout << "Chuỗi không chứa chữ cái in hoa." << endl;
    }

    return 0;
}
