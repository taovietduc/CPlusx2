// VIẾT BẰNG C++
// Bài 152: Tạo hàm tính tổng các phần tử lớn nhất và nhỏ nhất ở mỗi cấp độ của một cây nhị phân.

#include <iostream>
#include <queue> // Thư viện queue để lưu trữ các node ở mỗi level
#include <climits> // Thư viện climits để sử dụng giá trị max, min
using namespace std;

// Cấu trúc nút của cây nhị phân
struct Node 
{
    int data; // Giá trị của node                   
    Node* left; // Con trỏ đến node con trái
    Node* right; // Con trỏ đến node con phải
    
    Node(int val) 
    { // Constructor khởi tạo node với giá trị và con trỏ null
        data = val; // Giá trị của node
        left = right = nullptr; // Con trỏ đến node con trái và phải    
    }
};

// Hàm tính tổng max min ở mỗi level của cây
void sumMaxMinAtEachLevel(Node* root) 
{
    if (root == nullptr) 
    { // Nếu cây rỗng
        cout << "Cay rong!" << endl; // In ra màn hình
        return;
    }

    queue<Node*> q; // Khởi tạo queue để lưu trữ các node ở mỗi level
    q.push(root); // Thêm root vào queue

    while (!q.empty()) 
    {
        int levelSize = q.size();
        int maxVal = INT_MIN; // Khởi tạo giá trị max cho level hiện tại
        int minVal = INT_MAX; // Khởi tạo giá trị min cho level hiện tại
        
        // Duyệt qua các nút ở cùng một level
        for (int i = 0; i < levelSize; i++) 
        {
            Node* current = q.front(); // Lấy node đầu queue
            q.pop(); // Xóa node đầu queue
            
            // Cập nhật giá trị max và min
            maxVal = max(maxVal, current->data); // Cập nhật giá trị max
            minVal = min(minVal, current->data); // Cập nhật giá trị min
            
            // Thêm các nút con vào queue
            if (current->left) q.push(current->left); // Nếu node con trái khác null
            if (current->right) q.push(current->right); // Nếu node con phải khác null
        }
        
        // In kết quả cho level hiện tại
        cout << "Level sum (max + min): " << maxVal + minVal << endl;
    }
}

int main() 
{
    // Tạo cây nhị phân mẫu
    Node* root = new Node(10); // Khởi tạo root với giá trị 10
    root->left = new Node(2); // Thêm node con trái với giá trị 2
    root->right = new Node(15); // Thêm node con phải với giá trị 15
    root->left->left = new Node(1); // Thêm node con trái của node con trái với giá trị 1
    root->left->right = new Node(5); // Thêm node con phải của node con trái với giá trị 5
    root->right->left = new Node(12); // Thêm node con trái của node con phải với giá trị 12
    root->right->right = new Node(20); // Thêm node con phải của node con phải với giá trị 20   
    
    cout << "Tong max va min tai moi level:" << endl; // In ra màn hình
    sumMaxMinAtEachLevel(root); // Gọi hàm tính tổng max min tại mỗi level      
    
    return 0;   
}

/*
Giải thích chi tiết:

1. Cấu trúc Node:
   - data: giá trị của nút
   - left, right: con trỏ đến nút con trái và phải
   - Constructor khởi tạo nút với giá trị và con trỏ null

2. Hàm sumMaxMinAtEachLevel():
   - Sử dụng BFS (Breadth-First Search) với queue để duyệt từng level
   - Tại mỗi level:
     + Lưu số lượng nút của level hiện tại
     + Khởi tạo maxVal = INT_MIN, minVal = INT_MAX
     + Duyệt qua tất cả nút trong level:
       * Cập nhật max, min
       * Thêm các nút con vào queue
     + In tổng của max và min tại level đó

3. Hàm main():
   - Tạo cây nhị phân mẫu để test
   - Gọi hàm tính tổng max min tại mỗi level

4. Độ phức tạp:
   - Thời gian: O(n) với n là số nút trong cây
   - Không gian: O(w) với w là độ rộng lớn nhất của cây

5. Ví dụ cây nhị phân:
           10
         /    \
        2      15
       / \    /  \
      1   5  12   20

   Output:
   Level 0: 10 + 10 = 20
   Level 1: 2 + 15 = 17
   Level 2: 1 + 20 = 21
*/
