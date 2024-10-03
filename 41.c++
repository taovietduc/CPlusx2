// VIẾT BẰNG C++
// Tạo danh sách từ từ điển: Nhập một từ điển và tạo danh sách các giá trị từ từ điển đó.

#include <iostream>
#include <map> // Thư viện map
using namespace std;

int main() 
{
    // Tạo một map để lưu từ điển
    map<string, int> tu_dien; // Khóa là string, giá trị là int 

    // Nhập số lượng phần tử trong từ điển ban đầu
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng khóa và giá trị
    for (int i = 0; i < n; i++) // Duyệt qua từng phần tử
    {
        string khoa; // Khóa
        int gia_tri; // Giá trị
        cout << "Nhập khóa: ";
        cin >> khoa;
        cout << "Nhập giá trị: ";
        cin >> gia_tri;
        tu_dien[khoa] = gia_tri; // Lưu khóa và giá trị vào từ điển
    }

    // Tạo mảng động để lưu các giá trị từ từ điển
    int* danh_sach_gia_tri = new int[n]; // Mảng động chứa các giá trị
    int index = 0; // Chỉ số của mảng

    // Lưu các giá trị vào mảng
    for (const auto &pair : tu_dien) // Duyệt qua từng cặp khóa và giá trị
    {
        danh_sach_gia_tri[index++] = pair.second; // Lưu giá trị vào mảng
    }

    // In danh sách các giá trị
    cout << "Danh sách các giá trị từ từ điển là: "; 
    for (int i = 0; i < n; i++) // Duyệt qua từng giá trị
    {
        cout << danh_sach_gia_tri[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ động
    delete[] danh_sach_gia_tri; // Giải phóng mảng động

    return 0;
}

