// VIẾT BẰNG C++
// Bài 97: Tạo hàm tính tổng các số lẻ trong một khoảng cho trước.

#include <iostream>
using namespace std;

// Hàm tính tổng các số lẻ trong một khoảng
int tong_so_le(int start, int end) // start: số bắt đầu, end: số kết thúc của khoảng cần tính tổng
{
    int tong = 0; // Khởi tạo biến tổng
    for (int i = start; i <= end; i++)  // Duyệt qua các số trong khoảng từ start đến end
    {
        if (i % 2 != 0) // Kiểm tra nếu là số lẻ
        { 
            tong += i; // Cộng số lẻ vào tổng
        }
    }
    return tong; // Trả về tổng các số lẻ
}

int main() 
{
    int start, end; // Khai báo biến số bắt đầu và số kết thúc của khoảng cần tính tổng
    cout << "Nhập khoảng bắt đầu: "; 
    cin >> start; 
    cout << "Nhập khoảng kết thúc: ";
    cin >> end;

    int tong = tong_so_le(start, end); // Gọi hàm tính tổng các số lẻ trong khoảng từ start đến end
    cout << "Tổng các số lẻ trong khoảng từ " << start << " đến " << end << " là: " << tong << endl;

    return 0; // Kết thúc chương trình
}
