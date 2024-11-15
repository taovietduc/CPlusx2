// VIẾT BẰNG C++
// Bài 137: Kiểm tra một số có phải là số mạnh không. 

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)  // Tính giai thừa của một số nguyên dương n
{
    int result = 1; // Gán giá trị ban đầu cho biến result là 1 
    for (int i = 1; i <= n; i++)  // Vòng lặp for để tính giai thừa của n
    {
        result *= i; // result = result * i 
    }
    return result; // Trả về giá trị của biến result sau khi đã tính xong giai thừa của n
}

bool isStrongNumber(int num)  // Hàm kiểm tra một số có phải là số mạnh không 
{
    int originalNum = num; // Gán giá trị của num cho biến originalNum 
    int sumOfFactorials = 0; // Gán giá trị ban đầu cho biến sumOfFactorials là 0

    while (num > 0)  // Vòng lặp while để tính tổng giai thừa của các chữ số của num
    { 
        int digit = num % 10; // Lấy ra chữ số cuối cùng của num
        sumOfFactorials += factorial(digit); 
        // Cộng dồn giai thừa của chữ số cuối cùng vào biến sumOfFactorials
        num /= 10; // Loại bỏ chữ số cuối cùng của num
    }

    return sumOfFactorials == originalNum; 
    // Trả về kết quả so sánh giữa tổng giai thừa của các chữ số của num và num
}

int main() 
{
    int num = 145; // Khai báo biến num có giá trị là 145
    cout << "Số " << num << " là số mạnh: " << (isStrongNumber(num) ? "True" : "False") << endl;
    return 0;
}

// Output: Số 145 là số mạnh: True
// Số 145 là số mạnh vì 1! + 4! + 5! = 145
// 1! = 1, 4! = 24, 5! = 120
// 1 + 24 + 120 = 145
// 145 = 145 => True
