// VIẾT BẰNG C++
// In các ký tự riêng biệt của chuỗi: Nhập một chuỗi và in các ký tự riêng biệt.

#include <iostream>
#include <string>
#include <set> // Thư viện này chứa lớp set
using namespace std;

int main() 
{
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để nhập chuỗi có chứa khoảng trắng

    // Tạo một tập hợp để lưu các ký tự riêng biệt
    set<char> ky_tu_rieng_biet; // Lớp set giúp lưu trữ các phần tử không trùng lặp

    // Thêm các ký tự vào tập hợp
    for (char ky_tu : chuoi) // Duyệt qua từng ký tự trong chuỗi
    {
        ky_tu_rieng_biet.insert(ky_tu); // Nếu ký tự đã tồn tại thì không thêm vào
    }

    // In các ký tự riêng biệt
    cout << "Các ký tự riêng biệt trong chuỗi là:" << endl;
    for (char ky_tu : ky_tu_rieng_biet) // Duyệt qua từng ký tự trong tập hợp
    {
        cout << ky_tu << " ";
    }
    cout << endl;

    return 0;
}
