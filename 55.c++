// VIẾT BẰNG C++
// Bài 55: Tạo từ điển từ chuỗi.

#include <iostream>
#include <map> // Thư viện map
#include <sstream> // Thư viện stringstream
#include <string> // Thư viện string
using namespace std;

int main() 
{
    // Nhập chuỗi từ bàn phím
    string chuoi;  // Chuỗi cần tạo từ điển từ nó 
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để nhập chuỗi có dấu cách

    // Tách chuỗi thành các từ và đưa vào từ điển
    map<string, int> tu_dien;   // Tạo từ điển từ chuỗi với key là từ, value là số lần xuất hiện
    stringstream ss(chuoi); // Sử dụng stringstream để tách chuỗi
    string tu; // Biến lưu từ tách được từ chuỗi

    while (ss >> tu)  // Sử dụng toán tử >> để đọc từ chuỗi
    { // Đọc từng từ từ chuỗi
        tu_dien[tu]++; // Tăng giá trị nếu từ đã tồn tại, ngược lại thêm từ với giá trị 1
    }

    // In từ điển
    cout << "Từ điển được tạo từ chuỗi:" << endl;
    for (const auto &pair : tu_dien)  // Duyệt từng cặp key-value trong từ điển
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
