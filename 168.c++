// Viết Bằng C++
// Bài 168: Viết hàm tách một danh sách thành hai danh sách con, một chứa số chẵn và một chứa số lẻ.

#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> splitEvenOdd(const vector<int>& numbers) {
    vector<int> even_numbers;  // Danh sách chứa số chẵn
    vector<int> odd_numbers;   // Danh sách chứa số lẻ
    
    for (int num : numbers) {  // Duyệt qua từng phần tử trong danh sách
        if (num % 2 == 0) {    // Nếu phần tử chia hết cho 2
            even_numbers.push_back(num);  // Thêm vào danh sách chẵn
        } else {
            odd_numbers.push_back(num);   // Thêm vào danh sách lẻ
        }
    }
    
    return {even_numbers, odd_numbers};  // Trả về cặp danh sách
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto [even, odd] = splitEvenOdd(numbers); // Tách danh sách thành 2 danh sách chẵn và lẻ
    
    cout << "Số chẵn: "; // In ra danh sách chẵn 
    for (int num : even) cout << num << " "; // In ra từng phần tử trong danh sách chẵn
    cout << endl; // Xuống dòng
    
    cout << "Số lẻ: ";
    for (int num : odd) cout << num << " "; // In ra từng phần tử trong danh sách lẻ
    cout << endl;    // Xuống dòng
    
    return 0;
}
