// VIẾT BẰNG C++
// Xóa phần tử khỏi từ điển: Nhập một từ điển và xóa một phần tử khỏi từ điển.

#include <iostream>
#include <map> // Thư viện map
#include <string> // Thư viện string
using namespace std;

int main() 
{
    // Tạo một map để lưu từ điển
    map<string, string> tu_dien; // Khóa và giá trị đều là string

    // Nhập số lượng phần tử trong từ điển ban đầu
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng khóa và giá trị
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử trong map
    { 
        string khoa, gia_tri; // Khóa và giá trị của từng phần tử
        cout << "Nhập khóa: ";
        cin >> khoa; // Nhập khóa
        cout << "Nhập giá trị: ";
        cin >> gia_tri; // Nhập giá trị
        tu_dien[khoa] = gia_tri;
    }

    // Nhập khóa của phần tử cần xóa
    string khoa_can_xoa; // Khóa cần xóa
    cout << "Nhập khóa cần xóa: ";
    cin >> khoa_can_xoa;

    // Xóa phần tử theo khóa
    if (tu_dien.erase(khoa_can_xoa)) // Xóa phần tử có khóa 'khoa_can_xoa'
    { 
        cout << "Đã xóa phần tử có khóa '" << khoa_can_xoa << "'." << endl;
    } 
    else // Không tìm thấy khóa 'khoa_can_xoa'
    { 
        cout << "Không tìm thấy khóa '" << khoa_can_xoa << "' trong từ điển." << endl;
    }

    // In từ điển sau khi xóa
    cout << "Từ điển sau khi xóa là: " << endl;
    for (const auto &pair : tu_dien) // Duyệt qua từng phần tử trong map
    { 
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
