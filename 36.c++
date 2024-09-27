// VIẾT BẰNG C++
// Tạo từ điển từ danh sách: Nhập một danh sách các từ và tạo từ điển từ danh sách đó.

#include <iostream>
#include <map> // Sử dụng map để lưu từ điển
#include <string> // Sử dụng string để lưu chuỗi
#include <sstream> // Sử dụng stringstream để tách từng từ trong chuỗi
using namespace std;

int main() 
{
    // Nhập chuỗi từ người dùng
    string chuoi;
    cout << "Nhập các từ cách nhau bởi dấu cách: ";
    getline(cin, chuoi); // Nhập cả dòng văn bản từ người dùng (có thể chứa dấu cách)

    // Tạo một map để lưu từ điển
    map<string, int> tu_dien; // <từ, số lần xuất hiện>

    // Tách các từ trong chuỗi
    stringstream ss(chuoi); // Sử dụng stringstream để tách từng từ
    string tu; // Biến lưu từng từ

    // Duyệt qua từng từ và đếm số lần xuất hiện
    while (ss >> tu)  // Đọc từng từ vào biến tu cho đến hết chuỗi
    {
        tu_dien[tu]++; // Tăng số lần xuất hiện của từ đó lên 1
    }

    // In từ điển
    cout << "Từ điển từ danh sách là: " << endl; // In ra từ điển
    for (auto const &pair : tu_dien) // Duyệt qua từng cặp key-value trong map
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
