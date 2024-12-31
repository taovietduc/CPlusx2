// Viết Bằng C++
// Bài 189: Tạo hàm tìm tất cả các số Smith trong một khoảng.

#include <iostream>
#include <vector> // thư viện vector để sử dụng mảng vector
#include <cmath> // thư viện cmath để sử dụng hàm sqrt
using namespace std;

vector<int> primeFactors(int n) { // hàm tìm tất cả các ước số nguyên tố của một số
    vector<int> factors; // khởi tạo mảng factors chứa các ước số nguyên tố
    for (int i = 2; i * i <= n; ++i) { // vòng lặp for với điều kiện i * i <= n
        while (n % i == 0) { // vòng lặp while với điều kiện n chia hết cho i
            factors.push_back(i); // thêm ước số nguyên tố i vào mảng factors
            n /= i;  // chia n cho i
        }
    }
    if (n > 1) factors.push_back(n); // nếu n > 1 thì thêm n vào mảng factors
    return factors; // trả về mảng factors
}

bool isSmith(int number) { // hàm kiểm tra xem một số có phải là số Smith không
    if (number < 2) return false; // nếu số nhỏ hơn 2 thì không phải là số Smith
    vector<int> factors = primeFactors(number); // tìm tất cả các ước số nguyên tố của số number
    if (factors.size() == 1) return false; // Not composite

    int digitSum = 0, temp = number; 
    // khởi tạo biến digitSum bằng 0 và biến temp bằng number
    while (temp > 0) { // vòng lặp while với điều kiện temp > 0
        digitSum += temp % 10; // cộng phần tử cuối cùng của temp vào digitSum
        temp /= 10; // chia temp cho 10
    }

    int factorDigitSum = 0; // khởi tạo biến factorDigitSum bằng 0
    for (int factor : factors) { // duyệt qua từng ước số nguyên tố trong mảng factors
        while (factor > 0) { // vòng lặp while với điều kiện factor > 0
            factorDigitSum += factor % 10; // cộng phần tử cuối cùng của factor vào factorDigitSum
            factor /= 10; // chia factor cho 10
        }
    }
    return digitSum == factorDigitSum; // trả về kết quả digitSum bằng factorDigitSum hay không
}

vector<int> findSmithNumbers(int start, int end) { // hàm tìm tất cả các số Smith trong một khoảng
    vector<int> smithNumbers; // khởi tạo mảng smithNumbers chứa các số Smith
    for (int i = start; i <= end; ++i) { // vòng lặp for từ start đến end
        if (isSmith(i)) { // nếu số i là số Smith thì thêm i vào mảng smithNumbers
            smithNumbers.push_back(i); // thêm số i vào mảng smithNumbers
        }
    }
    return smithNumbers;
}

int main() {
    int start = 4, end = 100; // khoảng cần tìm số Smith từ start đến end
    vector<int> smithNumbers = findSmithNumbers(start, end); 
    // tìm tất cả các số Smith trong khoảng start đến end
    cout << "Smith numbers between " << start << " and " << end << ": ";
    for (int num : smithNumbers) { // duyệt qua từng số trong mảng smithNumbers
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

// Kết quả:
// Smith numbers between 4 and 100: 4 22 27 58 85 94.
// Giải thích: Các số Smith từ 4 đến 100 là 4, 22, 27, 58, 85 và 94.
// Ví dụ: 22 = 2 + 2 = 4, 2 * 11 = 22.
// Ví dụ: 27 = 2 + 7 = 9, 3 * 9 = 27.
// Ví dụ: 58 = 5 + 8 = 13, 2 * 29 = 58.
// Ví dụ: 85 = 8 + 5 = 13, 5 * 17 = 85.
