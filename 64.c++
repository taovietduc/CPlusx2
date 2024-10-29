// VIẾT BẰNG C++
// Bài 64: Tạo hàm đảo ngược chuỗi.

#include <iostream>
#include <string> // Để sử dụng kiểu string
using namespace std;

string dao_nguoc_chuoi(string chuoi)  // Hàm đảo ngược chuỗi nhận vào một chuỗi
{
    int n = chuoi.length(); // Độ dài của chuỗi ban đầu (số ký tự)
    // Đảo ngược chuỗi bằng cách hoán đổi các ký tự đầu và cuối
    for (int i = 0; i < n / 2; i++)  // Chỉ cần duyệt đến n/2 vì đã hoán đổi 2 ký tự
    {
        swap(chuoi[i], chuoi[n - 1 - i]); // Hoán đổi 2 ký tự
    }
    return chuoi;
}

int main() 
{
    string chuoi; // Khai báo chuỗi
    cout << "Nhập chuỗi cần đảo ngược: "; // Nhập chuỗi
    cin >> chuoi;

    // Đảo ngược chuỗi và in ra kết quả 
    string chuoi_dao_nguoc = dao_nguoc_chuoi(chuoi); // Gọi hàm đảo ngược chuỗi
    cout << "Chuỗi sau khi đảo ngược: " << chuoi_dao_nguoc << endl; // In ra kết quả

    return 0;
}
