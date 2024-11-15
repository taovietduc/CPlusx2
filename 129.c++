// VIẾT BẰNG C++
// Bài 129: Tạo hàm sắp xếp các chuỗi trong danh sách theo độ dài.

#include <iostream>
#include <vector> // Thư viện vector cho phép sử dụng mảng động
#include <string> // Thư viện string cho phép sử dụng chuỗi
#include <algorithm> // Thư viện algorithm cho phép sử dụng hàm sort

using namespace std;

bool compareByLength(const string& a, const string& b)  // Hàm so sánh hai chuỗi dựa trên độ dài
{
    return a.size() < b.size();  // So sánh hai chuỗi dựa trên độ dài
}

void sortStringsByLength(vector<string>& strings)  // Hàm sắp xếp các chuỗi trong danh sách theo độ dài
{
    sort(strings.begin(), strings.end(), compareByLength); // Sắp xếp các chuỗi trong danh sách theo độ dài
}

int main() 
{
    vector<string> strings = {"apple", "banana", "cherry", "kiwi", "grape"}; // Khởi tạo danh sách chuỗi
    sortStringsByLength(strings); // Sắp xếp các chuỗi trong danh sách theo độ dài
    
    cout << "Danh sách sắp xếp theo độ dài:";
    for (const string& str : strings)  // Duyệt qua từng chuỗi trong danh sách
    {
        cout << " " << str; // In ra từng chuỗi trong danh sách
    }
    cout << endl; // Xuống dòng sau khi in xong danh sách

    return 0; // Kết thúc chương trình
}

// Output:
// Danh sách sắp xếp theo độ dài: kiwi apple grape banana cherry
