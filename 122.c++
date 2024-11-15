// VIẾT BẰNG C++
// Bài 122: Tạo hàm kiểm tra một số có phải là số Armstrong không.

#include <iostream>
#include <cmath>  //  Thư viện hỗ trợ hàm pow (hàm lũy thừa)

using namespace std;

bool isArmstrong(int num)  // Hàm kiểm tra số Armstrong
{
    int original_num = num; // Lưu giá trị ban đầu của num
    int total = 0; // Tổng các chữ số lũy thừa
    int num_digits = 0; // Số lượng chữ số của num 

    // Đếm số lượng chữ số
    int temp = num;
    while (temp != 0)  // Điều kiện dừng: temp = 0 (không còn chữ số nào)
    {
        num_digits++; // Tăng biến đếm số lượng chữ số lên 1 đơn vị
        temp /= 10; // Loại bỏ chữ số cuối cùng của num để kiểm tra chữ số tiếp theo
    }

    // Tính tổng các chữ số lũy thừa bậc num_digits
    temp = num; // Khởi tạo lại giá trị của temp 
    while (temp != 0)   // Điều kiện dừng: temp = 0 (không còn chữ số nào)
    {
        int digit = temp % 10; // Lấy ra chữ số cuối cùng của num
        total += pow(digit, num_digits); // Tính tổng các chữ số lũy thừa bậc num_digits
        temp /= 10; // Loại bỏ chữ số cuối cùng của num để kiểm tra chữ số tiếp theo
    }

    return total == original_num; // Trả về kết quả kiểm tra số Armstrong
}

int main() 
{
    int num = 153; // Số cần kiểm tra có phải số Armstrong không
    if (isArmstrong(num))  // Gọi hàm kiểm tra số Armstrong
    {
        cout << num << " là số Armstrong." << endl;
    } 
    else  // Nếu hàm trả về false (số không phải là số Armstrong)
    {
        cout << num << " không phải là số Armstrong." << endl;
    }
    return 0;
}
