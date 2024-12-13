// Viết Bằng C++
// Bài 169: Tìm số dài nhất có thể tạo bằng cách chọn các phần tử liên tiếp trong danh sách.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findLargestConsecutiveNumber(const vector<int>& nums) { // Hàm tìm số dài nhất có thể tạo
    string largest_number = ""; 
    
    for (int i = 0; i < nums.size(); i++) {     // Duyệt qua từng phần tử trong mảng nums
        string current_number = "";
        for (int j = i; j < nums.size(); j++) { // Duyệt qua các phần tử liên tiếp
            current_number += to_string(nums[j]);  // Ghép các phần tử liên tiếp
            
            // So sánh và cập nhật số lớn nhất
            if (current_number.length() > largest_number.length() ||  // Nếu số hiện tại dài hơn số lớn nhất
                (current_number.length() == largest_number.length() && current_number > largest_number)) { // hoặc bằng nhau nhưng lớn hơn
                largest_number = current_number; // Cập nhật số lớn nhất
            }
        }
    }
    
    return largest_number; // Trả về số lớn nhất
}

int main() {
    vector<int> nums = {1, 23, 4, 56, 789};
    string result = findLargestConsecutiveNumber(nums);
    cout << "Số dài nhất có thể tạo: " << result << endl;
    return 0;
}
