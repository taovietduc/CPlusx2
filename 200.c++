// Viết Bằng C++
// Bài 200: Viết hàm kiểm tra xem danh sách có phải là một heap tối đa không.

#include <iostream>
#include <vector>
using namespace std;

bool isMaxHeap(const vector<int>& arr)  // Kiểm tra xem danh sách có phải là một heap tối đa không
{
    int n = arr.size(); // Số lượng phần tử trong danh sách
    for (int i = 0; i <= (n - 2) / 2; ++i) // Duyệt qua từng nút cha trong cây
    { 
        if (2 * i + 1 < n && arr[i] < arr[2 * i + 1]) // Kiểm tra xem nút cha có lớn hơn nút con trái không
        {
            return false; // Nếu không thì trả về false
        } 

        if (2 * i + 2 < n && arr[i] < arr[2 * i + 2])  // Kiểm tra xem nút cha có lớn hơn nút con phải không
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    vector<int> arr1 = {10, 9, 8, 7, 6, 5, 4}; // Khởi tạo một danh sách heap tối đa (max heap)
    cout << (isMaxHeap(arr1) ? "True" : "False") << endl;  // Output: True

    vector<int> arr2 = {10, 15, 8, 7, 6, 5, 4}; // Khởi tạo một danh sách không phải là heap tối đa
    cout << (isMaxHeap(arr2) ? "True" : "False") << endl;  // Output: False

    return 0;
}
