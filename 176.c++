// Viết Bằng C++
// Bài 176: Tạo hàm tìm số lớn thứ ba trong danh sách mà không dùng hàm sẵn có.

#include <iostream>
#include <vector>
#include <limits> // INT_MIN 
using namespace std;

int thirdLargest(vector<int>& nums) { // Time complexity: O(n), Space complexity: O(1)
    int first = INT_MIN, second = INT_MIN, third = INT_MIN; // INT_MIN: -2147483648
    for (int num : nums) { // Duyệt qua từng phần tử trong mảng
        if (num > first) { // Nếu num lớn hơn first
            third = second; // Cập nhật third = second
            second = first; // Cập nhật second = first
            first = num; // Cập nhật first = num
        } else if (num > second && num < first) { // Nếu num lớn hơn second và nhỏ hơn first
            third = second;
            second = num;
        } else if (num > third && num < second) { // Nếu num lớn hơn third và nhỏ hơn second
            third = num;
        }
    }
    return third == INT_MIN ? -1 : third; // Nếu không tìm thấy số lớn thứ ba thì trả về -1
}

int main() {
    vector<int> nums = {4, 1, 2, 9, 7, 3};  // Khởi tạo mảng nums
    cout << thirdLargest(nums) << endl;  // Output: 4
    return 0;
}
