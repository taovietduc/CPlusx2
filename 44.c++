// VIẾT BẰNG C++
// Tạo danh sách các số chẵn từ danh sách: Nhập một danh sách các số và tạo danh sách các số chẵn.

// VIẾT THEO MẢNG ĐỘNG

#include <iostream>
using namespace std;

int main()  // VIẾT THEO MẢNG ĐỘNG
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng động để lưu danh sách các phần tử
    int* danh_sach = new int[n]; // Mảng để lưu các số nguyên
    int* danh_sach_chan = new int[n]; // Mảng để lưu các số chẵn
    int count_chan = 0; // Biến đếm số phần tử chẵn

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++)  // Nhập các phần tử vào danh sách
    {
        cin >> danh_sach[i]; // Nhập các phần tử vào danh sách
    }

    // Lọc các phần tử chẵn và thêm vào mảng danh_sach_chan
    for (int i = 0; i < n; i++)  // Lọc các phần tử chẵn và thêm vào mảng danh_sach_chan
    {
        if (danh_sach[i] % 2 == 0) // Kiểm tra số chẵn
        {
            danh_sach_chan[count_chan++] = danh_sach[i]; 
            // Kiểm tra số chẵn
        }
    }

    // In danh sách các số chẵn
    cout << "Danh sách các số chẵn là: "; // In danh sách các số chẵn
    for (int i = 0; i < count_chan; i++)  // In danh sách các số chẵn
    {
        cout << danh_sach_chan[i] << " "; // In danh sách các số chẵn
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] danh_sach;  // Giải phóng bộ nhớ
    delete[] danh_sach_chan; // Giải phóng bộ nhớ

    return 0;
}


// VIẾT THEO MẢNG TĨNH

#include <iostream>
using namespace std;

int main() 
{
    // Nhập số lượng phần tử trong danh sách
    int n;
    cout << "Nhập số lượng phần tử trong danh sách: ";
    cin >> n;

    // Tạo mảng tĩnh để lưu danh sách các phần tử
    int danh_sach[100]; // Giả sử tối đa 100 phần tử
    int danh_sach_chan[100]; // Mảng để lưu các phần tử chẵn
    int count_chan = 0; // Biến đếm số phần tử chẵn

    // Nhập các phần tử vào danh sách
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) // Nhập các phần tử vào danh sách
    {
        cin >> danh_sach[i]; // Nhập các phần tử vào danh sách
    }

    // Lọc các phần tử chẵn và thêm vào mảng danh_sach_chan
    for (int i = 0; i < n; i++)     // Lọc các phần tử chẵn và thêm vào mảng danh_sach_chan
    {
        if (danh_sach[i] % 2 == 0)  // Kiểm tra số chẵn và thêm vào mảng danh_sach_chan
        {
            danh_sach_chan[count_chan++] = danh_sach[i]; // Kiểm tra số chẵn và thêm vào mảng danh_sach_chan
        }
    }

    // In danh sách các số chẵn
    cout << "Danh sách các số chẵn là: "; // In danh sách các số chẵn
    for (int i = 0; i < count_chan; i++)    // In danh sách các số chẵn
    {
        cout << danh_sach_chan[i] << " ";   // In danh sách các số chẵn
    }
    cout << endl;

    return 0;
}