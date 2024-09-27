// VIẾT BẰNG C++
// Đảo ngược chuỗi: Nhập một chuỗi và in ra chuỗi đảo ngược.

#include <iostream>
#include <string>
#include <algorithm>  // Thư viện cho hàm reverse
using namespace std;

int main() {
    // Nhập chuỗi từ bàn phím
    string chuoi;
    cout << "Nhập một chuỗi: ";
    getline(cin, chuoi);

    // Đảo ngược chuỗi
    reverse(chuoi.begin(), chuoi.end()); // Hàm reverse để đảo ngược chuỗi

    // In chuỗi đảo ngược
    cout << "Chuỗi đảo ngược là: " << chuoi << endl;

    return 0;
}
