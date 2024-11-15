// VIẾT BẰNG C++
// Bài 123: Tạo hàm tính tổng các chữ số trong chuỗi.

#include <iostream>
#include <string> // Thư viện string

using namespace std;

int sumOfDigitsInString(const string& s)  // Hàm tính tổng các chữ số trong chuỗi
{ 
    int total = 0; // Khởi tạo biến tổng bằng 0 
    for (char ch : s)  // Duyệt qua từng ký tự trong chuỗi
    {
        if (isdigit(ch)) // Hàm isdigit() kiểm tra xem ký tự có phải là chữ số không
        {  // Kiểm tra nếu ký tự là chữ số
            total += ch - '0';  // Chuyển ký tự chữ số sang số nguyên và cộng vào tổng
        }
    }
    return total; // Trả về tổng các chữ số trong chuỗi 
}

int main() 
{
    string s = "a1b2c3"; // Khởi tạo chuỗi s    
    cout << "Tổng các chữ số trong chuỗi là: " << sumOfDigitsInString(s) << endl; 
    // In ra màn hình tổng các chữ số trong chuỗi 
    return 0; // Kết thúc chương trình 
}
