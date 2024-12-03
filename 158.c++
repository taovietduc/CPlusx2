// Viết Bằng C++
// Bài 158: Viết hàm kiểm tra xem một chuỗi có thể được tạo bằng cách lặp lại một đoạn con nào đó hay không.

#include <iostream>
#include <string>
using namespace std;

// Hàm kiểm tra xem chuỗi s có thể được tạo bằng cách lặp lại đoạn con hay không
bool isRepeatedSubstring(string s) {
    int n = s.length();
    if (n <= 1) return false;
    
    // Thử với các độ dài đoạn con khác nhau
    for (int len = 1; len <= n/2; len++) {
        // Chỉ xét các độ dài là ước của độ dài chuỗi
        if (n % len != 0) continue;
        
        // Lấy đoạn con đầu tiên làm mẫu
        string pattern = s.substr(0, len);
        bool isRepeated = true;
        
        // Kiểm tra các đoạn con tiếp theo
        for (int i = len; i < n; i += len) {
            if (s.substr(i, len) != pattern) {
                isRepeated = false;
                break;
            }
        }
        
        if (isRepeated) return true;
    }
    
    return false;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    
    if (isRepeatedSubstring(s)) {
        cout << "Chuoi co the tao bang cach lap lai doan con" << endl;
    } else {
        cout << "Chuoi khong the tao bang cach lap lai doan con" << endl;
    }
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isRepeatedSubstring(string s):
   - Input: Một chuỗi s cần kiểm tra
   - Output: true nếu chuỗi có thể tạo bằng cách lặp lại đoạn con, false nếu ngược lại

2. Các bước thực hiện:
   a) Kiểm tra điều kiện cơ bản:
      - Nếu chuỗi có độ dài <= 1, trả về false
   
   b) Thử với các độ dài đoạn con khác nhau:
      - Chỉ xét các độ dài từ 1 đến n/2 (vì đoạn con phải lặp lại ít nhất 2 lần)
      - Chỉ xét các độ dài là ước của độ dài chuỗi
   
   c) Với mỗi độ dài:
      - Lấy đoạn con đầu tiên làm mẫu (pattern)
      - Kiểm tra các đoạn con tiếp theo có giống mẫu không
      - Nếu tất cả đoạn con đều giống mẫu, trả về true
   
   d) Nếu không tìm thấy đoạn con thỏa mãn, trả về false

3. Ví dụ:
   - Input: "abcabc" -> Output: true (lặp lại "abc")
   - Input: "aaaa" -> Output: true (lặp lại "a")
   - Input: "abcd" -> Output: false
   - Input: "abcabcabc" -> Output: true (lặp lại "abc")

4. Độ phức tạp:
   - Thời gian: O(n^2), với n là độ dài chuỗi
   - Không gian: O(n) cho việc tạo các chuỗi con
*/


