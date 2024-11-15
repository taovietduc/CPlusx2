// VIẾT BẰNG C++
// Bài 131: Tạo hàm đếm số lần xuất hiện của một ký tự trong chuỗi.

#include <iostream>
#include <string> // thư viện string 

using namespace std;

int countCharOccurrences(const string& s, char ch)  
// hàm đếm số lần xuất hiện của ký tự ch trong chuỗi s
{
    int count = 0; // khai báo biến count = 0 

    // Duyệt qua từng ký tự trong chuỗi và đếm
    for (char c : s)  // vòng lặp chạy từng ký tự trong chuỗi
    {
        if (c == ch)  // nếu ký tự c bằng ký tự ch thì tăng count lên 1
        {
            count++; // tăng count lên 1 
        }
    }

    return count; // trả về số lần xuất hiện của ký tự ch trong chuỗi s
}

int main() 
{
    string s = "hello world"; // khai báo chuỗi s = "hello world"
    char ch = 'o'; // khai báo ký tự ch = 'o' 
    cout << "Số lần xuất hiện của '" << ch << "' trong chuỗi là: " << countCharOccurrences(s, ch) << endl; 
    // in ra số lần xuất hiện của ký tự ch trong chuỗi s

    return 0; // kết thúc chương trình 
}

// Kết quả:
// Số lần xuất hiện của 'o' trong chuỗi là: 2
// Giải thích: Ký tự 'o' xuất hiện 2 lần trong chuỗi "hello world"