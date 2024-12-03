// Viết Bằng C++
// Bài 164: Viết hàm kiểm tra xem một chuỗi có phải là hoán vị của một chuỗi palindrome không.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Hàm kiểm tra chuỗi có phải hoán vị của palindrome
bool isPermutationOfPalindrome(string str) {
    // Sử dụng map để đếm số lần xuất hiện của mỗi ký tự
    unordered_map<char, int> charCount;
    
    // Đếm số lần xuất hiện của từng ký tự
    for(char c : str) {
        // Chuyển về chữ thường để không phân biệt hoa thường
        c = tolower(c);
        if(isalpha(c)) { // Chỉ xét các ký tự chữ cái
            charCount[c]++;
        }
    }
    
    // Đếm số ký tự xuất hiện số lần lẻ
    int oddCount = 0;
    for(auto pair : charCount) {
        if(pair.second % 2 != 0) {
            oddCount++;
        }
    }
    
    // Nếu là hoán vị của palindrome thì chỉ được có tối đa 1 ký tự xuất hiện số lần lẻ
    return oddCount <= 1;
}

int main() {
    string str;
    cout << "Nhap chuoi can kiem tra: ";
    getline(cin, str);
    
    if(isPermutationOfPalindrome(str)) {
        cout << "Chuoi la hoan vi cua mot palindrome" << endl;
    } else {
        cout << "Chuoi khong phai la hoan vi cua palindrome" << endl;
    }
    
    return 0;
}

/*
Giải thích chi tiết:

1. Ý tưởng:
   - Một chuỗi là hoán vị của palindrome khi sắp xếp lại các ký tự có thể tạo thành palindrome
   - Điều kiện để tạo thành palindrome: tất cả các ký tự phải xuất hiện số lần chẵn, 
     ngoại trừ có thể có tối đa 1 ký tự xuất hiện số lần lẻ (ở giữa palindrome)

2. Hàm isPermutationOfPalindrome:
   - Sử dụng unordered_map để đếm số lần xuất hiện của mỗi ký tự
   - Chuyển các ký tự về chữ thường và chỉ xét các ký tự chữ cái
   - Đếm số ký tự xuất hiện số lần lẻ
   - Nếu số ký tự xuất hiện số lần lẻ <= 1 thì chuỗi là hoán vị của palindrome

3. Ví dụ:
   - "racecar" -> true (là hoán vị của chính nó - một palindrome)
   - "aabb" -> true (có thể sắp xếp thành "abba")
   - "abc" -> false (không thể sắp xếp thành palindrome)
*/
