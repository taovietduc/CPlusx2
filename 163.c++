// Viết Bằng C++
// Bài 163: Tạo hàm tìm tất cả các cặp từ trong danh sách mà khi kết hợp lại tạo thành palindrome.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm kiểm tra chuỗi có phải palindrome hay không
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Hàm tìm các cặp từ tạo thành palindrome
vector<pair<string, string>> findPalindromePairs(vector<string>& words) {
    vector<pair<string, string>> result;
    int n = words.size();
    
    // Kiểm tra từng cặp từ
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Kiểm tra kết hợp theo 2 cách
            string combine1 = words[i] + words[j];
            string combine2 = words[j] + words[i];
            
            if (isPalindrome(combine1)) {
                result.push_back({words[i], words[j]});
            }
            if (isPalindrome(combine2)) {
                result.push_back({words[j], words[i]});
            }
        }
    }
    
    return result;
}

int main() {
    vector<string> words;
    string word;
    cout << "Nhap cac tu (nhap 'end' de ket thuc):\n";
    
    // Nhập danh sách các từ
    while (true) {
        cin >> word;
        if (word == "end") break;
        words.push_back(word);
    }
    
    // Tìm các cặp palindrome
    vector<pair<string, string>> pairs = findPalindromePairs(words);
    
    // In kết quả
    cout << "\nCac cap tu tao thanh palindrome:\n";
    for (const auto& pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ") -> " 
             << pair.first + pair.second << endl;
    }
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isPalindrome(string str):
   - Input: chuỗi cần kiểm tra
   - Output: true nếu là palindrome, false nếu không phải
   - Sử dụng 2 con trỏ left và right để kiểm tra đối xứng
   
2. Hàm findPalindromePairs(vector<string>& words):
   - Input: vector chứa danh sách các từ
   - Output: vector chứa các cặp từ tạo thành palindrome
   
   Các bước thực hiện:
   a) Duyệt qua từng cặp từ trong danh sách (i, j)
   b) Với mỗi cặp từ, kiểm tra 2 cách kết hợp:
      - words[i] + words[j]
      - words[j] + words[i]
   c) Nếu cách kết hợp nào tạo thành palindrome thì thêm vào kết quả
   
3. Hàm main():
   - Nhập danh sách các từ từ người dùng
   - Gọi hàm findPalindromePairs để tìm các cặp từ
   - In ra các cặp từ tìm được cùng với chuỗi palindrome tương ứng

Ví dụ:
Input: ["abc", "cba", "ab", "ba"]
Output: 
- (abc, cba) -> abccba
- (ab, ba) -> abba
- (ba, ab) -> baab
*/
