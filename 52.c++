// VIẾT BẰNG C++
// BÀI 52:Tạo chuỗi từ các phần tử trong danh sách.
// CÁCH 1: Sử dụng mảng tĩnh
#include <iostream>
#include <sstream> // Để sử dụng stringstream
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;
    cin.ignore(); // Để loại bỏ ký tự newline sau khi nhập số

    // Tạo mảng tĩnh để lưu danh sách các phần tử
    string danh_sach[100]; // Giả sử tối đa 100 phần tử
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử
    {
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        getline(cin, danh_sach[i]); // Nhập từng phần tử
    }

    // Tạo chuỗi từ danh sách
    string chuoi;
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử
    {
        chuoi += danh_sach[i] + " "; // Thêm từng phần tử và khoảng trắng
    }

    // In chuỗi
    cout << "Chuỗi được tạo từ danh sách là: " << chuoi << endl;

    return 0;
}

// CÁCH 2: Sử dụng vector
#include <iostream>
#include <vector> // Để sử dụng vector
#include <sstream> // Để sử dụng stringstream
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;
    cin.ignore(); // Để loại bỏ ký tự newline sau khi nhập số

    // Nhập các phần tử vào danh sách
    vector<string> danh_sach;
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử để nhập vào danh sách
    {
        string phan_tu;
        cout << "Nhập phần tử thứ " << i + 1 << ": "; // Nhập phần tử
        getline(cin, phan_tu); // Nhập phần tử vào chuỗi, getline để nhập cả dấu cách
        danh_sach.push_back(phan_tu); // Thêm phần tử vào danh sách
    }

    // Tạo chuỗi từ danh sách
    string chuoi; // Chuỗi kết quả cần tạo từ danh sách
    for (const string& s : danh_sach)  // Duyệt qua từng phần tử trong danh sách
    {
        chuoi += s + " "; // Thêm từng phần tử và khoảng trắng
    }

    // In chuỗi
    cout << "Chuỗi được tạo từ danh sách là: " << chuoi << endl;

    return 0;
}
