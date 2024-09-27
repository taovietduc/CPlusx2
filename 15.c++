// VIẾT BẰNG C++
// In bảng cửu chương từ 1 đến 9

#include <iostream  >
using namespace std;

int main() 
{
    for (int i = 1; i <= 9; i++) 
    {
        cout << "Bảng cửu chương " << i << ":" << endl;
        for (int j = 1; j <= 10; j++) 
         {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;  // In dòng trống giữa các bảng
    }
    return 0;
}
