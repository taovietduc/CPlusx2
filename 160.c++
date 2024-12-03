// Viết Bằng C++
// Bài 160: Viết hàm chuyển đổi một chuỗi từ định dạng camelCase sang snake_case.

#include <iostream>
#include <string>
using namespace std;

// Hàm chuyển đổi từ camelCase sang snake_case
string camelToSnake(string camelCase) {
    string snakeCase = "";
    
    // Xử lý từng ký tự trong chuỗi
    for (int i = 0; i < camelCase.length(); i++) {
        char currentChar = camelCase[i];
        
        // Nếu là chữ hoa và không phải ký tự đầu tiên
        if (isupper(currentChar) && i > 0) {
            // Thêm dấu gạch dưới trước chữ hoa
            snakeCase += '_';
            // Chuyển chữ hoa thành chữ thường
            snakeCase += tolower(currentChar);
        }
        // Nếu là ký tự thường hoặc ký tự đầu tiên
        else {
            snakeCase += tolower(currentChar);
        }
    }
    
    return snakeCase;
}

int main() {
    string camelCase;
    cout << "Nhap chuoi camelCase: ";
    getline(cin, camelCase);
    
    string snakeCase = camelToSnake(camelCase);
    cout << "Chuoi snake_case: " << snakeCase << endl;
    
    return 0;
}

/*
Giải thích chi tiết:

1. Hàm camelToSnake(string camelCase):
   - Input: chuỗi ở định dạng camelCase
   - Output: chuỗi đã chuyển sang định dạng snake_case

2. Các bước thực hiện:
   a) Khởi tạo chuỗi kết quả snakeCase rỗng
   
   b) Duyệt qua từng ký tự trong chuỗi camelCase:
      - Nếu gặp chữ hoa và không phải ký tự đầu tiên:
        + Thêm dấu gạch dưới '_' vào trước
        + Chuyển chữ hoa thành chữ thường rồi thêm vào
      - Nếu là ký tự thường hoặc ký tự đầu tiên:
        + Thêm trực tiếp vào kết quả (đã chuyển thành chữ thường)

3. Ví dụ:
   - Input: "camelCase" -> Output: "camel_case"
   - Input: "thisIsAVariable" -> Output: "this_is_a_variable"
   - Input: "ABC" -> Output: "a_b_c"
*/
