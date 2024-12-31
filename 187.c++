// Viết Bằng C++
// Bài 187: Tạo hàm tìm số lớn nhất có thể tạo bằng cách sắp xếp lại các chữ số của một số.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int largestNumberFromDigits(int number) { 
// hàm tìm số lớn nhất có thể tạo bằng cách sắp xếp lại các chữ số của một số
    string digits = to_string(number); // chuyển số thành chuỗi ký tự
    sort(digits.rbegin(), digits.rend());  // sắp xếp chuỗi ký tự theo thứ tự giảm dần
    return stoi(digits); // chuyển chuỗi ký tự thành số
}

int main() { 
    int number = 31245; // số cần tìm số lớn nhất có thể tạo bằng cách sắp xếp lại các chữ số
    cout << "Largest number from digits: " << largestNumberFromDigits(number) << endl;
    return 0;
}

// Kết qua:
// Largest number from digits: 54321.