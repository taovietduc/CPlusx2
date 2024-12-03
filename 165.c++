// Viết Bằng C++
// Bài 165: Viết hàm mã hóa một chuỗi bằng cách thay thế mỗi ký tự thành ký tự tiếp theo trong bảng chữ cái (vòng lặp từ 'z' về 'a').

#include <iostream>
#include <string>
using namespace std;

// Hàm mã hóa ký tự
char encodeChar(char c) {
    // Xử lý chữ thường
    if (c >= 'a' && c <= 'z') {
        return (c == 'z') ? 'a' : c + 1;
    }
    // Xử lý chữ hoa 
    else if (c >= 'A' && c <= 'Z') {
        return (c == 'Z') ? 'A' : c + 1;
    }
    // Giữ nguyên các ký tự khác
    return c;
}

// Hàm mã hóa chuỗi
string encodeString(string str) {
    string result = "";
    for (char c : str) {
        result += encodeChar(c);
    }
    return result;
}

int main() {
    string input;
    cout << "Nhap chuoi can ma hoa: ";
    getline(cin, input);
    
    string encoded = encodeString(input);
    cout << "Chuoi sau khi ma hoa: " << encoded << endl;
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm encodeChar:
   - Nhận vào một ký tự và trả về ký tự đã mã hóa
   - Xử lý riêng cho chữ thường (a-z) và chữ hoa (A-Z)
   - Nếu là 'z' thì trả về 'a', nếu là 'Z' thì trả về 'A'
   - Các ký tự khác giữ nguyên không thay đổi

2. Hàm encodeString:
   - Nhận vào một chuỗi cần mã hóa
   - Duyệt qua từng ký tự trong chuỗi
   - Mã hóa từng ký tự bằng hàm encodeChar
   - Nối các ký tự đã mã hóa vào chuỗi kết quả

3. Ví dụ:
   - Input: "Hello"
   - Output: "Ifmmp"
   - Giải thích: H->I, e->f, l->m, l->m, o->p

4. Chương trình chính:
   - Nhập chuỗi từ người dùng
   - Gọi hàm mã hóa và hiển thị kết quả
*/

