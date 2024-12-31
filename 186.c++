// Viết Bằng C++
// Bài 186: Tìm tất cả các ma trận con có tổng nhỏ hơn một số cho trước.

#include <iostream>
#include <vector>
using namespace std;

void findSubmatrices(vector<vector<int>> &matrix, int threshold) 
// hàm tìm tất cả các ma trận con có tổng nhỏ hơn một số cho trước
{
    int rows = matrix.size(); // số hàng của ma trận matrix
    int cols = matrix[0].size(); // số cột của ma trận matrix
    vector<vector<int>> submatrix; 
    // khởi tạo ma trận con (submatrix) với các phần tử là các mảng 1 chiều

    for (int i = 0; i < rows; ++i) { 
    // hàng ngang của ma trận con (submatrix) bắt đầu từ hàng i đến hàng rows
        for (int j = 0; j < cols; ++j) { 
        // cột dọc của ma trận con (submatrix) bắt đầu từ cột j đến cột cols
            for (int m = i; m < rows; ++m) { 
            // hàng ngang của ma trận con (submatrix) bắt đầu từ hàng m đến hàng rows
                for (int n = j; n < cols; ++n) { 
                // cột dọc của ma trận con (submatrix) bắt đầu từ cột n đến cột cols
                    int sum = 0;
                    submatrix.clear(); 
                    // xóa ma trận con (submatrix) trước khi thêm phần tử mới
                    for (int p = i; p <= m; ++p) { 
                    // hàng ngang của ma trận con (submatrix) bắt đầu từ hàng p đến hàng m
                        vector<int> row;
                        for (int q = j; q <= n; ++q) {
                        // cột dọc của ma trận con (submatrix) bắt đầu từ cột q đến cột n
                            sum += matrix[p][q]; // tính tổng các phần tử trong ma trận con (submatrix)
                            row.push_back(matrix[p][q]); 
                            // thêm phần tử vào hàng ngang của ma trận con (submatrix)
                        }
                        submatrix.push_back(row); // thêm hàng ngang vào ma trận con (submatrix)
                    }
                    if (sum < threshold) { 
                    // nếu tổng các phần tử trong ma trận con (submatrix) nhỏ hơn threshold
                        cout << "Submatrix with sum " << sum << ":\n"; 
                        // in ra ma trận con (submatrix) và tổng các phần tử trong ma trận con (submatrix)
                        for (auto &row : submatrix) { // duyệt qua từng hàng ngang của ma trận con (submatrix)
                            for (int val : row) { 
                            // duyệt qua từng phần tử trong hàng ngang của ma trận con (submatrix)
                                cout << val << " ";
                            }
                            cout << endl;
                        }
                        cout << endl;
                    }
                }
            }
        }
    }
}

int main() { // hàm main
    vector<vector<int>> matrix = { 
    // khởi tạo ma trận 2 chiều matrix với các phần tử là các mảng 1 chiều
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };
    int threshold = 15; // khởi tạo biến threshold với giá trị 15

    findSubmatrices(matrix, threshold); 
    // gọi hàm findSubmatrices với tham số matrix và threshold
    return 0;
}
