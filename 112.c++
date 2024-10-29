// VIẾT BẰNG C++
// Bài 112: Tạo hàm sắp xếp các phần tử của danh sách số theo thứ tự tăng dần.

#include <iostream>
#include <vector> // Thư viện vector để sử dụng kiểu dữ liệu vector
#include <algorithm> // Thư viện algorithm để sử dụng hàm sort của C++

using namespace std;

vector<int> sortListAscending(vector<int> numbers)  
// Hàm sắp xếp các phần tử của danh sách số theo thứ tự tăng dần
{
    /*
    Sắp xếp các phần tử của danh sách số theo thứ tự tăng dần.

    Parameters:
    numbers (vector<int>): Danh sách các số.

    Returns:
    vector<int>: Danh sách đã được sắp xếp theo thứ tự tăng dần.
    */
    sort(numbers.begin(), numbers.end()); 
    return numbers; // Trả về danh sách đã được sắp xếp
}

int main() 
{
    vector<int> numbers = {5, 3, 8, 1, 2, 9};  // Khởi tạo danh sách số
    vector<int> sorted_numbers = sortListAscending(numbers); 
    // Sắp xếp các phần tử của danh sách số theo thứ tự tăng dần

    cout << "Danh sách đã sắp xếp: "; // In ra danh sách đã sắp xếp
    for (int num : sorted_numbers)  // Duyệt qua từng phần tử trong danh sách đã sắp xếp
    {
        cout << num << " "; // In ra phần tử 
    }
    cout << endl; // Xuống dòng

    return 0; // Kết thúc chương trình
}

// Giải thích:
// Hàm sort(): Trong C++, hàm sort() từ thư viện <algorithm> dùng để sắp xếp một mảng hoặc vector theo thứ tự tăng dần.
// Tham số: numbers là danh sách các số được truyền vào dưới dạng vector<int>.
// Kết quả: Hàm trả về danh sách đã sắp xếp theo thứ tự tăng dần.
