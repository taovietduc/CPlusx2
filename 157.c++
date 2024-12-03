// VIẾT BẰNG C++
// Bài 157: Viết hàm đảo ngược các từ trong một câu nhưng giữ nguyên thứ tự các chữ cái trong mỗi từ.

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Hàm đảo ngược thứ tự các từ trong câu
string reverseWords(string sentence) {
    // Vector để lưu các từ
    vector<string> words;
    
    // Tạo stringstream để tách câu thành các từ
    stringstream ss(sentence);
    string word;
    
    // Đọc từng từ và thêm vào vector
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Đảo ngược thứ tự các từ trong vector
    string result;
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        // Thêm khoảng trắng giữa các từ (trừ từ cuối cùng)
        if (i > 0) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    string sentence;
    cout << "Nhap cau: ";
    getline(cin, sentence);
    
    string reversed = reverseWords(sentence);
    cout << "Cau sau khi dao nguoc thu tu cac tu: " << reversed << endl;
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm reverseWords(string sentence):
   - Input: Một chuỗi chứa câu cần đảo ngược
   - Output: Chuỗi mới với thứ tự các từ đã bị đảo ngược

2. Các bước thực hiện:
   a) Tạo vector words để lưu trữ các từ riêng lẻ
   
   b) Sử dụng stringstream để tách câu thành các từ:
      - stringstream tự động tách các từ dựa trên khoảng trắng
      - Mỗi từ được đọc bằng toán tử >> và thêm vào vector
   
   c) Tạo chuỗi kết quả bằng cách:
      - Duyệt vector từ cuối lên đầu
      - Thêm từng từ vào chuỗi kết quả
      - Thêm khoảng trắng giữa các từ (trừ từ cuối cùng)

3. Trong hàm main():
   - Nhập câu từ người dùng bằng getline()
   - Gọi hàm reverseWords() để đảo ngược thứ tự các từ
   - In kết quả

Ví dụ:
Input: "Hello World OpenAI"
Output: "OpenAI World Hello"

Lưu ý: 
- Thứ tự các chữ cái trong mỗi từ vẫn giữ nguyên
- Chỉ đảo ngược thứ tự xuất hiện của các từ trong câu
*/
