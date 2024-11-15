// VIẾT BẰNG C++
// Bài 139: Hàm kiểm tra chuỗi có phải là Pangram không

#include <iostream>
#include <string>  // Thư viện này dùng để sử dụng kiểu dữ liệu string
#include <unordered_set> // Thư viện này dùng để sử dụng kiểu dữ liệu unordered_set
#include <cctype> // Thư viện này dùng để sử dụng hàm isalpha() và tolower()
using namespace std;

bool isPangram(const string &s) // Hàm kiểm tra chuỗi có phải là Pangram không
{
    unordered_set<char> alphabet; // Khai báo một unordered_set để lưu các ký tự trong chuỗi

    for (char c : s)  // Duyệt qua từng ký tự trong chuỗi
    {
        if (isalpha(c))  // Nếu ký tự đó là chữ cái 
        {
            alphabet.insert(tolower(c));    // Thêm ký tự đó vào unordered_set
        }
    }

    return alphabet.size() == 26; // Nếu kích thước của unordered_set bằng 26 thì trả về true, ngược lại trả về false
}

int main() 
{
    string s = "The quick brown fox jumps over the lazy dog"; // Chuỗi cần kiểm tra
    cout << "Chuỗi có phải là Pangram không? " << (isPangram(s) ? "True" : "False") << endl; // In kết qu
    return 0;
}

// Output:
// Chuỗi có phải là Pangram không? True
// Chuỗi có phải là Pangram không? False
