// VIẾT BẰNG C++
// Bài 133: Tạo hàm chuyển đổi từ số La Mã sang số thập phân.

#include <iostream>
#include <unordered_map> // Dùng để lưu giá trị của các ký tự La Mã
#include <string> // Dùng để sử dụng chuỗi string 
using namespace std;

int romanToDecimal(const string& roman) // Hàm chuyển đổi từ số La Mã sang số thập phân
{
    unordered_map<char, int> romanValues =  // Lưu giá trị của các ký tự La Mã
    {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, // I = 1, V = 5, X = 10, L = 50 
        {'C', 100}, {'D', 500}, {'M', 1000} // C = 100, D = 500, M = 1000 
    };
    
    int total = 0; // Biến lưu giá trị số thập phân
    int prevValue = 0; // Biến lưu giá trị của ký tự trước đó
    
    // Duyệt từng ký tự trong chuỗi từ phải sang trái
    for (auto it = roman.rbegin(); it != roman.rend(); ++it)  
    // rbegin() trả về con trỏ đến phần tử cuối cùng của chuỗi, rend() trả về con trỏ đến phần tử đầu tiên của chuỗi
    {
        int value = romanValues[*it]; // Lấy giá trị của ký tự hiện tại
        
        // Nếu giá trị hiện tại nhỏ hơn giá trị trước đó, trừ nó đi
        if (value < prevValue) // Ví dụ: IV = 4, IX = 9, XL = 40, XC = 90, CD = 400, CM = 900
            total -= value; 
    // Ví dụ: IV = 5 - 1 = 4, IX = 10 - 1 = 9, XL = 50 - 10 = 40, XC = 100 - 10 = 90, CD = 500 - 100 = 400, CM = 1000 - 100 = 900
        else
            total += value; // Ngược lại, cộng giá trị hiện tại vào tổng
        
        // Cập nhật giá trị trước đó
        prevValue = value;
    }
    
    return total;
}

int main() 
{
    string romanNumber = "MCMXCIV"; // Số La Mã cần chuyển đổi sang số thập phân
    cout << "Số thập phân của " << romanNumber << " là: " << romanToDecimal(romanNumber) << endl; // In ra m
    return 0; // Kết thúc chương trình
}

// Kết quả: Số thập phân của MCMXCIV là: 1994
// Ví dụ: M = 1000, CM = 900, XC = 90, IV = 4
// M + CM + XC + IV = 1000 + 900 + 90 + 4 = 1994


