// Viết Bằng C++
// Bài 166: Tạo hàm kiểm tra xem hai chuỗi có chứa cùng tập hợp các ký tự hay không.

#include <iostream>
#include <set>
#include <string>
using namespace std;

// Hàm kiểm tra xem hai chuỗi có chứa cùng tập hợp các ký tự hay không
bool haveSameCharacters(const string& str1, const string& str2) {
    // Tạo tập hợp ký tự duy nhất từ chuỗi thứ nhất
    set<char> set1(str1.begin(), str1.end());
    // Tạo tập hợp ký tự duy nhất từ chuỗi thứ hai
    set<char> set2(str2.begin(), str2.end());

    // So sánh hai tập hợp. Nếu bằng nhau, trả về true, ngược lại trả về false
    return set1 == set2;
}

int main() {
    // Kiểm tra với các chuỗi ví dụ

    // Ví dụ 1: Chuỗi "abc" và "cba" chứa cùng các ký tự {'a', 'b', 'c'} => Kết quả: true
    cout << haveSameCharacters("abc", "cba") << endl; // 1 (true)

    // Ví dụ 2: Chuỗi "abc" chứa {'a', 'b', 'c'}, nhưng "abcd" chứa thêm 'd' => Kết quả: false
    cout << haveSameCharacters("abc", "abcd") << endl; // 0 (false)

    // Ví dụ 3: Chuỗi "xyz" và "zxy" chứa cùng các ký tự {'x', 'y', 'z'} => Kết quả: true
    cout << haveSameCharacters("xyz", "zxy") << endl; // 1 (true)

    return 0;
}
