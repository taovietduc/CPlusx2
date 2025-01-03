// Viết Bằng C++
// Bài 195: Viết hàm sắp xếp danh sách bằng thuật toán Merge Sort.

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) { 
// Hàm merge 2 mảng con đã sắp xếp thành một mảng đã sắp xếp
    int n1 = mid - left + 1, n2 = right - mid; // Tính kích thước của 2 mảng con
    vector<int> L(n1), R(n2); // Khởi tạo 2 mảng con L và R

    for (int i = 0; i < n1; ++i) L[i] = arr[left + i];  // Sao chép dữ liệu từ mảng arr sang mảng L
    for (int i = 0; i < n2; ++i) R[i] = arr[mid + 1 + i]; // Sao chép dữ liệu từ mảng arr sang mảng R
 
    int i = 0, j = 0, k = left; // Khởi tạo các biến i, j, k
    while (i < n1 && j < n2) { // Trộn 2 mảng con L và R vào mảng arr
        if (L[i] <= R[j]) arr[k++] = L[i++]; // So sánh từng phần tử của 2 mảng con
        else arr[k++] = R[j++]; // Gán phần tử nhỏ hơn vào mảng arr
    }

    while (i < n1) arr[k++] = L[i++]; // Sao chép các phần tử còn lại của mảng L vào mảng arr
    while (j < n2) arr[k++] = R[j++]; // Sao chép các phần tử còn lại của mảng R vào mảng arr
}

void mergeSort(vector<int> &arr, int left, int right) { // Hàm sắp xếp mảng arr từ vị trí left đến right
    if (left < right) { // Nếu mảng có nhiều hơn 1 phần tử
        int mid = left + (right - left) / 2; // Tìm vị trí giữa của mảng
        mergeSort(arr, left, mid); // Sắp xếp mảng con bên trái
        mergeSort(arr, mid + 1, right); // Sắp xếp mảng con bên phải
        merge(arr, left, mid, right); // Trộn 2 mảng con đã sắp xếp
    }
}

int main() { // Hàm main để kiểm tra hàm mergeSort
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10}; // Khởi tạo mảng arr
    mergeSort(arr, 0, arr.size() - 1); // Sắp xếp mảng arr từ vị trí 0 đến vị trí cuối cùng
    for (int num : arr) cout << num << " "; // In ra mảng sau khi sắp xếp 
    cout << endl; 
    return 0; 
}
