#include <stdio.h>

const int GLOBAL_RATE = 10; // ค่าคงที่ระดับ Global

void calculate() {
  const int LOCAL_BONUS = 50; // ค่าคงที่ระดับ Local
  printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
  printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
  calculate();
  printf("GLOBAL_RATE from main = %d\n", GLOBAL_RATE); // แสดงค่า Global rate จาก main

  // ลองพยายามพิมพ์ LOCAL_BONUS ใน main - จะทำให้เกิด compile-time error
  // หากต้องการทดสอบ ให้ลบคอมเมนต์บรรทัดด้านล่างออก
  // printf("LOCAL_BONUS from main = %d\n", LOCAL_BONUS); 

  return 0;
  }

//GLOBAL_RATE ค่าคงที่ที่ใช้ได้ ทั่วโปรแกรม LOCAL_BONUS ค่าคงที่ที่ใช้ได้ แค่ในฟังก์ชัน calculate() เท่านั้น
//ถ้าพยายามเปลี่ยนค่า จะเกิด "เออเรอร์" (ข้อผิดพลาด) ตอนที่เราคอมไพล์โปรแกรม เพราะเราบอกโปรแกรมแล้วว่านี่คือ "ค่าคงที่" ห้ามเปลี่ยน
//ทำไม LOCAL_BONUS ใช้ใน main() ไม่ได้: เพราะ LOCAL_BONUS มัน "ซ่อนอยู่" ในฟังก์ชัน calculate() เท่านั้น ฟังก์ชัน main() มองไม่เห็นมัน
//มีค่าคงที่แบบ Global (ทั่วโลก) ที่ใช้ได้ทุกที่ในโปรแกรม
//* มีค่าคงที่แบบ Local (ในพื้นที่) ที่ใช้ได้เฉพาะในบล็อกโค้ดหรือฟังก์ชันที่มันถูกประกาศเท่านั้น