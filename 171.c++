// Viết Bằng C++
// Bài 171: Viết hàm sắp xếp danh sách các số nhưng chỉ di chuyển các số nguyên tố.

#include <iostream> 
#include <vector>
#include <algorithm>  // thư viện sắp xếp mảng
using namespace std;

bool isPrime(int n) { // kiểm tra số nguyên tố
    if (n < 2) return false; // nếu n < 2 thì không phải số nguyên tố
    for (int i = 2; i * i <= n; ++i) { // kiểm tra từ 2 đến căn bậc 2 của n
        if (n % i == 0) return false; // nếu n chia hết cho i thì không phải số nguyên tố
    }
    return true;
}

vector<int> sortPrimesOnly(vector<int> nums) { // sắp xếp các số nguyên tố
    vector<int> primes; // mảng chứa các số nguyên tố
    for (int num : nums) { // duyệt qua từng số trong mảng
        if (isPrime(num)) primes.push_back(num); // nếu là số nguyên tố thì thêm vào mảng primes
    }

    sort(primes.begin(), primes.end()); // sắp xếp mảng primes
    int primeIndex = 0; // chỉ số của mảng primes

    for (int& num : nums) { // duyệt qua từng số trong mảng
        if (isPrime(num)) { // nếu là số nguyên tố
            num = primes[primeIndex++]; // gán số nguyên tố từ mảng primes vào mảng nums
        }
    }
    return nums; // trả về mảng nums
}

int main() {
    vector<int> nums = {11, 4, 7, 8, 3, 10, 2}; // mảng số ban đầu 
    vector<int> sorted = sortPrimesOnly(nums); // sắp xếp mảng số nguyên tố

    for (int num : sorted) { // duyệt qua từng số trong mảng đã sắp xếp
        cout << num << " "; // in ra m
    }
    // Output: 2 4 3 8 7 10 11
    return 0;
}
