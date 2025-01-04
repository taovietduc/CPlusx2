// Viết Bằng C++
// Bài 197: Hàm tìm số gần nhất với một số cho trước trong danh sách.

#include <iostream>
#include <vector>
#include <cmath> // Thư viện hỗ trợ các hàm toán học
using namespace std; 

int findClosest(const vector<int>& arr, int target)  
// Hàm tìm số gần nhất với một số cho trước trong danh sách.
{
    int closest = arr[0]; // Gán giá trị đầu tiên của mảng cho biến closest
    int minDiff = abs(arr[0] - target); // Gán giá trị đầu tiên của mảng cho biến minDiff

    for (int num : arr)     // Duyệt qua từng phần tử của mảng
    {
        int diff = abs(num - target); // Tính hiệu giữa phần tử và target
        if (diff < minDiff)  
        // Nếu hiệu nhỏ hơn minDiff thì gán giá trị đó cho minDiff và gán phần tử đó cho closest
        {
            closest = num; // Gán giá trị của phần tử cho closest
            minDiff = diff; // Gán giá trị của hiệu cho minDiff
        }
    }
    return closest;
}

int main() 
{
    vector<int> arr = {10, 22, 28, 29, 30, 40}; // Khởi tạo mảng arr
    int target = 54; // Khởi tạo giá trị target
    cout << findClosest(arr, target) << endl; // Output: 40
    return 0;
}
