// VIẾT BẰNG C++
// Bài 140: Tạo hàm tính tổng các số chẵn trong một khoảng.

#include <iostream>

using namespace std;

int sumEvenInRange(int start, int end) // hàm tính tổng các số chẵn trong một khoảng từ start đến end 
{
    int total = 0; // khởi tạo biến tổng = 0 
    for (int num = start; num <= end; ++num)  // duyệt từ start đến end 
    {
        if (num % 2 == 0)  // nếu num chia hết cho 2 thì là số chẵn 
        {
            total += num; // cộng số chẵn vào tổng 
        }
    }
    return total; // trả về tổng các số chẵn 
}

int main() 
{
    int start = 1, end = 10; // khởi tạo giá trị start và end 
    cout << "Tổng các số chẵn từ " << start << " đến " << end << " là: " << sumEvenInRange(start, end) << endl; 
    // in ra tổng các số chẵn từ start đến end
    return 0;
}

// Output: Tổng các số chẵn từ 1 đến 10 là: 30
// Như vậy tổng các số chẵn từ 1 đến 10 là 30