// VIẾT BẰNG C++
// Bài 63: Tạo hàm kiểm tra chuỗi đối xứng.

#include <iostream>
#include <string> // Thư viện string
using namespace std;

bool kiem_tra_doi_xung(string chuoi) // Hàm kiểm tra chuỗi đối xứng có 1 tham số chuỗi kiểu string và trả về kiểu bool 
{
    int len = chuoi.length(); // Lấy độ dài chuỗi 
    // Duyệt chuỗi từ đầu và cuối để kiểm tra đối xứng
    for (int i = 0; i < len / 2; i++)  // Duyệt từ 0 đến độ dài chuỗi chia 2
    {
        if (chuoi[i] != chuoi[len - 1 - i])  // Nếu 2 ký tự không giống nhau
        {
            return false;   // Trả về false
        } 
    }
    return true; // Trả về true nếu chuỗi đối xứng
}

int main() 
{
    string chuoi;
    cout << "Nhập chuỗi cần kiểm tra: ";
    cin >> chuoi;

    if (kiem_tra_doi_xung(chuoi))  // Gọi hàm kiem_tra_doi_xung và kiểm tra kết quả
    {
        cout << "Chuỗi là đối xứng." << endl; // In ra kết quả
    } 
    else  // Nếu không phải chuỗi đối xứng
    {
        cout << "Chuỗi không phải là đối xứng." << endl; // In ra kết quả
    }

    return 0; // Kết thúc chương trình
}
