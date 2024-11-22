// VIẾT BẰNG C++
// Bài 154: Tạo hàm tìm số nguyên tố lớn nhất là bội số của một số cho trước.

#include <iostream>
#include <cmath> // Thư viện cmath để sử dụng hàm sqrt  
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) 
{
    if (n < 2) return false; // Nếu n < 2 thì không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) return false; // Nếu n chia hết cho bất kỳ số nào -> không phải số nguyên tố
    }
    return true; // Ngược lại -> là số nguyên tố
}

// Hàm tìm số nguyên tố lớn nhất là bội của n trong khoảng [1, limit]
int findLargestPrimeMultiple(int n, int limit = 10000) 
{
    // Duyệt từ lớn đến nhỏ để tìm số nguyên tố lớn nhất
    for (int i = limit; i >= n; i--) 
    {
        // Kiểm tra nếu i là bội của n và là số nguyên tố
        if (i % n == 0 && isPrime(i)) 
        {
            return i; // Trả về i nếu thỏa điều kiện
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

int main() 
{
    int n;
    cout << "Nhap so n: "; // In ra màn hình
    cin >> n; // Nhập số n
    
    int result = findLargestPrimeMultiple(n); // Gọi hàm tìm số nguyên tố lớn nhất là bội của n
    if (result != -1) 
    {
        cout << "So nguyen to lon nhat la boi cua " << n << " la: " << result << endl;
    } 
    else // Nếu không tìm thấy số thỏa mãn
    {
        cout << "Khong tim thay so thoa man!" << endl; // In ra màn hình
    }
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isPrime(n):
   - Kiểm tra một số có phải là số nguyên tố hay không
   - Duyệt từ 2 đến căn bậc 2 của n để kiểm tra ước số
   - Độ phức tạp: O(sqrt(n))

2. Hàm findLargestPrimeMultiple(n, limit):
   - Tìm số nguyên tố lớn nhất là bội của n trong khoảng [1, limit]
   - Tham số limit mặc định là 10000 để giới hạn phạm vi tìm kiếm
   - Duyệt từ lớn đến nhỏ để tìm số đầu tiên thỏa mãn:
     + Là bội của n (chia hết cho n)
     + Là số nguyên tố
   - Trả về -1 nếu không tìm thấy số thỏa mãn
   - Độ phức tạp: O(limit * sqrt(limit))

3. Hàm main():
   - Nhập số n từ người dùng
   - Gọi hàm findLargestPrimeMultiple để tìm kết quả
   - In kết quả ra màn hình

4. Ví dụ:
   - Với n = 6:
     + Các bội số của 6: 6, 12, 18, 24, 30, ...
     + Trong đó 23 là số nguyên tố lớn nhất là bội của 6
   - Với n = 4:
     + Các bội số của 4: 4, 8, 12, 16, 20, ...
     + Trong đó 17 là số nguyên tố lớn nhất là bội của 4

5. Độ phức tạp tổng quát:
   - Thời gian: O(limit * sqrt(limit))
   - Không gian: O(1)
*/

