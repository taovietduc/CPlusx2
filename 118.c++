// VIẾT BẰNG C++
// Bài 118: Tạo hàm kiểm tra một chuỗi có chứa khoảng trắng hay không.

#include <iostream>
#include <string> // Để sử dụng kiểu dữ liệu string trong C++
#include <cctype> // Để sử dụng hàm isspace() trong C++ 

using namespace std;

bool containsWhitespace(const string& str)  // Hàm kiểm tra chuỗi có chứa khoảng trắng hay không
{
    for (char c : str)  // Duyệt qua từng ký tự trong chuỗi
    {
        if (isspace(c))  // Hàm isspace() kiểm tra ký tự có phải là khoảng trắng không
        {  // Kiểm tra nếu ký tự là khoảng trắng
            return true; // Trả về true 
        } 
    }
    return false;
}

int main() {
    string str = "Hello World";
    if (containsWhitespace(str))  // Gọi hàm kiểm tra chuỗi có chứa khoảng trắng hay không
    {
        cout << "Chuỗi chứa khoảng trắng." << endl;
    } 
    else // Nếu không chứa khoảng trắng 
    {
        cout << "Chuỗi không chứa khoảng trắng." << endl;
    }

    return 0; // Kết thúc chương trình
}
