// VIẾT BẰNG C++
// Tính tổng các giá trị trong từ điển: Nhập một từ điển với các giá trị số và tính tổng của chúng.

#include <iostream>
#include <map> // Thư viện map
using namespace std;

int main() 
{
    // Tạo một map để lưu từ điển với các giá trị là số
    map<string, int> tu_dien; // Khóa là string, giá trị là số

    // Nhập số lượng phần tử trong từ điển ban đầu
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng khóa và giá trị
    for (int i = 0; i < n; i++) //  Duyệt qua từng phần tử trong map
    {
        string khoa; // Khóa của từng phần tử
        int gia_tri; // Giá trị của từng phần tử
        cout << "Nhập khóa: ";
        cin >> khoa; // Nhập khóa
        cout << "Nhập giá trị (số): ";
        cin >> gia_tri; // Nhập giá trị
        tu_dien[khoa] = gia_tri; // Thêm phần tử vào map
    }

    // Tính tổng các giá trị trong từ điển
    int tong = 0;
    for (const auto &pair : tu_dien) // Duyệt qua từng phần tử trong map
    {
        tong += pair.second; // Cộng giá trị vào tổng
    }

    // In tổng các giá trị
    cout << "Tổng các giá trị trong từ điển là: " << tong << endl;

    return 0;
}
