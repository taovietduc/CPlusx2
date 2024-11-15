// VIẾT BẰNG C++
// Bài 126: Tạo hàm chuyển đổi một chuỗi thành chữ in thường.

#include <iostream>
#include <string> // thư viện xử lý chuỗi, thư viện này chứa hàm transform
#include <algorithm> // thư viện này chứa hàm tolower 

using namespace std;

string toLowercase(const string& s)  // hàm chuyển đổi chuỗi thành chữ in thường 
{
    string result = s; // tạo một chuỗi mới để lưu kết quả
    transform(result.begin(), result.end(), result.begin(), ::tolower); // hàm transform để chuyển đổi chuỗi thành chữ in thường
    return result; // trả về chuỗi kết quả 
}

int main() 
{
    string s = "Hello, World!"; // chuỗi ban đầu 
    cout << "Chuỗi in thường là: " << toLowercase(s) << endl; // in ra chuỗi sau khi chuyển đổi thành chữ in thường
    return 0; // kết thúc chương trình
}

// Output:
// Chuỗi in thường là: hello, world!
// Như vậy chuỗi "Hello, World!" đã được chuyển thành chữ in thường "hello, world!"
