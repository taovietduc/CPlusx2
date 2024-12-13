// Viết Bằng C++
// Bài 170: Tạo hàm tìm các bộ ba phần tử trong danh sách sao cho tổng của chúng bằng 0.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) { // Hàm tìm bộ ba phần tử có tổng bằng 0
    sort(nums.begin(), nums.end()); // Sắp xếp danh sách
    vector<vector<int>> result; // Danh sách kết quả chứa các bộ ba phần tử có tổng bằng 0

    for (int i = 0; i < nums.size() - 2; i++) { // Duyệt từ phần tử đầu tiên đến phần tử thứ 3 từ cuối
        // Bỏ qua các giá trị trùng lặp tại i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = nums.size() - 1; // left và right là 2 con trỏ trỏ tới 2 phần tử còn lại

        while (left < right) { // Duyệt từ 2 phần tử còn lại
            int current_sum = nums[i] + nums[left] + nums[right]; // Tính tổng 3 phần tử

            if (current_sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]}); // Thêm bộ ba phần tử vào danh sách kết quả

                // Loại bỏ các phần tử trùng lặp tại left và right
                while (left < right && nums[left] == nums[left + 1]) left++; 
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if (current_sum < 0) { // Nếu tổng nhỏ hơn 0
                left++; // Tăng tổng
            } else {
                right--; // Giảm tổng
            }
        }
    }

    return result;
}

int main() { 
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; // Danh sách các phần tử
    vector<vector<int>> result = threeSum(nums); // Tìm bộ ba phần tử có tổng bằng 0

    cout << "Các bộ ba có tổng bằng 0: " << endl;
    for (const auto& triplet : result) { // Duyệt danh sách kết quả
        cout << "[";
        for (int num : triplet) { // Duyệt từng phần tử trong bộ ba
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
