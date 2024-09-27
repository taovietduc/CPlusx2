// VIẾT BẰNG C++
// Thêm phần tử vào từ điển: Nhập một từ điển và thêm một phần tử mới vào từ điển.

#include <iostream>
#include <map> // Thư viện map
#include <string> // Thư viện string
using namespace std;

int main() 
{
    // Tạo một map để lưu từ điển
    map<string, string> tu_dien;

    // Nhập số lượng phần tử trong từ điển ban đầu
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng khóa và giá trị
    for (int i = 0; i < n; i++)
    {
        string khoa, gia_tri;
        cout << "Nhập khóa: ";
        cin >> khoa;
        cout << "Nhập giá trị: ";
        cin >> gia_tri;
        tu_dien[khoa] = gia_tri; // Thêm vào từ điển
    }

    // Nhập khóa và giá trị mới
    string khoa_moi, gia_tri_moi;
    cout << "Nhập khóa mới: ";
    cin >> khoa_moi;
    cout << "Nhập giá trị mới: ";
    cin >> gia_tri_moi;

    // Thêm phần tử mới vào từ điển
    tu_dien[khoa_moi] = gia_tri_moi; // Thêm vào từ điển

    // In từ điển sau khi thêm phần tử mới
    cout << "Từ điển sau khi thêm phần tử mới là: " << endl;
    for (auto const &pair : tu_dien) // Duyệt qua từng phần tử trong map
    {
        cout << pair.first << ": " << pair.second << endl; // In ra khóa và giá trị
    }

    return 0;
}
