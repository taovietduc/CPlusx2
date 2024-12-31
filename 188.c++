// Viết Bằng C++
// Bài 188: Viết hàm kiểm tra xem một số có phải là số Harshad không.

#include <iostream>
using namespace std;

bool isHarshad(int number) { // hàm kiểm tra xem một số có phải là số Harshad không 
    int sum = 0, temp = number; // khởi tạo biến sum bằng 0 và biến temp bằng number
    while (temp > 0) { // vòng lặp while với điều kiện temp > 0 
        sum += temp % 10; // cộng phần tử cuối cùng của temp vào sum
        temp /= 10; // chia temp cho 10
    }
    return number % sum == 0; // trả về kết quả số number chia hết cho sum hay không
}

int main() {
    int number = 18; // số cần kiểm tra có phải là số Harshad không
    cout << "Is " << number << " a Harshad number? " << (isHarshad(number) ? "Yes" : "No") << endl;
    return 0; // kết thúc chương trình
}

// Kết quả:
// Is 18 a Harshad number? Yes.
// Giải thích: 18 chia hết cho 1 + 8 = 9.
// Vậy 18 là số Harshad.