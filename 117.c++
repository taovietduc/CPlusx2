// VIẾT BẰNG C++
// Bài 117: Tạo hàm kiểm tra một chuỗi có chứa ký tự số hay không.

#include <iostream>
#include <string> // Để sử dụng string trong C++
#include <cctype>  // Để sử dụng isdigit() trong C++
 
using namespace std; 

bool containsDigit(const string& str)  // Hàm kiểm tra chuỗi có chứa ký tự số hay không
{ 
    for (char c : str)  // Duyệt qua từng ký tự trong chuỗi
    { 
        if (isdigit(c))  // Kiểm tra ký tự có phải là số không
        {  // Kiểm tra nếu ký tự là số
            return true; 
        }
    }
    return false;
}

int main() 
{
    string str = "Hello123"; // Chuỗi cần kiểm tra có chứa ký tự số hay không
    if (containsDigit(str))  // Kiểm tra chuỗi có chứa ký tự số hay không
    {
        cout << "Chuỗi chứa ký tự số." << endl; 
    } 
    else  // Nếu chuỗi không chứa ký tự số 
    {
        cout << "Chuỗi không chứa ký tự số." << endl;
    }

    return 0; 
}
