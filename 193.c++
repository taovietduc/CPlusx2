// Viết Bằng C++
// Bài 193: Kiểm tra xem một dãy số có phải là dãy con của dãy Fibonacci không.

#include <iostream> 
#include <unordered_set> // Include thư viện này để sử dụng unordered_set
using namespace std;

bool isFibonacciSubsequence(const vector<int> &seq) { 
// Hàm kiểm tra dãy số có phải là dãy con của dãy Fibonacci không
    unordered_set<int> fibSet; // Khởi tạo một unordered_set để lưu dãy Fibonacci
    int a = 0, b = 1; // Khởi tạo 2 số đầu tiên của dãy Fibonacci
    while (b <= 1e9) { // Vòng lặp để tạo dãy Fibonacci
        fibSet.insert(b); // Thêm số b vào unordered_set
        int temp = b; // Lưu số b vào biến tạm
        b += a; // Cập nhật số b
        a = temp;
    }
    for (int num : seq) { // Duyệt qua từng số trong dãy số
        if (fibSet.find(num) == fibSet.end()) return false; 
        // Nếu số không thuộc dãy Fibonacci thì trả về false
    }
    return true;
}

int main() { 
    vector<int> seq = {1, 2, 3, 5}; // Khởi tạo dãy số cần kiểm tra
    cout << "Is Fibonacci subsequence: " << (isFibonacciSubsequence(seq) ? "Yes" : "No") << endl;
    return 0;
}

// Output:  Is Fibonacci subsequence: Yes