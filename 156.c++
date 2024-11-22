// VIẾT BẰNG C++
// Bài 156: Tạo hàm tìm các từ có chung các chữ cái trong danh sách các từ cho trước.

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

// Hàm tìm các từ có chung chữ cái (anagrams)
vector<vector<string>> findAnagrams(vector<string>& words) {
    // Map để lưu trữ các nhóm từ có cùng chữ cái
    // Key: từ đã được sắp xếp các chữ cái
    // Value: danh sách các từ có cùng chữ cái
    map<string, vector<string>> anagramGroups;
    
    // Duyệt qua từng từ trong danh sách
    for (string& word : words) {
        // Tạo bản sao của từ để sắp xếp
        string sortedWord = word;
        // Sắp xếp các chữ cái theo thứ tự
        sort(sortedWord.begin(), sortedWord.end());
        
        // Thêm từ vào nhóm tương ứng
        anagramGroups[sortedWord].push_back(word);
    }
    
    // Chuyển kết quả từ map sang vector
    vector<vector<string>> result;
    for (const auto& group : anagramGroups) {
        // Chỉ thêm vào kết quả các nhóm có từ 2 từ trở lên
        if (group.second.size() > 1) {
            result.push_back(group.second);
        }
    }
    
    return result;
}

int main() {
    // Nhập số lượng từ
    int n;
    cout << "Nhap so luong tu: ";
    cin >> n;
    cin.ignore(); // Xóa bộ nhớ đệm
    
    // Nhập danh sách các từ
    vector<string> words;
    cout << "Nhap " << n << " tu:" << endl;
    for (int i = 0; i < n; i++) {
        string word;
        getline(cin, word);
        words.push_back(word);
    }
    
    // Tìm các nhóm từ có chung chữ cái
    vector<vector<string>> result = findAnagrams(words);
    
    // In kết quả
    cout << "\nCac nhom tu co chung chu cai:" << endl;
    for (const auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// Giải thích chi tiết:
// 1. Hàm findAnagrams: 
// - Tạo map để lưu trữ các nhóm từ có cùng chữ cái
// - Duyệt qua từng từ trong danh sách, sắp xếp các chữ cái của từ và thêm từ vào nhóm tương ứng
// - Chuyển kết quả từ map sang vector và chỉ thêm vào kết quả các nhóm có từ 2 từ trở lên
// 2. main: 
// - Nhập số lượng từ, danh sách các từ
// - Gọi hàm findAnagrams để tìm các nhóm từ có chung chữ cái
// - In kết quả
// Độ phức tạp: O(n * m log m) với n là số từ và m là độ dài từ dài nhất
// - Sắp xếp các chữ cái của từ có độ phức tạp O(m log m) cho mỗi từ
// - Duyệt qua từng từ và thao tác với map có độ phức tạp O(n)
// Độ phức tạp tổng thể là O(n * m log m)
// Để cải thiện độ phức tạp, có thể sử dụng các cấu trúc dữ liệu khác như unordered_map và hash table.
// Nhưng trong trường hợp này, map vẫn đáp ứng được yêu cầu về độ phức tạp.
// Đây là một giải pháp hiệu quả và đơn giản để giải quyết bài toán tìm các từ có chung chữ cái.