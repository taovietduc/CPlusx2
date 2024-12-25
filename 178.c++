// Viết Bằng C++
// Bài 178: Tạo hàm tìm ma trận con có tổng lớn nhất từ một ma trận 2D cho trước.

#include <iostream>
#include <vector>
#include <climits> // INT_MIN và INT_MAX
using namespace std;

// Hàm Kadane 1D để tìm mảng con có tổng lớn nhất
int kadane(const vector<int>& arr, int& start, int& end, int n) { // Trả về tổng lớn nhất của mảng con
    int max_sum = INT_MIN, sum = 0; // Khởi tạo tổng lớn nhất và tổng hiện tại
    end = -1; // Khởi tạo chỉ số kết thúc của mảng con
    int local_start = 0; // Khởi tạo chỉ số bắt đầu của mảng con

    for (int i = 0; i < n; ++i) { // Duyệt qua tất cả các phần tử của mảng
        sum += arr[i]; // Cộng phần tử vào tổng hiện tại
        if (sum > max_sum) { // Nếu tổng hiện tại lớn hơn tổng lớn nhất
            max_sum = sum; // Cập nhật tổng lớn nhất
            start = local_start; // Cập nhật chỉ số bắt đầu của mảng con
            end = i; // Cập nhật chỉ số kết thúc của mảng con
        }
        if (sum < 0) { // Nếu tổng hiện tại nhỏ hơn 0
            sum = 0; // Đặt tổng hiện tại về 0
            local_start = i + 1; // Cập nhật chỉ số bắt đầu của mảng con
        }
    }

    if (end != -1) return max_sum; // Nếu tồn tại mảng con có tổng lớn hơn 0, trả về tổng lớn nhất

    // Nếu tất cả số đều âm, chọn số lớn nhất
    max_sum = arr[0]; // Khởi tạo tổng lớn nhất bằng phần tử đầu tiên
    start = end = 0; // Gán chỉ số bắt đầu và kết thúc bằng 0
    for (int i = 1; i < n; i++) { // Duyệt qua các phần tử từ phần tử thứ 2
        if (arr[i] > max_sum) { // Nếu phần tử thứ i lớn hơn tổng lớn nhất
            max_sum = arr[i];
            start = end = i; // Gán chỉ số bắt đầu và kết thúc bằng i
        }
    }
    return max_sum;
}

// Hàm tìm ma trận con có tổng lớn nhất từ ma trận 2D
int maxSumSubmatrix(const vector<vector<int>>& matrix) { // Trả về tổng lớn nhất của ma trận con
    int rows = matrix.size();
    int cols = matrix[0].size();

    int max_sum = INT_MIN;
    int left, right, top, bottom; // Vị trí của ma trận con có tổng lớn nhất

    // Lặp qua tất cả các cột trái
    for (int l = 0; l < cols; ++l) { // Lặp qua tất cả các cột phải
        vector<int> temp(rows, 0); // Khởi tạo mảng tạm thời với số hàng và giá trị 0

        // Lặp qua tất cả các cột phải
        for (int r = l; r < cols; ++r) {
            // Tính tổng dồn dọc cho các hàng
            for (int i = 0; i < rows; ++i) { // Duyệt qua tất cả các hàng
                temp[i] += matrix[i][r]; // Cộng giá trị của cột r vào mảng tạm thời
            }

            // Áp dụng Kadane để tìm mảng con 1D có tổng lớn nhất
            int start, end; // Chỉ số bắt đầu và kết thúc của mảng con
            int sum = kadane(temp, start, end, rows); // Tính tổng lớn nhất của mảng con

            if (sum > max_sum) { // Nếu tổng lớn nhất của mảng con lớn hơn tổng lớn nhất
                max_sum = sum; // Cập nhật tổng lớn nhất
                left = l; // Cập nhật vị trí cột trái
                right = r; // Cập nhật vị trí cột phải
                top = start; // Cập nhật vị trí hàng trên
                bottom = end; // Cập nhật vị trí hàng dưới
            }
        }
    }

    // In vị trí ma trận con có tổng lớn nhất (tuỳ chọn)
    cout << "Top-left: (" << top << ", " << left << ")\n";
    cout << "Bottom-right: (" << bottom << ", " << right << ")\n";

    return max_sum;
}

int main() {
    vector<vector<int>> matrix = { // Ma trận 2D 4x5 (4 hàng, 5 cột) 
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 10, 1, 3},
        {-4, -1, 1, 7, -6}
    };

    int max_sum = maxSumSubmatrix(matrix); // Tìm ma trận con có tổng lớn nhất
    cout << "Maximum sum of submatrix: " << max_sum << endl; // In tổng lớn nhất của ma trận con
    return 0;
}
