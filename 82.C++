// VIẾT BẰNG C++
// Bài 82: Tạo hàm tìm ước chung lớn nhất của hai số.

#include <iostream>
using namespace std;

// Hàm tính ước chung lớn nhất (ƯCLN)
int ucln(int a, int b) // hàm này sẽ trả về ước chung lớn nhất của 2 số a và b
{
    while (b != 0)  // nếu b khác 0 thì thực hiện vòng lặp while
    {
        int temp = b; // gán b cho biến tạm
        b = a % b;   // gán phần dư của a chia b cho b
        a = temp;   // gán biến tạm cho a
    } 
    return a; // trả về a
}

int main() 
{
    int a, b;
    cout << "Nhập số thứ nhất: "; // nhập số thứ nhất
    cin >> a;
    cout << "Nhập số thứ hai: "; // nhập số thứ hai
    cin >> b;

    cout << "Ước chung lớn nhất của " << a << " và " << b << " là: " << ucln(a, b) << endl; 

    return 0;
}
