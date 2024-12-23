// Viết Bằng C++
// Bài 175: Tìm dãy con tăng dài nhất trong mảng

#include <iostream>
#include <vector> // Thư viện vector
using namespace std;

vector<int> removeConsecutiveDuplicates(vector<int> nums) { // Hàm xóa phần tử trùng nhau trong mảng và trả về mảng mới
    if (nums.empty()) return {}; // Nếu mảng rỗng thì trả về mảng rỗng

    vector<int> result; // Khởi tạo mảng kết quả rỗng và thêm phần tử đầu tiên vào mảng kết quả
    result.push_back(nums[0]); // Thêm phần tử đầu tiên vào mảng kết quả
 
    for (size_t i = 1; i < nums.size(); ++i) { // Duyệt qua các phần tử từ phần tử thứ 2 đến cuối mảng
        if (nums[i] != nums[i - 1]) { // Nếu phần tử hiện tại khác phần tử trước đó thì thêm vào mảng kết quả
            result.push_back(nums[i]); // Thêm phần tử vào mảng kết quả
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5}; // Khởi tạo mảng nums ban đầu
    vector<int> result = removeConsecutiveDuplicates(nums); // Gọi hàm xóa phần tử trùng nhau trong mảng và trả về mảng mới

    for (int num : result) { // Duyệt qua các phần tử trong mảng kết quả và xuất ra m
        cout << num << " "; // Xuất ra
    }
    // Output: 1 2 3 4 5
    return 0;
}