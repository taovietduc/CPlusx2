// VIẾT BẰNG C++
// Tính giai thừa của một số: Nhập một số và tính giai thừa của nó.

#include <iostream>
using namespace std;

int main() {
    // Khai báo biến số nguyên
    int n;
    unsigned long long giai_thua = 1;

    // Nhập một số từ Bàn phím
    cout << "Nhập một số: ";
    cin >> n;

    // Tính giai thừa
    if (n < 0) {
        cout << "Không có giai thừa cho số âm." << endl;
    } else if (n == 0 || n == 1) {
        cout << "Giai thừa của " << n << " là 1." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            giai_thua *= i;
        }
        cout << "Giai thừa của " << n << " là " << giai_thua << endl;
    }

    return 0;
}





