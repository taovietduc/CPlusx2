// VIẾT BẰNG C++
// Tạo danh sách các số nguyên tố từ danh sách: Nhập một danh sách các số và tạo danh sách các số nguyên tố.

#include <iostream>
#include <cmath>  // Thư viện hỗ trợ các hàm toán học
using namespace std;

// Hàm kiểm tra số nguyên tố
bool la_so_nguyen_to(int so)  // Trả về true nếu là số nguyên tố, ngược lại trả về false
{
    if (so < 2) return false; // Số nguyên tố phải lớn hơn 1
    for (int i = 2; i <= sqrt(so); i++)  // Duyệt từ 2 đến căn bậc 2 của số
    {
        if (so % i == 0) return false; // Nếu số chia hết cho một số nào đó thì không phải số nguyên tố
    }
    return true; // Nếu không chia hết cho số nào thì là số nguyên tố
}

int main() 
{
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    int* danh_sach = new int[n]; // Khai báo mảng động chứa các phần tử
    int* danh_sach_nguyen_to = new int[n]; // Khai báo mảng động chứa các số nguyên tố
    int count_nguyen_to = 0; // Biến đếm số lượng số nguyên tố

    // Nhập các phần tử
    cout << "Nhập các phần tử: "; 
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử để nhập
    {
        cin >> danh_sach[i]; // Nhập phần tử thứ i
    }

    // Lọc số nguyên tố
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử để kiểm tra
    {
        if (la_so_nguyen_to(danh_sach[i]))  // Nếu là số nguyên tố thì thêm vào danh sách số nguyên tố
        {
            danh_sach_nguyen_to[count_nguyen_to++] = danh_sach[i]; // Thêm số nguyên tố vào danh sách
        }
    }

    // In danh sách số nguyên tố
    cout << "Danh sách các số nguyên tố: ";
    for (int i = 0; i < count_nguyen_to; i++)  // Duyệt qua danh sách số nguyên tố để in
    {
        cout << danh_sach_nguyen_to[i] << " "; // In số nguyên tố thứ i
    }
    cout << endl;

    // MẢNG ĐỘNG
    // Giải phóng bộ nhớ
    delete[] danh_sach; 
    delete[] danh_sach_nguyen_to; 

    return 0;
}
