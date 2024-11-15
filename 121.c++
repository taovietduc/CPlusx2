// VIẾT BẰNG C++
// Bài 121: Tạo hàm tính tổng các số hoàn hảo trong một khoảng cho trước.

#include <iostream>
#include <cmath> // thư viện này chứa hàm sqrt

using namespace std;

bool isPerfect(int num)
{
    if (num < 2)
        return false;                    // 1 không phải số hoàn hảo vì tổng các ước của nó không bằng chính nó
    int sum_of_divisors = 1;             // 1 luôn là ước của mọi số nguyên dương
    for (int i = 2; i <= sqrt(num); i++) // duyệt từ 2 đến căn bậc 2 của num
    {
        if (num % i == 0) // nếu i là ước của num thì cũng chia hết cho num/i
        {
            sum_of_divisors += i; // cộng i vào tổng các ước
            if (i != num / i)     // nếu i khác num/i thì còn phải cộng thêm num/i vào tổng các ước
            {
                sum_of_divisors += num / i; // cộng num/i vào tổng các ước của num
            }
        }
    }
    return sum_of_divisors == num; // nếu tổng các ước của num bằng chính nó thì num là số hoàn hảo
}

int sumOfPerfectNumbers(int start, int end) // hàm tính tổng các số hoàn hảo trong khoảng từ start đến end
{
    int total = 0;
    for (int num = start; num <= end; num++) // duyệt qua tất cả các số trong khoảng
    {
        if (isPerfect(num)) // nếu num là số hoàn hảo thì cộng vào tổng
        {
            total += num; // cộng num vào tổng
        }
    }
    return total; // trả về tổng các số hoàn hảo trong khoảng
}

int main() // hàm main để test hàm sumOfPerfectNumbers
{
    int start = 1, end = 10000; // khoảng từ 1 đến 10000
    cout << "Tổng các số hoàn hảo trong khoảng là: " << sumOfPerfectNumbers(start, end) << endl;
    // in ra tổng các số hoàn hảo trong khoảng
    return 0;
}

