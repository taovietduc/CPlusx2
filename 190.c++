// Viết Bằng C++
// Bài 190: Viết hàm tìm số tam giác nhỏ nhất lớn hơn một số cho trước.

#include <iostream>
using namespace std;

int smallestTriangularNumberGreaterThan(int n) { // hàm tìm số tam giác nhỏ nhất lớn hơn một số cho trước
    int t = 0, i = 1; // khởi tạo biến t bằng 0 và biến i bằng 1
    while (t <= n) {    // vòng lặp while với điều kiện t <= n
        t += i;     // cộng i vào t
        ++i;    // tăng i lên 1
    }
    return t;  // trả về số tam giác nhỏ nhất lớn hơn n
}

int main() { 
    int number = 10; // số cần tìm số tam giác nhỏ nhất lớn hơn
    cout << "Smallest triangular number greater than " << number << " is " << smallestTriangularNumberGreaterThan(number) << endl;
    return 0;
}
