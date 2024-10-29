// VIẾT BẰNG C++
// Bài 99: Tạo hàm kiểm tra một chuỗi có phải là chuỗi đảo ngược của chuỗi khác hay không.

#include <iostream>
#include <string> // Để sử dụng kiểu dữ liệu string trong C++ 
using namespace std;

// Hàm kiểm tra chuỗi thứ hai có phải là chuỗi đảo ngược của chuỗi thứ nhất không
bool la_chuoi_dao_nguoc(string str1, string str2)  // Truyền vào hai chuỗi cần kiểm tra
{
    if (str1.length() != str2.length())  // Nếu độ dài hai chuỗi không bằng nhau
    {
        return false;  // Nếu độ dài hai chuỗi không bằng nhau, chắc chắn không thể là đảo ngược
    }

    int n = str1.length(); // Lấy độ dài của chuỗi
    for (int i = 0; i < n; i++)  // Duyệt qua từng ký tự của chuỗi
    {
        if (str1[i] != str2[n - 1 - i])  // So sánh ký tự của chuỗi thứ nhất với ký tự của chuỗi thứ hai
        {
            return false;  // Nếu ký tự không khớp, trả về false
        }
    }
    return true;  // Nếu tất cả ký tự khớp, trả về true
}

int main()  // Hàm main
{
    string str1, str2; // Khai báo hai chuỗi cần kiểm tra
    
    cout << "Nhập chuỗi thứ nhất: "; // Nhập chuỗi thứ nhất
    cin >> str1; // Lưu chuỗi vào biến str1
    
    cout << "Nhập chuỗi thứ hai: "; // Nhập chuỗi thứ hai
    cin >> str2; // Lưu chuỗi vào biến str2
    
    if (la_chuoi_dao_nguoc(str1, str2))  // Gọi hàm kiểm tra chuỗi đảo ngược
    {
        cout << "Chuỗi thứ hai là chuỗi đảo ngược của chuỗi thứ nhất." << endl;
    } 
    else  // Nếu không phải chuỗi đảo ngược
    {
        cout << "Chuỗi thứ hai không phải là chuỗi đảo ngược của chuỗi thứ nhất." << endl;
    }

    return 0; // Kết thúc chương trình
}
