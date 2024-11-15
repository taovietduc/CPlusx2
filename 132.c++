// VIẾT BẰNG C++
// Bài 132: Tạo hàm đếm số lượng số nguyên tố trong danh sách.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng kiểu dữ liệu vector
#include <cmath> // Thư viện cmath để sử dụng hàm sqrt để tính căn bậc 2

using namespace std;

bool isPrime(int n)  // Hàm kiểm tra số nguyên tố
{
    if (n <= 1)  // Nếu n nhỏ hơn hoặc bằng 1 thì không phải số nguyên tố
        return false;
    for (int i = 2; i <= sqrt(n); i++) // Duyệt từ 2 đến căn bậc 2 của n
    {
        if (n % i == 0) return false;
        // Nếu n chia hết cho i thì không phải số nguyên tố
    }
    return true;
}

int countPrimesInList(const vector<int>& lst) 
// Hàm đếm số lượng số nguyên tố trong danh sách
{
    int count = 0; // Khởi tạo biến đếm số lượng số nguyên tố
    for (int num : lst)  // Duyệt qua từng phần tử trong danh sách
    {
        if (isPrime(num)) // Nếu phần tử đó là số nguyên tố thì tăng biến đếm lên 1 
        {
            count++; // Tăng biến đếm lên 1 
        }
    }
    return count; // Trả về số lượng số nguyên tố
}

int main() 
{
    vector<int> numbers = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // Khởi tạo danh sách số nguyên
    cout << "Số lượng số nguyên tố trong danh sách là: " << countPrimesInList(numbers) << endl; 
    // In ra số lượng số nguyên tố trong danh sách
    return 0;
}

// Kết quả là 4 vì trong danh sách có 4 số nguyên tố là 2, 3, 5, 7
// Số lượng số nguyên tố trong danh sách là: 4
