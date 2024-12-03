// Viết Bằng C++
// Bài 162: Viết hàm đếm số lượng từ bắt đầu và kết thúc bằng nguyên âm trong chuỗi.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Hàm kiểm tra một ký tự có phải nguyên âm hay không
bool isVowel(char c) {
    c = tolower(c); // Chuyển về chữ thường để dễ kiểm tra
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Hàm đếm số từ bắt đầu và kết thúc bằng nguyên âm
int countWordsStartEndWithVowel(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    
    // Tách từng từ trong chuỗi
    while (ss >> word) {
        // Kiểm tra ký tự đầu và cuối của từ
        if (isVowel(word[0]) && isVowel(word[word.length()-1])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    
    int result = countWordsStartEndWithVowel(str);
    cout << "So luong tu bat dau va ket thuc bang nguyen am: " << result << endl;
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm isVowel(char c):
   - Input: một ký tự cần kiểm tra
   - Output: true nếu là nguyên âm, false nếu không phải
   - Chuyển ký tự về chữ thường để dễ kiểm tra
   - Kiểm tra xem ký tự có thuộc tập {a,e,i,o,u} hay không

2. Hàm countWordsStartEndWithVowel(string str):
   - Input: chuỗi cần đếm số từ
   - Output: số lượng từ thỏa điều kiện
   
   Các bước thực hiện:
   a) Sử dụng stringstream để tách từng từ trong chuỗi
   b) Với mỗi từ:
      - Kiểm tra ký tự đầu tiên bằng word[0]
      - Kiểm tra ký tự cuối cùng bằng word[word.length()-1]
      - Nếu cả hai đều là nguyên âm thì tăng biến đếm

3. Ví dụ:
   - Input: "apple eye orange ice"
   - Output: 2 (eye và ice)
   - Giải thích: 
     + "eye": bắt đầu bằng 'e' và kết thúc bằng 'e'
     + "ice": bắt đầu bằng 'i' và kết thúc bằng 'e'
*/
