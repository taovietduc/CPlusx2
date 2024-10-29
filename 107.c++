// VIẾT BẰNG C++
// Bài 107: Tạo hàm kiểm tra một số có phải là số hoàn hảo không.

#include <iostream>
using namespace std;

// Hàm kiểm tra số hoàn hảo
bool kiem_tra_so_hoan_hao(int n)  //nếu tổng các ước của n bằng chính nó thì n là số hoàn hảo
{
    if (n <= 1) return false; // số 1 không phải số hoàn hảo

    int tong_uoc = 0; // khởi tạo biến tổng ước
    for (int i = 1; i < n; i++)  //duyệt từ 1 đến n-1
    {
        if (n % i == 0)  //nếu i là ước của n
        {
            tong_uoc += i; //cộng i vào tổng ước
        }
    }

    return tong_uoc == n; //nếu tổng ước bằng chính nó thì n là số hoàn hảo
}

int main()  //hàm main
{
    int so; //khai báo biến số cần kiểm tra
    cout << "Nhập số cần kiểm tra: ";
    cin >> so; //nhập số cần kiểm tra

    if (kiem_tra_so_hoan_hao(so))  //nếu số so là số hoàn hảo thì in ra m
    {
        cout << so << " là số hoàn hảo." << endl;
    } 
    else  //nếu số so không phải số hoàn hảo
    {
        cout << so << " không phải là số hoàn hảo." << endl;
    }

    return 0; //kết thúc chương trình
}
