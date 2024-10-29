// VIẾT BẰNG C++
// Bài 75: Tạo hàm tạo danh sách các số chẵn từ danh sách.

#include <iostream>
using namespace std;

// Hàm tạo danh sách các số chẵn từ danh sách đầu vào
int* loc_so_chan(int* danh_sach, int n, int& so_luong_chan)  
// Truyền vào mảng, số phần tử, số lượng số chẵn và trả về mảng số chẵn
{
    // Tạo mảng động để lưu số chẵn
    int* danh_sach_chan = new int[n]; 
    // Mảng số chẵn có thể chứa tối đa n phần tử (tất cả đều là số chẵn)
    so_luong_chan = 0; // Biến đếm số lượng số chẵn
    
    for (int i = 0; i < n; i++)  // Duyệt qua từng phần tử trong danh sách
    {
        if (danh_sach[i] % 2 == 0)  // Nếu phần tử là số chẵn thì thêm vào mảng
        {
            danh_sach_chan[so_luong_chan++] = danh_sach[i]; // Thêm số chẵn vào mảng
        }
    }
    return danh_sach_chan; // Trả về mảng số chẵn sau khi lọc
}

int main() 
{
    // Tạo danh sách mẫu
    int danh_sach[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int n = sizeof(danh_sach) / sizeof(danh_sach[0]); // Số phần tử của danh sách

    // Biến đếm số lượng số chẵn
    int so_luong_chan = 0; 

    // Gọi hàm lọc số chẵn
    int* danh_sach_chan = loc_so_chan(danh_sach, n, so_luong_chan);

    // In kết quả
    cout << "Danh sách các số chẵn là: "; 
    for (int i = 0; i < so_luong_chan; i++)  // Duyệt qua mảng số chẵn để in ra
    {
        cout << danh_sach_chan[i] << " "; // In từng phần tử số chẵn
    }
    cout << endl; // Xuống dòng sau khi in xong

    // Giải phóng bộ nhớ động
    delete[] danh_sach_chan; // Giải phóng mảng số chẵn

    return 0; // Kết thúc chương trình
}
