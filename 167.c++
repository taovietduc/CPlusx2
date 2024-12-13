// Viết Bằng C++
// Bài 167: Viết hàm tìm ba số có tổng gần nhất với một số cho trước trong danh sách.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Bước 1: Sắp xếp danh sách
    int closest_sum = INT_MAX; // Khởi tạo tổng gần nhất là vô cực
    
    for (int i = 0; i < nums.size() - 2; i++) { // Duyệt từng phần tử
        int left = i + 1, right = nums.size() - 1; // Hai con trỏ
        
        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right]; // Tính tổng
            
            // Nếu tổng gần hơn target, cập nhật closest_sum
            if (abs(target - current_sum) < abs(target - closest_sum)) {
                closest_sum = current_sum;
            }
            
            // Điều chỉnh con trỏ
            if (current_sum < target) {
                left++;
            } else if (current_sum > target) {
                right--;
            } else {
                return current_sum; // Tổng đúng bằng target
            }
        }
    }
    
    return closest_sum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(nums, target);
    cout << "Tổng gần nhất với " << target << " là: " << result << endl;
    return 0;
}
