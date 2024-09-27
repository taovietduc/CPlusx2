// VIẾT BẰNG C++
// Kiểm tra chuỗi đối xứng: Nhập một chuỗi và kiểm tra xem nó có phải là chuỗi đối xứng không.

#include <iostream>
#include <string> // Thư viện này cho phép sử dụng kiểu dữ liệu string
using namespace std;

int main() 
{
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi); // Sử dụng getline để nhập chuỗi có chứa khoảng trắng

    // Kiểm tra chuỗi đối xứng
    
    bool doi_xung = true; // Giả sử chuỗi đối xứng
    int n = chuoi.length(); // Độ dài của chuỗi
    for (int i = 0; i < n / 2; i++) // Duyệt từ đầu chuỗi đến giữa chuỗi
    {
        if (chuoi[i] != chuoi[n - 1 - i]) // So sánh ký tự đầu với ký tự cuối, ký tự thứ hai với ký tự thứ n-1, ...
        {
            doi_xung = false; // Nếu khác nhau thì không phải chuỗi đối xứng
            break;
        }
    }

    if (doi_xung) 
    {
        cout << "Chuỗi này là chuỗi đối xứng." << endl;
    } else 
    {
        cout << "Chuỗi này không phải là chuỗi đối xứng." << endl;
    }

    return 0;
}
