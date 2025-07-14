#include <stdio.h>

// Global constant
const int GLOBAL_RATE = 10;

void calculate() {
    // Local constant
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    // GLOBAL_RATE เป็น global constant ใช้ใน main() ได้
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // LOCAL_BONUS เป็น local constant ใช้ใน main() ไม่ได้ (จะเกิด compile-time error)
    // Uncomment บรรทัดด้านล่างเพื่อดู error
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

    return 0;
}

/*
----------------------------
สรุปผลจากการทดลอง:
// GLOBAL_RATE ถูกประกาศแบบ global ทำให้สามารถใช้ได้ทุกที่ในโปรแกรม รวมถึง main() ด้วย
// LOCAL_BONUS ถูกประกาศแบบ local ในฟังก์ชัน calculate() ทำให้ใช้ได้เฉพาะในฟังก์ชันนั้นเท่านั้น
// เมื่อพยายามใช้ LOCAL_BONUS ใน main() จะทำให้เกิด compile-time error เพราะไม่อยู่ใน scope
// การใช้ const ช่วยป้องกันการเปลี่ยนแปลงค่าคงที่โดยไม่ตั้งใจ ทำให้โปรแกรมมีความปลอดภัยและอ่านง่ายมากขึ้น
----------------------------
*/
