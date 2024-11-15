// VIẾT BẰNG C++
// Bài 130: Tạo hàm tìm chữ cái đầu tiên không lặp lại trong một chuỗi.

#include <iostream>
#include <string> // Để sử dụng lớp string trong C++ 
#include <unordered_map> // Để sử dụng lớp unordered_map trong C++

using namespace std;

char firstNonRepeatingChar(const string& s)  // Hàm tìm ký tự đầu tiên không lặp lại
{
    unordered_map<char, int> char_count;  // Sử dụng unordered_map để đếm tần suất ký tự

    // Đếm tần suất của mỗi ký tự
    for (char ch : s)  // Duyệt qua từng ký tự trong chuỗi s và tăng tần suất của ký tự đó lên 1
    {
        char_count[ch]++; // Tăng tần suất của ký tự ch lên 1 
    }

    // Tìm ký tự đầu tiên có tần suất là 1
    for (char ch : s)  // Duyệt qua từng ký tự trong chuỗi s
    {
        if (char_count[ch] == 1)  // Nếu tần suất của ký tự ch là 1 thì trả về ký tự đó
        {
            return ch;  // Trả về ký tự đầu tiên không lặp lại
        }
    }

    return '\0';  // Trả về '\0' nếu không có ký tự nào không lặp lại
}

int main() 
{
    string s = "aabbcde"; // Chuỗi s cần kiểm tra ký tự đầu tiên không lặp lại
    char result = firstNonRepeatingChar(s); // Gọi hàm tìm ký tự đầu tiên không lặp lại

    if (result != '\0')  // Nếu ký tự đầu tiên không lặp lại khác '\0' thì in ra kết quả
    {
        cout << "Chữ cái đầu tiên không lặp lại là: " << result << endl;
    } 
    else  // Ngược lại, không có ký tự nào không lặp lại thì in ra thông báo
    {
        cout << "Không có ký tự nào không lặp lại." << endl;
    }

    return 0; // Kết thúc chương trình
}

// Kết quả
// Chữ cái đầu tiên không lặp lại là: c
// Giải thích: Trong chuỗi "aabbcde", ký tự đầu tiên không lặp lại là 'c'.


