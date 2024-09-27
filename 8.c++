// VIẾT BẰNG C
// Tính chu vi, diện tích hình tròn: Nhập bán kính và in ra chu vi, diện tích hình tròn.

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    // Khai báo biến
    float r;

    // Nhập bán kính từ bàn phím
    cout << "Nhập bán kính của hình tròn: ";
    cin >> r;

    // Kiểm tra điều kiện bán kính > 0
    if (r > 0) {
        // Tính chu vi hình tròn
        float C = 2 * M_PI * r;
        // Tính diện tích hình tròn
        float S = M_PI * r * r;
        // In kết quả
        cout << "Chu vi của hình tròn là: " << C << endl;
        cout << "Diện tích của hình tròn là: " << S << endl;
    } else {
        cout << "Bán kính phải lớn hơn 0." << endl;
    }

    return 0;
}
