// Viết Bằng C++
// Bài 198: Tìm cặp phần tử có hiệu nhỏ nhất trong danh sách.

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

pair<int, int> findMinDifferencePair(vector<int>& arr)  // Thêm tham chiếu & để sắp xếp mảng
{ 
    sort(arr.begin(), arr.end()); // Sắp xếp mảng trước khi tìm hiệu nhỏ nhất 
    int minDiff = INT_MAX; // INT_MAX là giá trị lớn nhất của kiểu int
    pair<int, int> result; // Lưu kết quả cuối cùng

    for (size_t i = 0; i < arr.size() - 1; ++i)  // Duyệt qua mảng để tìm hiệu nhỏ nhất
    {
        int diff = arr[i + 1] - arr[i]; // Tính hiệu của 2 phần tử liền kề
        if (diff < minDiff)  // So sánh với hiệu nhỏ nhất hiện tại
        {
            minDiff = diff; // Cập nhật hiệu nhỏ nhất
            result = {arr[i], arr[i + 1]}; // Cập nhật cặp phần tử có hiệu nhỏ nhất
        }
    }

    return result;
}

int main() 
{
    vector<int> arr = {1, 5, 3, 19, 18, 25}; // Mảng đầu vào 
    pair<int, int> result = findMinDifferencePair(arr); // Tìm cặp phần tử có hiệu nhỏ nhất
    cout << "(" << result.first << ", " << result.second << ")" << endl; // Output: (18, 19)
    return 0;
}
