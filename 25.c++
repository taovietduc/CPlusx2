// VIẾT BẰNG C++
// Chuyển đổi chuỗi thành chữ hoa: Nhập một chuỗi và chuyển đổi tất cả các ký tự thành chữ hoa.

// CÁCH 1: Sử dụng vòng lặp for.
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Nhập chuỗi từ người dùng
    string s;
    cout << "Nhập một chuỗi: ";
    getline(cin, s); // getline() để nhập chuỗi có chứa khoảng trắng

    // Chuyển đổi chuỗi thành chữ hoa
    for (int i = 0; i < s.length(); i++) // Duyệt qua từng ký tự trong chuỗi, s.length() trả về độ dài của chuỗi
    {
        // Kiểm tra và chuyển ký tự thường thành chữ hoa

        if (s[i] >= 'a' && s[i] <= 'z') // Nếu ký tự là chữ cái thường
        {
            s[i] = s[i] - ('a' - 'A'); // Chuyển đổi ký tự thường thành ký tự hoa
        }
    }

    // In chuỗi đã chuyển đổi
    cout << "Chuỗi chữ hoa: " << s << endl;

    return 0;
}


// CÁCH 2: Sử dụng hàm transform() và toupper().
#include <iostream>
#include <string> // Thư viện này để sử dụng kiểu dữ liệu string
#include <algorithm>  // Thư viện cho hàm transform
using namespace std;

int main() 
{
    // Nhập chuỗi từ người dùng
    string s;
    cout << "Nhập một chuỗi: ";
    getline(cin, s); // getline() để nhập chuỗi có chứa khoảng trắng

    // Chuyển đổi chuỗi thành chữ hoa
    transform(s.begin(), s.end(), s.begin(), ::toupper); // ::toupper chuyển đổi ký tự thành chữ hoa (uppercase)

    // In chuỗi đã chuyển đổi
    cout << "Chuỗi chữ hoa: " << s << endl;

    return 0;
}
