// Viết Bằng C++
// Bài 159: Tìm số lần xuất hiện của một từ bất kỳ trong một chuỗi mà không phân biệt chữ hoa/chữ thường.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Hàm chuyển chuỗi thành chữ thường
string toLower(string str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// Hàm đếm số lần xuất hiện của từ trong chuỗi
int countWordOccurrences(string text, string word) {
    // Chuyển cả chuỗi và từ cần tìm thành chữ thường
    text = toLower(text);
    word = toLower(word);
    
    int count = 0;
    size_t pos = 0;
    
    // Tìm vị trí xuất hiện của từ trong chuỗi
    while ((pos = text.find(word, pos)) != string::npos) {
        // Kiểm tra xem từ tìm được có phải là từ độc lập không
        bool isWord = true;
        
        // Kiểm tra ký tự trước từ
        if (pos > 0 && isalnum(text[pos - 1])) {
            isWord = false;
        }
        
        // Kiểm tra ký tự sau từ
        if (pos + word.length() < text.length() && isalnum(text[pos + word.length()])) {
            isWord = false;
        }
        
        if (isWord) count++;
        pos += word.length();
    }
    
    return count;
}

int main() {
    string text, word;
    
    cout << "Nhap chuoi van ban: ";
    getline(cin, text);
    
    cout << "Nhap tu can tim: ";
    getline(cin, word);
    
    int occurrences = countWordOccurrences(text, word);
    cout << "So lan xuat hien cua tu \"" << word << "\": " << occurrences << endl;
    
    return 0;
}
