// VIẾT BẰNG C++
// Kiểm tra số nguyên tố: Nhập một số và kiểm tra xem nó có phải là số nguyên tố không.

#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiem_tra_nguyen_to(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Nhập số từ bàn phím
    int n;
    cout << "Nhập một số: ";
    cin >> n;

    // Kiểm tra và in kết quả
    if (kiem_tra_nguyen_to(n)) {
        cout << n << " là số nguyên tố." << endl;
    } else {
        cout << n << " không phải là số nguyên tố." << endl;
    }

    return 0;
}
