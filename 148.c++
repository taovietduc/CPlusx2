// VIẾT BẰNG C++
// Bài 148:Viết hàm kiểm tra xem một chuỗi có thể chuyển thành chuỗi palindrome với tối đa một lần xóa ký tự không.

#include <iostream>
#include <string> // Thư viện string 
using namespace std;

// Hàm kiểm tra chuỗi palindrome
bool isPalindrome(string str, int start, int end) // Hàm kiểm tra chuỗi có phải palindrome từ vị trí start đến end không
{
    while (start < end) // Duyệt từ 2 đầu vào giữa
    {
        if (str[start] != str[end]) // Nếu ký tự khác nhau
            return false; // Trả về False
        start++; // Tăng start lên 1
        end--; // Giảm end đi 1
    }
    return true; // Trả về True
}

// Hàm kiểm tra chuỗi có thể chuyển thành palindrome với tối đa 1 lần xóa
bool canBePalindrome(string str) // Hàm kiểm tra chuỗi có thể chuyển thành palindrome với tối đa 1 lần xóa
{
    int start = 0; // Vị trí đầu
    int end = str.length() - 1; // Vị trí cuối
    
    // Duyệt từ 2 đầu vào giữa
    while (start < end) // Duyệt từ 2 đầu vào giữa
    {
        // Nếu 2 ký tự không giống nhau
        if (str[start] != str[end]) // Nếu ký tự khác nhau
        {
            // Thử xóa ký tự bên trái hoặc bên phải
            return isPalindrome(str, start + 1, end) || // Thử xóa ký tự bên trái
                   isPalindrome(str, start, end - 1); // Thử xóa ký tự bên phải
        }
        start++; // Tăng start lên 1
        end--; // Giảm end đi 1
    }
    return true; // Chuỗi đã là palindrome
}

int main() 
{
    string str; // Chuỗi cần kiểm tra
    cout << "Nhap chuoi: "; // Nhập chuỗi
    getline(cin, str); // Nhập chuỗi
    
    if (canBePalindrome(str)) // Nếu chuỗi có thể chuyển thành palindrome với tối đa 1 lần xóa
        cout << "Co the chuyen thanh palindrome voi toi da 1 lan xoa" << endl; // In ra kết quả
    else // Ngược lại
        cout << "Khong the chuyen thanh palindrome voi toi da 1 lan xoa" << endl; // In ra kết quả
        
    return 0; // Trả về 0
}

/*
Giải thích chi tiết:

1. Hàm isPalindrome(str, start, end):
   - Kiểm tra đoạn chuỗi từ vị trí start đến end có phải palindrome không
   - So sánh các ký tự đối xứng từ 2 đầu vào giữa
   - Trả về true nếu là palindrome, false nếu không phải

2. Hàm canBePalindrome(str):
   - Duyệt chuỗi từ 2 đầu vào giữa
   - Khi gặp 2 ký tự không giống nhau:
     + Thử xóa ký tự bên trái: kiểm tra đoạn (start+1, end)
     + Thử xóa ký tự bên phải: kiểm tra đoạn (start, end-1)
   - Nếu một trong 2 cách xóa tạo được palindrome thì trả về true
   - Ngược lại trả về false

3. Hàm main():
   - Nhập chuỗi từ bàn phím
   - Gọi hàm canBePalindrome() để kiểm tra
   - In kết quả

Ví dụ:
- "abca" -> true (xóa 'c' được "aba")
- "abcd" -> false
- "aba" -> true (đã là palindrome)
- "abba" -> true (đã là palindrome)
*/
