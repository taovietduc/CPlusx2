// VIẾT BẰNG C++
// Bài 110: Tạo hàm kiểm tra một số có phải là số palindrome không.

#include <iostream>
#include <string> // Thư viện xử lý chuỗi trong C++

using namespace std;

bool isPalindrome(int num) // Hàm kiểm tra số palindrome 
{
    /*
    Kiểm tra xem một số có phải là số palindrome hay không.

    Parameters:
    num (int): Số nguyên cần kiểm tra.

    Returns:
    bool: True nếu số là palindrome, False nếu không.
    */
    // Chuyển số thành chuỗi
    string str_num = to_string(num); // Hàm chuyển số sang chuỗi 
    string reversed_str = string(str_num.rbegin(), str_num.rend());
    // Kiểm tra chuỗi có giống nhau khi đảo ngược hay không
    return str_num == reversed_str; // So sánh chuỗi với chuỗi đảo ngược
}

int main() 
{
    int number = 12321; // Số cần kiểm tra
    if (isPalindrome(number))  // Gọi hàm kiểm tra số palindrome
    {
        cout << number << " là số palindrome." << endl;
    } 
    else  // Nếu không phải số palindrome
    {
        cout << number << " không phải là số palindrome." << endl;
    }
    return 0; // Kết thúc chương trình
}
