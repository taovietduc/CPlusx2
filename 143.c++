// VIẾT BẰNG C++
// Bài 143: Tạo hàm tìm tất cả các cặp số trong danh sách có tổng bằng một số cho trước.

#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm tất cả các cặp số có tổng bằng target_sum
void findPairsWithSum(vector<int> arr, int target_sum) 
{
    cout << "Cac cap so co tong bang " << target_sum << " la:\n";
    
    // Duyệt qua từng cặp số trong mảng
    for(int i = 0; i < arr.size(); i++) 
    {
        // Chỉ xét các phần tử phía sau i để tránh lặp lại cặp số
        for(int j = i + 1; j < arr.size(); j++) 
        {
            // Nếu tổng bằng target_sum thì in ra cặp số
            if(arr[i] + arr[j] == target_sum) 
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }
}

int main() 
{
    // Khởi tạo vector chứa dãy số
    vector<int> numbers = {2, 4, 3, 5, 7, 8, 9};
    int target = 12;
    
    // In ra dãy số ban đầu
    cout << "Danh sach cac so: ";
    for(int num : numbers) 
    {
        cout << num << " ";
    }
    cout << endl;
    
    // Gọi hàm tìm các cặp số
    findPairsWithSum(numbers, target);
    
    return 0;
}

// Kết quả chạy chương trình:
// Danh sach cac so: 2 4 3 5 7 8 9
// Cac cap so co tong bang 12 la:
// (3, 9)
// (4, 8)
// (5, 7)

// Giải thích:
// 1. Hàm findPairsWithSum nhận vào một vector số nguyên và số target cần tìm tổng
// 2. Sử dụng 2 vòng lặp lồng nhau để duyệt qua từng cặp số trong mảng
// 3. Vòng lặp trong bắt đầu từ i+1 để tránh so sánh một số với chính nó và tránh lặp lại các cặp
// 4. Khi tìm thấy cặp số có tổng bằng target thì in ra màn hình
// 5. Kết quả cho thấy có 3 cặp số thỏa mãn: (3,9), (4,8), (5,7)



