// Viết Bằng C++
// Bài 174: Tìm danh sách con dài nhất trong danh sách mà tất cả các phần tử đều tăng dần.

#include <iostream> 
#include <vector> // thư viện vector
#include <algorithm>
using namespace std;

vector<int> longestIncreasingSubsequence(vector<int> nums) { // dãy con tăng dài nhất
    if (nums.empty()) return {}; // nếu mảng rỗng thì trả về mảng rỗng

    vector<int> dp(nums.size(), 1); // khởi tạo mảng dp với kích thước bằng kích thước mảng nums và giá trị ban đầu là 1
    vector<int> prev(nums.size(), -1);  // khởi tạo mảng prev với kích thước bằng kích thước mảng nums và giá trị ban đầu là -1

    int maxLen = 1, maxIdx = 0;

    for (size_t i = 1; i < nums.size(); ++i) { // duyệt từ 1 đến kích thước mảng nums
        for (size_t j = 0; j < i; ++j) {
            if (nums[i] > nums[j] && dp[i] < dp[j] + 1) { // nếu phần tử thứ i lớn hơn phần tử thứ j và dp[i] nhỏ hơn dp[j] + 1
                dp[i] = dp[j] + 1; // gán dp[i] = dp[j] + 1
                prev[i] = j; // gán prev[i] = j
            }
        }
        if (dp[i] > maxLen) { // nếu dp[i] lớn hơn maxLen
            maxLen = dp[i]; // gán maxLen = dp[i]
            maxIdx = i;
        }
    }

    vector<int> result;
    for (int i = maxIdx; i != -1; i = prev[i]) { // duyệt từ maxIdx đến -1 với bước nhảy là prev[i]
        result.push_back(nums[i]); // thêm phần tử nums[i] vào mảng result
    }
    reverse(result.begin(), result.end()); // đảo ngược mảng result
    return result;
}

int main() {
    vector<int> nums = {10, 22, 9, 33, 21, 50, 41, 60}; // khởi tạo mảng nums
    vector<int> result = longestIncreasingSubsequence(nums); // gọi hàm longestIncreasingSubsequence với tham số là mảng nums

    for (int num : result) { // duyệt mảng result
        cout << num << " ";
    }
    // Output: 10 22 33 50 60
    return 0;
}
