// VIẾT BẰNG C++
// Bài 134: Tạo hàm chuyển đổi từ số thập phân sang số La Mã.

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

string decimalToRoman(int num)  // chuyển đổi số thập phân sang số la mã 
{
    vector<pair<int, string>> romanNumerals = 
    // tạo mảng 2 chiều lưu giá trị số la mã và giá trị tương ứng
    {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, // 1000, 900, 500, 400
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, // 100, 90, 50, 40 
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}// 10, 9, 5, 4, 1
    };
    
    string roman = ""; // khởi tạo chuỗi rỗng
    for (const auto& [value, symbol] : romanNumerals) // duyệt qua mảng 2 chiều
    {
        while (num >= value)  // nếu số thập phân lớn hơn giá trị số la mã
        {
            roman += symbol; // thêm giá trị số la mã vào chuỗi
            num -= value; // giảm giá trị số thập phân đi giá trị số la mã
        }
    }
    return roman; // trả về chuỗi số la mã
}

int main() 
{ 
    int decimalNumber = 1994; // khởi tạo số thập phân
    cout << "Số La Mã của " << decimalNumber << " là: " << decimalToRoman(decimalNumber) << endl;
    return 0;
}

// kết quả: Số La Mã của 1994 là: MCMXCIV