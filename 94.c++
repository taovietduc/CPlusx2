// VIẾT BẰNG C++
// Bài 94: Tạo hàm tìm số Fibonacci lớn nhất nhỏ hơn hoặc bằng n.

#include <iostream>
using namespace std;

// Hàm tính số Fibonacci lớn nhất nhỏ hơn hoặc bằng n
int fibonacci_lon_nhat(int n)  // Độ phức tạp O(log(n)) vì mỗi lần lặp số Fibonacci tăng lên gấp đôi
{ 
    if (n < 0) return -1; // Không có số Fibonacci cho n âm
    if (n == 0) return 0; // Số Fibonacci cho n = 0 là 0

    int fib1 = 0, fib2 = 1, fib_next = 1; // Khởi tạo 3 số Fibonacci đầu tiên là 0, 1, 1 (fib1, fib2, fib_next)

    while (fib_next <= n)  // Tìm số Fibonacci lớn nhất nhỏ hơn hoặc bằng n
    { 
        fib1 = fib2; // Gán số Fibonacci thứ 2 cho số Fibonacci thứ 1
        fib2 = fib_next; // Gán số Fibonacci thứ 3 cho số Fibonacci thứ 2
        fib_next = fib1 + fib2; // Tính số Fibonacci tiếp theo
    }

    return fib2; // Trả về số Fibonacci lớn nhất nhỏ hơn hoặc bằng n
}

int main() 
{
    int n; // Khai báo biến n
    cout << "Nhập số n: "; // Xuất thông báo nhập số n
    cin >> n; // Nhập số n

    int fib_max = fibonacci_lon_nhat(n); // Gọi hàm tìm số Fibonacci lớn nhất nhỏ hơn hoặc bằng n
    if (fib_max != -1)
        cout << "Số Fibonacci lớn nhất nhỏ hơn hoặc bằng " << n << " là: " << fib_max << endl;
    else // Nếu không tồn tại số Fibonacci cho n âm thì xuất thông báo
        cout << "Không tồn tại số Fibonacci." << endl;

    return 0; // Kết thúc chương trình
}

// Kết quả
// Nhập số n: 20
// Số Fibonacci lớn nhất nhỏ hơn hoặc bằng 20 là: 13