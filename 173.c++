// Viết Bằng C++
// Bài 173: Viết hàm tìm danh sách con có tổng lớn nhất mà không chứa các phần tử liên tiếp.

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int maxNonAdjacentSum(vector<int> nums) { // Tìm tổng lớn nhất không chứa các phần tử liên tiếp
    if (nums.empty()) return 0; // Nếu mảng rỗng thì trả về 0
    if (nums.size() == 1) return nums[0]; // Nếu mảng chỉ có 1 phần tử thì trả về phần tử đó

    int incl = nums[0]; // incl là tổng lớn nhất chứa phần tử thứ i
    int excl = 0; // excl là tổng lớn nhất không chứa phần tử thứ i

    for (size_t i = 1; i < nums.size(); ++i) { // Duyệt từ phần tử thứ 2 đến cuối mảng
        int newExcl = max(incl, excl) ; // Tìm tổng lớn nhất không chứa phần tử thứ i
        incl = excl + nums[i];  // Tìm tổng lớn nhất chứa phần tử thứ i
        excl = newExcl; // Cập nhật excl
    }

    return max(incl, excl);     // Trả về tổng lớn nhất
}

int main() {
    vector<int> nums = {3, 2, 7, 10};   // Khởi tạo mảng
    cout << maxNonAdjacentSum(nums) << endl;  // Output: 13 (3 + 10)
    return 0;
}
