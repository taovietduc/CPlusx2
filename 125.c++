// VIẾT BẰNG C++
// Bài 125: Tạo hàm chuyển đổi một chuỗi thành chữ in hoa.

#include <iostream>
#include <string>  // thư viện xử lý chuỗi 
#include <algorithm> // thư viện xử lý chuỗi 

using namespace std;
 
string toUppercase(const string& s)  // hàm chuyển chuỗi thành chữ in hoa 
{
    string result = s; // khởi tạo chuỗi kết quả bằng chuỗi ban đầu 
    transform(result.begin(), result.end(), result.begin(), ::toupper); 
    // chuyển chuỗi thành chữ in hoa 
    return result; // trả về chuỗi kết quả
}

int main() 
{
    string s = "Hello, world!"; // khởi tạo chuỗi ban đầu 
    cout << "Chuỗi in hoa là: " << toUppercase(s) << endl; // in ra chuỗi in hoa
    return 0; // kết thúc chương trình 
}

