// VIẾT BẰNG C++
// Bài 124: Tạo hàm tìm chữ cái xuất hiện nhiều nhất trong một chuỗi.

#include <iostream>
#include <string> // Thư viện này giúp sử dụng chuỗi string trong C++ một cách dễ dàng
#include <unordered_map> // Thư viện này giúp lưu trữ các cặp key-value không trùng nhau
#include <cctype> // Thư viện này giúp kiểm tra các ký tự trong chuỗi có phải là chữ cái không

using namespace std;

char mostFrequentLetter(const string& s)  // Hàm tìm chữ cái xuất hiện nhiều nhất trong chuỗi
{
    unordered_map<char, int> frequency; // Lưu trữ số lần xuất hiện của các chữ cái trong chuỗi
    for (char ch : s)  // Duyệt qua từng ký tự trong chuỗi
    { 
        if (isalpha(ch))  // Kiểm tra nếu là chữ cái
        {
            ch = tolower(ch);  // Chuyển thành chữ thường
            frequency[ch]++; // Tăng số lần xuất hiện của chữ cái đó lên 1
        }
    }

    char most_common_letter = '\0'; // Chữ cái xuất hiện nhiều nhất
    int max_count = 0; // Số lần xuất hiện nhiều nhất

    for (const auto& pair : frequency)  // Duyệt qua từng cặp key-value trong unordered_map
    {
        if (pair.second > max_count)  // Nếu số lần xuất hiện của chữ cái đó lớn hơn số lần xuất hiện nhiều nhất
        {
            max_count = pair.second; // Cập nhật số lần xuất hiện nhiều nhất
            most_common_letter = pair.first; // Cập nhật chữ cái xuất hiện nhiều nhất
        }
    }

    return most_common_letter; // Trả về chữ cái xuất hiện nhiều nhất
}

int main() 
{
    string s = "Hello World!"; // Chuỗi cần kiểm tra
    cout << "Chữ cái xuất hiện nhiều nhất là: " << mostFrequentLetter(s) << endl;
    return 0; 
}
