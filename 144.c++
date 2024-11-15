// VIẾT BẰNG C++
// Bài 144: Viết hàm kiểm tra xem một danh sách có thể được sắp xếp thành một dãy số nguyên tố liên tiếp không.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm kiểm tra dãy số nguyên tố liên tiếp
bool canFormConsecutivePrimes(vector<int> arr) {
    // Nếu mảng rỗng hoặc chỉ có 1 phần tử thì trả về false
    if (arr.size() <= 1) return false;
    
    // Sắp xếp mảng tăng dần
    sort(arr.begin(), arr.end());
    
    // Kiểm tra phần tử đầu tiên có phải số nguyên tố
    if (!isPrime(arr[0])) return false;
    
    // Kiểm tra các phần tử liên tiếp
    for (int i = 0; i < arr.size() - 1; i++) {
        // Nếu phần tử hiện tại không phải số nguyên tố
        if (!isPrime(arr[i])) return false;
        // Nếu khoảng cách giữa 2 số liên tiếp không phải là 2
        if (arr[i+1] - arr[i] != 2) return false;
    }
    
    // Kiểm tra phần tử cuối cùng có phải số nguyên tố
    if (!isPrime(arr[arr.size()-1])) return false;
    
    return true;
}

int main() {
    // Ví dụ sử dụng
    vector<int> numbers1 = {3, 5, 7}; // Dãy số nguyên tố liên tiếp
    vector<int> numbers2 = {2, 4, 6}; // Không phải dãy số nguyên tố liên tiếp
    
    cout << "Mang 1: ";
    for (int num : numbers1) cout << num << " ";
    cout << endl;
    
    if (canFormConsecutivePrimes(numbers1))
        cout << "Co the sap xep thanh day so nguyen to lien tiep\n";
    else 
        cout << "Khong the sap xep thanh day so nguyen to lien tiep\n";
        
    cout << "\nMang 2: ";
    for (int num : numbers2) cout << num << " ";
    cout << endl;
    
    if (canFormConsecutivePrimes(numbers2))
        cout << "Co the sap xep thanh day so nguyen to lien tiep\n";
    else 
        cout << "Khong the sap xep thanh day so nguyen to lien tiep\n";
        
    return 0;
}

// VIẾT BẰNG C++

/* Giải thích chi tiết:

1. Hàm isPrime(n):
   - Kiểm tra một số có phải số nguyên tố hay không
   - Nếu n < 2 thì không phải số nguyên tố
   - Kiểm tra từ 2 đến căn bậc 2 của n, nếu n chia hết cho số nào thì không phải số nguyên tố

2. Hàm canFormConsecutivePrimes(arr):
   - Kiểm tra mảng có thể sắp xếp thành dãy số nguyên tố liên tiếp không
   - Nếu mảng rỗng hoặc chỉ có 1 phần tử thì trả về false
   - Sắp xếp mảng tăng dần
   - Kiểm tra phần tử đầu và cuối có phải số nguyên tố không
   - Kiểm tra khoảng cách giữa các số liên tiếp có bằng 2 không
   - Nếu tất cả điều kiện thỏa mãn thì trả về true

3. Hàm main():
   - Tạo 2 mảng để test:
     + Mảng 1: {3, 5, 7} là dãy số nguyên tố liên tiếp
     + Mảng 2: {2, 4, 6} không phải dãy số nguyên tố liên tiếp
   - In kết quả kiểm tra cho cả 2 mảng

Kết quả chạy chương trình:
Mang 1: 3 5 7
Co the sap xep thanh day so nguyen to lien tiep

Mang 2: 2 4 6  
Khong the sap xep thanh day so nguyen to lien tiep
*/
