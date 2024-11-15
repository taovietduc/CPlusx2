// VIẾT BẰNG C++
// Bài 150: Viết hàm xác định xem một số có phải là số Catalan không.

#include <iostream>
using namespace std;

// Hàm kiểm tra số Catalan
bool isCatalan(int n) 
{
    // Nếu n <= 0, không phải số Catalan
    if (n <= 0)
        return false;
        
    // Tính số Catalan thứ i cho đến khi vượt quá n
    long long catalan = 1; // Số Catalan thứ 0
    int i = 0; // Chỉ số hiện tại
    
    while (catalan <= n) // Tính số Catalan thứ i cho đến khi vượt quá n
    {
        if (catalan == n) // Nếu tìm thấy số Catalan bằng n
            return true;
        // Tính số Catalan tiếp theo theo công thức: C(i+1) = C(i) * 2*(2i+1)/(i+2)
        i++;
        catalan = catalan * 2 * (2*i - 1) / (i + 1);
    }
    
    return false; // Không tìm thấy số Catalan bằng n
}

int main() 
{
    int n; // Số cần kiểm tra
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    
    if (isCatalan(n)) // Kiểm tra số Catalan        
        cout << n << " la so Catalan" << endl;  // In ra số Catalan
    else // Nếu không phải số Catalan   
        cout << n << " khong phai la so Catalan" << endl; // In ra không phải số Catalan    
        
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isCatalan(n):
   - Input: số nguyên n cần kiểm tra
   - Kiểm tra n <= 0: không phải số Catalan
   - Dùng vòng lặp để tính các số Catalan cho đến khi:
     + Tìm thấy số Catalan bằng n -> return true
     + Số Catalan vượt quá n -> return false
   - Công thức tính số Catalan tiếp theo: C(i+1) = C(i) * 2*(2i+1)/(i+2)
   - Dùng kiểu long long để tránh tràn số với các số Catalan lớn

2. Hàm main():
   - Nhập số n cần kiểm tra
   - Gọi hàm isCatalan() để kiểm tra
   - In kết quả

Các số Catalan đầu tiên: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862,...
*/



