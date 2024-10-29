// VIẾT BẰNG C++
// Bài 93: Tạo hàm kiểm tra số nguyên tố trong một khoảng cho trước.

#include <iostream>
#include <cmath> // Thư viện hỗ trợ tính toán toán học
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiem_tra_nguyen_to(int n)  // Số nguyên tố là số chỉ chia hết cho 1 và chính nó
{
    if (n <= 1) return false; // Số nhỏ hơn hoặc bằng 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++)  // Số nguyên tố chỉ chia hết cho 1 và chính nó
    {
        if (n % i == 0)  // Nếu n chia hết cho i thì n không phải số nguyên tố
        {
            return false;  // Trả về false nếu n không phải số nguyên tố
        }
    }
    return true; // Trả về true nếu n là số nguyên tố
}

// Hàm kiểm tra các số nguyên tố trong một khoảng cho trước
void nguyen_to_trong_khoang(int start, int end) // Khoảng từ start đến end có bao nhiêu số nguyên tố
{
    cout << "Các số nguyên tố từ " << start << " đến " << end << " là: ";
    for (int i = start; i <= end; i++)  // Duyệt từ start đến end để kiểm tra số nguyên tố
    {
        if (kiem_tra_nguyen_to(i))  // Nếu i là số nguyên tố thì in ra
        {
            cout << i << " "; // In ra số nguyên tố i
        }
    }
    cout << endl;
}

int main() 
{
    int start, end; // Khai báo biến start và end
    cout << "Nhập khoảng bắt đầu: ";
    cin >> start; // Nhập khoảng bắt đầu
    cout << "Nhập khoảng kết thúc: ";
    cin >> end; // Nhập khoảng kết thúc

    nguyen_to_trong_khoang(start, end); // Gọi hàm kiểm tra số nguyên tố trong khoảng từ start đến end

    return 0; // Kết thúc chương trình
}

// Kết quả
// Nhập khoảng bắt đầu: 1
// Nhập khoảng kết thúc: 9
// Các số nguyên tố từ 1 đến 9 là: 2 3 5 7 
