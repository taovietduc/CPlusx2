// VIẾT BẰNG C++
// Bài 113: Tạo hàm tính tổng các số nguyên tố trong khoảng cho trước.

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) 
{
    /*
    Kiểm tra một số có phải là số nguyên tố hay không.

    Parameters:
    n (int): Số cần kiểm tra.

    Returns:
    bool: True nếu là số nguyên tố, False nếu không.
    */
    if (n < 2) return false; // 0, 1 không phải là số nguyên tố
    for (int i = 2; i <= sqrt(n); i++)  // Duyệt từ 2 đến căn bậc 2 của n
    {
        if (n % i == 0)  // Nếu n chia hết cho i thì n không phải là số nguyên tố
        {
            return false; 
        }
    }
    return true;
}

int sumPrimesInRange(int start, int end)  
// Tính tổng các số nguyên tố trong khoảng [start, end]
{ 
    /*
    Tính tổng các số nguyên tố trong khoảng [start, end].

    Parameters:
    start (int): Điểm bắt đầu của khoảng.
    end (int): Điểm kết thúc của khoảng.

    Returns:
    int: Tổng các số nguyên tố trong khoảng.
    */
    int total = 0; // Khởi tạo biến tổng
    for (int num = start; num <= end; num++)  // Duyệt từ start đến end
    {
        if (isPrime(num))  // Nếu num là số nguyên tố
        {
            total += num; // Cộng num vào tổng
        }
    }
    return total;
}

int main() 
{
    int start = 10; // Điểm bắt đầu của khoảng
    int end = 30; // Điểm kết thúc của khoảng
    cout << "Tổng các số nguyên tố trong khoảng [" << start << ", " << end << "] là: " << sumPrimesInRange(start, end) << endl;
    return 0;
}
