// VIẾT BẰNG C++
// Bài 80: Tạo hàm kiểm tra một số có phải là số Armstrong không.

#include <iostream>
#include <cmath> // Thư viện hỗ trợ hàm pow() trong C++
using namespace std;

// Hàm kiểm tra số Armstrong
bool kiem_tra_so_armstrong(int n) // kiểm tra số n có phải là số Armstrong không
{
    int so_goc = n, tong = 0, so_chu_so = 0; // Khởi tạo biến số gốc, tổng, số chữ số

    // Đếm số chữ số
    int temp = n;
    while (temp > 0) // đếm số chữ số của số n
    {
        temp /= 10; // chia cho 10 để lấy số chữ số cuối cùng
        so_chu_so++; // tăng số chữ số lên 1
    }

    // Tính tổng các chữ số lũy thừa
    temp = n;
    while (temp > 0) // tính tổng các chữ số lũy thừa của số n
    {
        int chu_so = temp % 10; // lấy số cuối cùng của số n
        tong += pow(chu_so, so_chu_so); // cộng số cuối cùng lũy thừa số chữ số vào tổng
        temp /= 10; // chia cho 10 để lấy số cuối cùng tiếp theo
    }

    // Kiểm tra nếu tổng bằng chính số đó
    return tong == so_goc; // trả về true nếu tổng bằng số gốc, ngược lại trả về false
}

int main() 
{
    int n;
    cout << "Nhập số cần kiểm tra: ";
    cin >> n;

    if (kiem_tra_so_armstrong(n))  // kiểm tra số n có phải là số Armstrong không
    {
        cout << n << " là số Armstrong." << endl; // in kết quả
    } 
    else  // nếu không phải số Armstrong
    {
        cout << n << " không phải là số Armstrong." << endl; // in kết quả
    }

    return 0;   // Kết thúc chương trình
}
