// VIẾT BẰNG C++
// Bài 53: Sắp xếp từ điển theo giá trị.

#include <iostream>
#include <map> // Thư viện map 
using namespace std;

// Hàm để sắp xếp theo giá trị
void sortByValue(pair<string, int>* arr, int n)  // Sắp xếp theo giá trị của từ điển 
{
    for (int i = 0; i < n - 1; i++)  // Sắp xếp từng cặp giá trị 
    {
        for (int j = i + 1; j < n; j++)  // So sánh giá trị của từng cặp
        {
            if (arr[i].second > arr[j].second)  // Nếu giá trị của cặp sau nhỏ hơn cặp trước
            {
                swap(arr[i], arr[j]); // Đổi chỗ 2 cặp giá trị
            }
        }
    }
}

int main() 
{
    // Tạo một map để lưu từ điển
    map<string, int> tu_dien; // Tạo một map để lưu từ điển 

    // Nhập số lượng phần tử trong từ điển
    int n;
    cout << "Nhập số lượng phần tử trong từ điển: ";
    cin >> n;

    // Nhập từng cặp khóa và giá trị vào từ điển
    for (int i = 0; i < n; i++)  // Nhập từng cặp khóa và giá trị vào từ điển 
    {
        string khoa;
        int gia_tri; // Khai báo biến khoa và giá trị
        cout << "Nhập khóa thứ " << i + 1 << ": ";
        cin >> khoa;
        cout << "Nhập giá trị cho khóa '" << khoa << "': "; 
        cin >> gia_tri;
        tu_dien[khoa] = gia_tri; // Gán giá trị cho từ điển 
    }

    // Chuyển map thành mảng động để sắp xếp
    pair<string, int>* arr = new pair<string, int>[n]; // Tạo một mảng động để lưu từ điển 
    int index = 0;  

    // Chuyển từ map sang mảng động
    for (const auto& item : tu_dien)  // Chuyển từ map sang mảng động
    {
        arr[index++] = item; // Gán giá trị từ map sang mảng động 
    }

    // Sắp xếp mảng động theo giá trị
    sortByValue(arr, n); // Sắp xếp mảng động theo giá trị

    // In từ điển đã sắp xếp
    cout << "Từ điển sau khi sắp xếp theo giá trị:" << endl;
    for (int i = 0; i < n; i++)  // In từ điển đã sắp xếp
    {
        cout << arr[i].first << ": " << arr[i].second << endl;
    }

    // Giải phóng bộ nhớ mảng động
    delete[] arr; // Giải phóng bộ nhớ mảng động

    return 0;
}
