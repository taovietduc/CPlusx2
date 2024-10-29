// VIẾT BẰNG C++
// Bài 62: Tạo hàm tính số Fibonacci thứ n.

#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n <= 0) 
    {
        return -1; // Báo lỗi nếu n không hợp lệ
    } 
    else if (n == 1) // Nếu n = 1 thì trả về 0 vì số Fibonacci thứ 1 là 0
    {
        return 0;
    } 
    else if (n == 2) // Nếu n = 2 thì trả về 1 vì số Fibonacci thứ 2 là 1
    {
        return 1;
    } 
    else  // Nếu n > 2  thì tính số Fibonacci thứ n theo công thức F(n) = F(n-1) + F(n-2)
    {
        int a = 0, b = 1, fib = 0; // Khai báo 3 biến a, b, fib
        for (int i = 2; i < n; i++)  // Duyệt từ 2 đến n
        {
            fib = a + b; // Tính số Fibonacci thứ i
            a = b; // Gán b cho a
            b = fib; // Gán fib cho b
        }
        return b;
    }
}

int main()  // Hàm main
{
    int n;
    cout << "Nhập số n để tính số Fibonacci thứ n: ";
    cin >> n;

    int result = fibonacci(n); // Gọi hàm fibonacci và lưu kết quả vào biến result
    if (result == -1)  // Nếu n không hợp lệ
    {
        cout << "Số phải lớn hơn 0" << endl; // In ra thông báo
    } 
    else  // Nếu n hợp lệ thì in kết quả
    {
        cout << "Số Fibonacci thứ " << n << " là: " << result << endl;
    }
    return 0; // Kết thúc chương trình
}
