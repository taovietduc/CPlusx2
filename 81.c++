// VIẾT BẰNG C++
// Bài 81: Tạo hàm tìm bội chung nhỏ nhất của hai số.

#include <iostream>
using namespace std;

// Hàm tính ước chung lớn nhất (ƯCLN)
int ucln(int a, int b) //hàm này dùng để tìm ước chung lớn nhất của 2 số a và b
{
    while (b != 0)  //nếu b khác 0 thì thực hiện vòng lặp while
    {
        int temp = b; //gán b cho biến tạm
        b = a % b; //gán phần dư của a chia b cho b
        a = temp; //gán b cho a
    }
    return a; //trả về a
}

// Hàm tính bội chung nhỏ nhất (BCNN)
int bcnn(int a, int b)  //hàm này dùng để tìm bội chung nhỏ nhất của 2 số a và b
{ 
    return abs(a * b) / ucln(a, b); //trả về giá trị tuyệt đối của (a * b) chia cho ước chung lớn nhất của a và b
}

int main() 
{
    int a, b;
    cout << "Nhập số thứ nhất: "; //nhập số thứ nhất
    cin >> a;
    cout << "Nhập số thứ hai: "; //nhập số thứ hai
    cin >> b;

    cout << "Bội chung nhỏ nhất của " << a << " và " << b << " là: " << bcnn(a, b) << endl; 

    return 0;
}
