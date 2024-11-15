// VIẾT BẰNG C++
// Bài 136: Tìm số Fibonacci lớn thứ hai nhỏ hơn hoặc bằng 

#include <iostream>
#include <vector> // Thư viện vector để sử dụng mảng động
using namespace std;

int secondLargestFibonacci(int n) // Hàm tìm số Fibonacci lớn thứ hai nhỏ hơn hoặc bằng n
{
    if (n < 1) return -1; // Nếu n nhỏ hơn 1, trả về -1 vì không có số Fibonacci nào nhỏ hơn 1

    int fib1 = 0, fib2 = 1; // Khởi tạo 2 số Fibonacci đầu tiên là 0 và 1
    vector<int> fibList; // Khai báo mảng động để lưu dãy Fibonacci

    // Xây dựng dãy Fibonacci nhỏ hơn hoặc bằng n
    while (fib2 <= n)  // Vòng lặp chạy cho đến khi số Fibonacci lớn hơn n
    {
        fibList.push_back(fib2); // Thêm số Fibonacci vào mảng động
        int temp = fib2; // Lưu số Fibonacci hiện tại vào biến tạm
        fib2 += fib1; // Tính số Fibonacci tiếp theo bằng cộng 2 số Fibonacci trước đó
        fib1 = temp; // Gán số Fibonacci hiện tại bằng số Fibonacci trước đó
    }

    // Nếu dãy có ít hơn 2 phần tử, trả về phần tử đầu tiên
    if (fibList.size() < 2) return fibList.empty() ? -1 : fibList[0];

    // Trả về số Fibonacci lớn thứ hai
    return fibList[fibList.size() - 2];
}

int main() 
{
    int n = 20; // Số n cần tìm số Fibonacci lớn thứ hai nhỏ hơn hoặc bằng n
    cout << "Số Fibonacci lớn thứ hai nhỏ hơn hoặc bằng " << n << " là: " << secondLargestFibonacci(n) << endl;
    return 0;
}

// Kết quả: Số Fibonacci lớn thứ hai nhỏ hơn hoặc bằng 20 là: 13
