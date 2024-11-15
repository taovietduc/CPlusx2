// VIẾT BẰNG C++
// Bài 146: Viết hàm tính tích của tất cả các số nguyên tố nhỏ hơn một số cho trước.

#include <iostream>
#include <vector> // Thư viện vector 
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n)  // Hàm kiểm tra số nguyên tố 
{
    if (n < 2) return false;  // Nếu n < 2 thì không phải số nguyên tố
    for (int i = 2; i * i <= n; i++)  // Duyệt từ 2 đến căn bậc 2 của n 
    {
        if (n % i == 0) return false; // Nếu n chia hết cho số nào thì không phải số nguyên tố
    }
    return true;  // Nếu không chia hết cho số nào thì là số nguyên tố
}

// Hàm tính tích các số nguyên tố nhỏ hơn n
long long productOfPrimes(int n) 
{
    long long result = 1;  // Khởi tạo biến result = 1 để lưu tích  
    
    // Duyệt từ 2 đến n-1
    for (int i = 2; i < n; i++) // Duyệt từ 2 đến n-1 
    {
        // Nếu i là số nguyên tố thì nhân vào kết quả
        if (isPrime(i)) // Nếu i là số nguyên tố 
        {
            result *= i; // Nhân vào kết quả
        }
    }
    
    return result; // Trả về kết quả
}

int main() 
{
    int n;  // Khai báo biến n 
    cout << "Nhap so n: ";
    cin >> n;
    
    long long result = productOfPrimes(n); // Gọi hàm tính tích các số nguyên tố nhỏ hơn n 
    
    cout << "Tich cac so nguyen to nho hon " << n << " la: " << result << endl; 
    // In ra kết quả tích các số nguyên tố nhỏ hơn n    
    
    // In ra các số nguyên tố nhỏ hơn n
    cout << "Cac so nguyen to nho hon " << n << " la: "; // In ra các số nguyên tố nhỏ hơn n
    for (int i = 2; i < n; i++) // Duyệt từ 2 đến n-1   
    {
        if (isPrime(i)) // Nếu i là số nguyên tố  
        {
            cout << i << " "; // In ra i
        }
    }
    cout << endl; // In xuống dòng      
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isPrime(n):
   - Kiểm tra một số có phải số nguyên tố hay không
   - Nếu n < 2 thì không phải số nguyên tố
   - Kiểm tra từ 2 đến căn bậc 2 của n, nếu n chia hết cho số nào thì không phải số nguyên tố
   
2. Hàm productOfPrimes(n):
   - Khởi tạo biến result = 1 để lưu tích
   - Duyệt từ 2 đến n-1
   - Nếu số i là số nguyên tố (isPrime(i) = true) thì nhân i vào result
   - Trả về tích các số nguyên tố

3. Hàm main():
   - Nhập số n từ bàn phím
   - Gọi hàm productOfPrimes(n) để tính tích
   - In ra kết quả tích các số nguyên tố
   - In ra danh sách các số nguyên tố nhỏ hơn n

Ví dụ:
- Input: n = 10
- Các số nguyên tố nhỏ hơn 10 là: 2, 3, 5, 7
- Output: Tích = 2 * 3 * 5 * 7 = 210
*/
