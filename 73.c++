// VIẾT BẰNG C++
// Bài 73: Tạo hàm tính tổng các giá trị trong từ điển.

#include <iostream>
#include <map> // Thư viện chứa class map trong C++
using namespace std;

// Hàm tính tổng các giá trị trong từ điển
int tinh_tong_gia_tri(const map<string, int>& tu_dien) 
{
    int tong = 0;
    for (const auto& pair : tu_dien)  // Duyệt qua từng cặp key-value trong từ điển
    {
        tong += pair.second;  // Cộng dồn các giá trị
    }
    return tong; // Trả về tổng
} 

int main() 
{
    // Tạo một từ điển mẫu
    map<string, int> tu_dien = {{"apple", 3}, {"banana", 2}, {"orange", 5}}; 
    // Từ điển gồm 3 cặp key-value 

    // Tính tổng và in kết quả
    int tong = tinh_tong_gia_tri(tu_dien); // Gọi hàm tính tổng giá trị
    cout << "Tổng các giá trị trong từ điển là: " << tong << endl;

    return 0; // Kết thúc chương trình
}
