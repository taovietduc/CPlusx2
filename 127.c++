// VIẾT BẰNG C++
// Bài 127: Tạo hàm tìm số chẵn lớn nhất trong danh sách.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng kiểu dữ liệu vector
#include <limits> // Thư viện limits để sử dụng giá trị lớn nhất của kiểu dữ liệu

using namespace std;

int largestEvenNumber(const vector<int>& numbers)  // Hàm tìm số chẵn lớn nhất trong danh sách
{
    int largest_even = -1;  // Khởi tạo biến với giá trị -1 (không tìm thấy)
    
    for (int num : numbers)  // Duyệt qua từng phần tử trong danh sách
    {
        if (num % 2 == 0 && num > largest_even)  // Kiểm tra nếu là số chẵn và lớn hơn số chẵn lớn nhất hiện tại 
        {  // Kiểm tra nếu là số chẵn và lớn hơn số chẵn lớn nhất hiện tại
            largest_even = num; // Gán số chẵn lớn nhất bằng số chẵn hiện tại
        }
    }

    return largest_even;  // Trả về số chẵn lớn nhất hoặc -1 nếu không có
}

int main()  // Hàm main để kiểm tra hàm tìm số chẵn lớn nhất
{
    vector<int> numbers = {1, 3, 5, 6, 8, 10, 7}; // Khởi tạo danh sách số nguyên
    cout << "Số chẵn lớn nhất là: " << largestEvenNumber(numbers) << endl; 
    // In ra số chẵn lớn nhất trong danh sách
    return 0; // Kết thúc chương trình
}

// Kết quả là 10 vì 10 là số chẵn lớn nhất trong danh sách
// Nếu không có số chẵn nào thì kết quả sẽ là -1 vì giá trị khởi tạo của largest_even là -1
