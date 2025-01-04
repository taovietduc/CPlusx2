// Viết Bằng C++
// Bài 199: Tìm phần tử xuất hiện nhiều nhất trong danh sách sử dụng HashMap.

#include <iostream>
#include <vector>
#include <unordered_map>  // Thư viện sử dụng bảng băm  (hash map)
using namespace std;

int findMostFrequent(const vector<int>& arr)  // Tìm phần tử xuất hiện nhiều nhất trong danh sách
{
    unordered_map<int, int> frequency; // Tạo một bảng băm để lưu trữ tần suất xuất hiện của mỗi phần tử
    int maxCount = 0; // Số lần xuất hiện nhiều nhất của một phần tử
    int mostFrequent = arr[0]; // Phần tử xuất hiện nhiều nhất

    for (int num : arr)  // Duyệt qua từng phần tử trong danh sách
    { 
        frequency[num]++; // Tăng tần suất xuất hiện của phần tử đó lên 1
        if (frequency[num] > maxCount)  
        // Nếu tần suất xuất hiện của phần tử đó lớn hơn số lần xuất hiện nhiều nhất hiện tại
        {
            maxCount = frequency[num]; // Cập nhật số lần xuất hiện nhiều nhất
            mostFrequent = num; // Cập nhật phần tử xuất hiện nhiều nhất
        }
    }

    return mostFrequent;
}

int main() 
{
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 3}; // Khởi tạo một danh sách
    cout << findMostFrequent(arr) << endl; // Output: 1
    return 0;
}
