// Viết Bằng C++
// Bài 196: Kiểm tra xem một số có thể được viết dưới dạng tổng của hai số nguyên tố hay không.

#include <iostream>
#include <vector> 
using namespace std; 

bool isPrime(int n)  // kiểm tra số nguyên tố 
{
    if (n < 2) return false; // 0, 1 không phải số nguyên tố 
    for (int i = 2; i * i <= n; ++i)  // kiểm tra từ 2 đến căn bậc 2 của n
    { 
        if (n % i == 0) return false; // nếu chia hết thì không phải số nguyên tố
    } 
    return true;
}

bool canBeSumOfTwoPrimes(int n) 
// kiểm tra số có thể viết dưới dạng tổng của 2 số nguyên tố hay không
{
    for (int i = 2; i <= n / 2; ++i)  // kiểm tra từ 2 đến n/2
    {
        if (isPrime(i) && isPrime(n - i)) return true; 
        // nếu i và n-i là số nguyên tố thì trả về true
    }
    return false;
}

int main()  
{
    int number = 34; // số cần kiểm tra  
    cout << "Can " << number << " be written as sum of two primes? " << (canBeSumOfTwoPrimes(number) ? "Yes" : "No") << endl;
    return 0;
}

// Output: Can 34 be written as sum of two primes? Yes