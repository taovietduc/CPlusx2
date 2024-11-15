// VIẾT BẰNG C++
// Bài 145: Tạo hàm tìm mảng con liên tiếp dài nhất có tổng bằng 0 trong danh sách.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Hàm tìm mảng con liên tiếp dài nhất có tổng bằng 0
vector<int> findLongestZeroSumSubarray(vector<int>& arr) 
{
    // Lưu trữ tổng tích lũy và chỉ số tương ứng
    unordered_map<int, int> sumMap;
    
    int sum = 0; // Tổng tích lũy
    int maxLen = 0; // Độ dài lớn nhất
    int startIndex = -1; // Chỉ số bắt đầu của mảng con
    
    // Thêm tổng = 0 tại chỉ số -1 để xử lý trường hợp mảng con bắt đầu từ index 0
    sumMap[0] = -1;
    
    for(int i = 0; i < arr.size(); i++) 
    {
        sum += arr[i];
        
        // Nếu tổng này đã xuất hiện trước đó
        if(sumMap.find(sum) != sumMap.end()) 
        {
            // Kiểm tra độ dài mảng con hiện tại
            int currLen = i - sumMap[sum]; 
            if(currLen > maxLen) // Nếu độ dài mảng con hiện tại lớn hơn maxLen
            {
                maxLen = currLen;
                startIndex = sumMap[sum] + 1; // Cập nhật chỉ số bắt đầu của mảng con
            }
        }
        else 
        {
            // Lưu tổng mới vào map
            sumMap[sum] = i;
        }
    }
    
    // Trả về mảng con có tổng bằng 0 dài nhất
    vector<int> result;
    if(startIndex != -1) // Nếu chỉ số bắt đầu khác -1
    {
        for(int i = startIndex; i < startIndex + maxLen; i++) 
        // Duyệt từ chỉ số bắt đầu đến chỉ số bắt đầu + maxLen
        {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() 
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, -23}; // Mảng ban đầu 
    
    cout << "Mang ban dau: "; // In mảng ban đầu 
    for(int x : arr) cout << x << " "; // In các phần tử của mảng 
    cout << endl;
    
    vector<int> result = findLongestZeroSumSubarray(arr);
    
    if(result.empty()) // Nếu mảng kết quả rỗng  
    {
        cout << "Khong tim thay mang con nao co tong bang 0" << endl; 
        // In kết quả không tìm thấy mảng con nào có tổng bằng 0
    }
    else 
    {
        cout << "Mang con dai nhat co tong bang 0: "; // In mảng con dài nhất có tổng bằng 0
        for(int x : result) cout << x << " "; // In các phần tử của mảng con        
        cout << endl;
    }
    
    return 0;
}

// Kết quả chạy chương trình:
// Mang ban dau: 15 -2 2 -8 1 7 10 -23 
// Mang con dai nhat co tong bang 0: -2 2 -8 1 7 