# KPL Compiler (LAB07)

## Chức năng chính
- **Đọc và phân tích mã nguồn KPL**: Sử dụng các module `reader`, `scanner`, và `parser` để đọc file nguồn, phân tích từ vựng và cú pháp.
- **Kiểm tra ngữ nghĩa**: Module `semantics` kiểm tra các quy tắc ngữ nghĩa như kiểu dữ liệu, khai báo biến, hàm, tham số, và kiểm tra sự nhất quán kiểu trong các phép gán, biểu thức, điều kiện, tham số hàm/thủ tục.
- **Quản lý bảng ký hiệu**: Module `symtab` xây dựng và quản lý bảng ký hiệu cho các đối tượng như biến, hằng, kiểu, hàm, thủ tục, chương trình.
- **Xử lý lỗi**: Module `error` cung cấp các mã lỗi và hàm thông báo lỗi khi phát hiện các lỗi cú pháp hoặc ngữ nghĩa.
- **Debug và kiểm tra**: Module `debug` hỗ trợ in bảng ký hiệu và các đối tượng để kiểm tra quá trình phân tích.

## Cách giải quyết
- **Phân tích từ vựng**: Sử dụng bộ phân tích từ vựng (`scanner.c`) để nhận diện các token từ file nguồn.
- **Phân tích cú pháp**: Sử dụng bộ phân tích cú pháp (`parser.c`) để xây dựng cây cú pháp và kiểm tra cấu trúc chương trình theo ngữ pháp KPL.
- **Kiểm tra ngữ nghĩa**: Trong quá trình phân tích cú pháp, các hàm kiểm tra ngữ nghĩa được gọi để đảm bảo các quy tắc về kiểu dữ liệu, khai báo, và sử dụng biến/hàm/thủ tục đúng chuẩn.
- **Quản lý phạm vi và bảng ký hiệu**: Khi vào/ra các khối lệnh, hàm, thủ tục, chương trình sẽ cập nhật phạm vi và bảng ký hiệu tương ứng.
- **Xử lý lỗi**: Khi phát hiện lỗi, chương trình sẽ thông báo chi tiết vị trí và loại lỗi để người dùng dễ dàng sửa chữa.

## Hướng dẫn sử dụng
1. **Biên dịch dự án**:
   ```sh
   make
   ```
2. **Chạy trình biên dịch với file nguồn KPL**:
   ```sh
   ./kplc tests/example1.kpl
   ```
3. **Kiểm tra kết quả**:
   - Nếu không có lỗi, chương trình sẽ in bảng ký hiệu của chương trình nguồn.
   - Nếu có lỗi, thông báo lỗi sẽ hiển thị chi tiết vị trí và loại lỗi.

## Cấu trúc thư mục
- `charcode.*`, `reader.*`, `scanner.*`, `parser.*`, `semantics.*`, `symtab.*`, `token.*`, `error.*`, `debug.*`: Các module chức năng của trình biên dịch.
- `tests/`: Chứa các file ví dụ mã nguồn KPL để kiểm tra trình biên dịch.
- `Makefile`: Tập tin build dự án.

