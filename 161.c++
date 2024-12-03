// Viết Bằng C++
// Bài 161: Tạo hàm tìm chuỗi con có độ dài lớn nhất không chứa ký tự lặp lại.

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

// Hàm tìm chuỗi con dài nhất không chứa ký tự lặp lại
string longestSubstringWithoutRepeating(string str) {
    int n = str.length();
    int start = 0;     // Vị trí bắt đầu của chuỗi con hiện tại
    int maxLength = 0;  // Độ dài lớn nhất tìm được
    int maxStart = 0;   // Vị trí bắt đầu của chuỗi con dài nhất
    
    // Sử dụng unordered_set để kiểm tra ký tự trùng lặp
    unordered_set<char> charSet;
    
    // Dùng 2 con trỏ (sliding window)
    int left = 0, right = 0;
    
    while (right < n) {
        // Nếu ký tự chưa xuất hiện trong tập hợp
        if (charSet.find(str[right]) == charSet.end()) {
            charSet.insert(str[right]);
            
            // Cập nhật độ dài lớn nhất nếu cần
            if (right - left + 1 > maxLength) {
                maxLength = right - left + 1;
                maxStart = left;
            }
            right++;
        }
        // Nếu ký tự đã tồn tại
        else {
            // Xóa ký tự ở đầu cửa sổ và di chuyển left pointer
            charSet.erase(str[left]);
            left++;
        }
    }
    
    // Trích xuất chuỗi con dài nhất
    return str.substr(maxStart, maxLength);
}

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    
    string result = longestSubstringWithoutRepeating(str);
    cout << "Chuoi con dai nhat khong chua ky tu lap lai: " << result << endl;
    cout << "Do dai: " << result.length() << endl;
    
    return 0;
}

/*
Giải thích chi tiết:

1. Ý tưởng thuật toán:
   - Sử dụng kỹ thuật cửa sổ trượt (sliding window) với 2 con trỏ left và right
   - Dùng unordered_set để kiểm tra ký tự trùng lặp
   
2. Các bước thực hiện:
   a) Khởi tạo các biến:
      - start: vị trí bắt đầu chuỗi con hiện tại
      - maxLength: độ dài lớn nhất tìm được
      - maxStart: vị trí bắt đầu của chuỗi con dài nhất
      
   b) Duyệt chuỗi với 2 con trỏ:
      - Nếu ký tự chưa xuất hiện:
        + Thêm vào tập hợp
        + Cập nhật độ dài lớn nhất nếu cần
        + Di chuyển right pointer
      - Nếu ký tự đã tồn tại:
        + Xóa ký tự ở đầu cửa sổ
        + Di chuyển left pointer
        
   c) Trả về chuỗi con dài nhất tìm được

3. Ví dụ:
   - Input: "abcabcbb"
     Output: "abc" (độ dài 3)
   - Input: "bbbbb"
     Output: "b" (độ dài 1)
   - Input: "pwwkew"
     Output: "wke" (độ dài 3)
*/

