// VIẾT BẰNG C++
// Bài 155: Viết hàm kiểm tra xem một danh sách có thể chia thành hai mảng con có tổng bằng nhau không.

#include <iostream>
#include <vector>
using namespace std;

// Hàm kiểm tra xem có thể chia mảng thành 2 phần có tổng bằng nhau không
bool canPartition(vector<int>& nums) {
    int totalSum = 0;
    // Tính tổng của toàn bộ mảng
    for (int num : nums) {
        totalSum += num;
    }
    
    // Nếu tổng lẻ thì không thể chia đều thành 2 phần
    if (totalSum % 2 != 0) {
        return false;
    }
    
    int target = totalSum / 2;
    int n = nums.size();
    
    // Tạo bảng dp để lưu trữ kết quả
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
    
    // Khởi tạo giá trị ban đầu
    // Tổng bằng 0 luôn có thể đạt được
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }
    
    // Điền bảng dp
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= target; j++) {
            if (j < nums[i-1]) {
                // Nếu số hiện tại lớn hơn tổng cần đạt
                dp[i][j] = dp[i-1][j];
            } else {
                // Có thể chọn hoặc không chọn số hiện tại
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            }
        }
    }
    
    return dp[n][target];
}

int main() {
    vector<int> nums;
    int n, x;
    
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    
    if (canPartition(nums)) {
        cout << "Co the chia mang thanh 2 phan co tong bang nhau" << endl;
    } else {
        cout << "Khong the chia mang thanh 2 phan co tong bang nhau" << endl;
    }
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm canPartition:
   - Đầu tiên tính tổng của toàn bộ mảng
   - Nếu tổng lẻ -> không thể chia đều thành 2 phần -> return false
   - Nếu tổng chẵn -> target = totalSum/2 (tổng cần tìm cho mỗi phần)
   
2. Sử dụng quy hoạch động:
   - Tạo bảng dp[n+1][target+1] để lưu kết quả
   - dp[i][j] = true nếu có thể tạo tổng j từ i phần tử đầu tiên
   
3. Khởi tạo:
   - Tổng bằng 0 luôn có thể đạt được -> dp[i][0] = true
   
4. Điền bảng dp:
   - Với mỗi số nums[i-1]:
     + Nếu số lớn hơn tổng cần đạt -> không thể dùng số này
     + Ngược lại, có 2 lựa chọn:
       * Không dùng số hiện tại: dp[i-1][j]
       * Dùng số hiện tại: dp[i-1][j-nums[i-1]]
   
5. Kết quả:
   - dp[n][target] cho biết có thể tạo được tổng target từ n số hay không
   
6. Độ phức tạp:
   - Thời gian: O(n * target), với n là số phần tử và target là tổng/2
   - Không gian: O(n * target) để lưu bảng dp
*/
