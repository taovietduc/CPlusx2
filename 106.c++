// VIẾT BẰNG C++
// Bài 106: Tạo hàm kiểm tra hai chuỗi có phải là anagram hay không.

#include <iostream>
#include <algorithm> // Thư viện này chứa hàm sort
#include <string> // Thư viện này chứa lớp string
using namespace std;

// Hàm kiểm tra hai chuỗi có phải là anagram không
bool kiem_tra_anagram(string s1, string s2)  // Hàm trả về kiểu bool
{
    // Loại bỏ khoảng trắng và chuyển chuỗi về chữ thường
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end()); // Hàm remove() sẽ trả về con trỏ đến phần tử đầu tiên của phần tử cuối cùng bị xóa
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end()); // Hàm erase() sẽ xóa các phần tử từ vị trí đầu tiên đến vị trí cuối cùng
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // Hàm transform() sẽ thực hiện việc chuyển đổi các phần tử trong mảng từ vị trí đầu tiên đến vị trí cuối cùng
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); // Hàm tolower() sẽ chuyển ký tự thành chữ thường

    // Kiểm tra độ dài của hai chuỗi
    if (s1.length() != s2.length())  // Nếu độ dài của hai chuỗi không bằng nhau thì không phải là anagram
    {
        return false; // Trả về false
    }

    // Sắp xếp và so sánh
    sort(s1.begin(), s1.end()); // Hàm sort() sẽ sắp xếp các phần tử trong mảng từ vị trí đầu tiên đến vị trí cuối cùng
    sort(s2.begin(), s2.end()); // Hàm sort() sẽ sắp xếp các phần tử trong mảng từ vị trí đầu tiên đến vị trí cuối cùng

    return s1 == s2; // Trả về true nếu hai chuỗi giống nhau, ngược lại trả về false
}

int main()  // Hàm main
{
    string chuoi1, chuoi2; // Khai báo 2 chuỗi

    cout << "Nhập chuỗi thứ nhất: "; // Xuất thông báo
    getline(cin, chuoi1); // Nhập chuỗi

    cout << "Nhập chuỗi thứ hai: "; // Xuất thông báo
    getline(cin, chuoi2); // Nhập chuỗi

    if (kiem_tra_anagram(chuoi1, chuoi2))  // Nếu hai chuỗi là anagram
    {
        cout << "Hai chuỗi là anagram." << endl; // Xuất thông báo 
    } 
    else  // Ngược lại
    {
        cout << "Hai chuỗi không phải là anagram." << endl;
    }

    return 0; // Kết thúc chương trình
}
