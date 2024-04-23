# Hướng Dẫn Cài Đặt file debug.h

**Các bước tôi hướng dẫn ở đây đang áp dụng cho WINDOW còn MAC thì tương tự nhé**

### Bước 1:
- Đầu tiên bạn cần phải bạn tạo file debug.h đặt ở folder tùy ý bạn và bạn cần lưu lại đường dẫn của folder này
<img src="https://i.imgur.com/HPDkHvn.png">

- Sao chép file debug.h trong github [Cài Đặt](https://github.com/Khong-cam-xuc/CODE_T/tree/main/C%C3%A0i%20%C4%90%E1%BA%B7t) rồi copy vào file debug.h của bạn

### Bước 2:
- Bạn vào file 'sublime-build' của bạn
- Sau đó bạn thêm '-I{Đường dẫn của folder của file debug.h}' vào trong shell_cmd
<img src="https://i.imgur.com/TJQ5KEF.png">

### Bước 3: 
- Sau đó bạn chỉ cần là thêm:

```
#ifndef ONLINE_JUNGE
#include "debug.h"
#else
#define debug(x...)
#endif
```
vào chương trình cpp rồi sử dụng bình thường

<img src="https://i.imgur.com/IbLsAQt.png">

## Nguồn: 
https://codeforces.com/blog/entry/99946 and https://codeforces.com/blog/entry/68809