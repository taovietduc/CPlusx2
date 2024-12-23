// Viết Bằng C++
// Bài 172: Tạo hàm tìm khoảng cách nhỏ nhất giữa hai phần tử bất kỳ trong danh sách.

#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm sort
#include <climits> // Thư viện chứa INT_MAX
using namespace std;

int minDistance(vector<int> nums) { // Tìm khoảng cách nhỏ nhất giữa 2 phần tử bất kỳ trong mảng
    sort(nums.begin(), nums.end()); // Sắp xếp mảng tăng dần
    int minDist = INT_MAX; // Khởi tạo khoảng cách nhỏ nhất là giá trị lớn nhất của kiểu int

    for (size_t i = 1; i < nums.size(); ++i) { // Duyệt mảng từ phần tử thứ 2
        minDist = min(minDist, nums[i] - nums[i - 1]); // Tìm khoảng cách nhỏ nhất giữa 2 phần tử liền kề
    }
    return minDist;
}

int main() { // Hàm main kiểm tra hàm minDistance
    vector<int> nums = {4, 7, 10, 20, 15}; // Mảng số nguyên nums = {4, 7, 10, 20, 15}
    cout << minDistance(nums) << endl;  // Output: 3 (7 và 10)
    return 0;
}

