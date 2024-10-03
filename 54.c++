// VIẾT BẰNG C++
// Bài 54: Kiểm tra chuỗi có chứa ký tự đặc biệt không.

#include <iostream>
#include <string> // Để sử dụng kiểu dữ liệu string
using namespace std;

// Hàm kiểm tra chuỗi có chứa ký tự đặc biệt hay không
bool kiemTraKyTuDacBiet(const string &chuoi) 
{
    for (char c : chuoi)  // Duyệt từng ký tự trong chuỗi sử dụng vòng lặp for-each
    {
        if (!isalnum(c))  // Hàm isalnum kiểm tra ký tự có phải chữ hoặc số không
        { // Kiểm tra nếu không phải chữ hoặc số
            return true;   // Chuỗi có chứa ký tự đặc biệt
        }
    }
    return false; // Không có ký tự đặc biệt
}

int main() 
{
    // Nhập chuỗi từ bàn phím
    string chuoi; // Khai báo chuỗi để lưu trữ chuỗi nhập từ bàn phím
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi); // Hàm getline để nhập chuỗi có thể chứa khoảng trắng

    // Kiểm tra và in kết quả
    if (kiemTraKyTuDacBiet(chuoi)) // Gọi hàm kiemTraKyTuDacBiet để kiểm tra chuỗi có chứa ký tự đặc biệt không
    {
        cout << "Chuỗi có chứa ký tự đặc biệt." << endl;
    } 
    else  // Ngược lại không chứa ký tự đặc biệt 
    {
        cout << "Chuỗi không chứa ký tự đặc biệt." << endl;
    }

    return 0;
}
