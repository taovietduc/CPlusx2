// VIẾT BẰNG C++
// In từ điển: Nhập một từ điển và in ra các khóa và giá trị của từ điển.

#include <iostream>
#include <map> // Thư viện map
#include <string> // Thư viện string
using namespace std;

int main() 
{
    // Tạo một map để lưu từ điển
    map<string, string> tu_dien; // Khóa và giá trị đều là string

    // Nhập số lượng phần tử trong từ điển
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng khóa và giá trị
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        string khoa, gia_tri; // Khóa và giá trị
        cout << "Nhập khóa: ";
        cin >> khoa;
        cout << "Nhập giá trị: ";
        cin >> gia_tri;
        tu_dien[khoa] = gia_tri; // Thêm vào từ điển
    }

    // In các khóa và giá trị trong từ điển
    cout << "Các khóa và giá trị trong từ điển là: " << endl;
    for (auto const &pair : tu_dien) // Duyệt qua từng phần tử trong map
    {
        cout << pair.first << ": " << pair.second << endl; // In ra khóa và giá trị
    }
    return 0;
}
