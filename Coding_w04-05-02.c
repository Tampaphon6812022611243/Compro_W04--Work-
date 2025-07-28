#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

//Non-Static Variable  ค่า Counter จะเป็น 1 เสมอ (1, 1) เพราะ int counter = 0; เป็นตัวแปรปกติในฟังก์ชัน พอมันถูกเรียกใหม่ ตัวแปรนี้ก็จะเกิดใหม่และเริ่มที่ 0 ทุกครั้ง
//สรุป Non-Static: เหมือนของใช้แล้วทิ้ง พอฟังก์ชันทำงานเสร็จ มันก็หายไป พอเรียกใหม่ก็เริ่มนับ 1 ใหม่ทุกครั้ง