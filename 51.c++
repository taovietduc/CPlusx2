// VIẾT BẰNG C++
// BÀI 51:Tạo danh sách các số Fibonacci từ 0 đến n.

#include <iostream>
using namespace std;

int main() 
{
    int n; // Số Fibonacci lớn nhất cần tìm
    // Nhập một số n từ người dùng
    cout << "Nhập một số n: ";
    cin >> n;

    // Tạo mảng để lưu danh sách các số Fibonacci
    int fibonacci_list[100]; // Giả sử tối đa 100 số Fibonacci
    int count = 0; // Biến đếm số lượng số Fibonacci đã lưu

    int a = 0, b = 1; // Hai số đầu tiên của dãy Fibonacci

    while (a <= n)  // Thêm số Fibonacci vào danh sách cho đến khi số đó lớn hơn n
    {
        fibonacci_list[count] = a; // Thêm số Fibonacci a vào mảng
        count++; // Tăng biến đếm
        int next = a + b; // Tính số Fibonacci tiếp theo
        a = b; // Cập nhật số Fibonacci thứ hai
        b = next; // Cập nhật số Fibonacci tiếp theo
    }

    // In danh sách các số Fibonacci
    cout << "Danh sách các số Fibonacci từ 0 đến " << n << ": "; 
    for (int i = 0; i < count; i++) // Duyệt và in từng số trong mảng Fibonacci 
    {
        cout << fibonacci_list[i] << " "; // In số Fibonacci 
    }
    cout << endl; // Xuống dòng

    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n; // Số Fibonacci lớn nhất cần tìm
    // Nhập một số n từ người dùng
    cout << "Nhập một số n: ";
    cin >> n;

    // Tạo danh sách các số Fibonacci
    vector<int> fibonacci_list;
    int a = 0, b = 1; // Hai số đầu tiên của dãy Fibonacci

    while (a <= n)  // Thêm số Fibonacci vào danh sách cho đến khi số đó lớn hơn n
    {
        fibonacci_list.push_back(a); // Thêm số Fibonacci a vào danh sách
        int next = a + b; // Tính số Fibonacci tiếp theo
        a = b; // Cập nhật số Fibonacci thứ hai
        b = next; // Cập nhật số Fibonacci tiếp theo
    }

    // In danh sách các số Fibonacci
    cout << "Danh sách các số Fibonacci từ 0 đến " << n << ": "; 
    for (int num : fibonacci_list) // Duyệt và in từng số trong danh sách Fibonacci 
    {
        cout << num << " "; // In số Fibonacci 
    }
    cout << endl; // Xuống dòng

    return 0;
}
