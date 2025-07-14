#include <stdio.h>

// กรณีที่ 1: ใช้ static variable
void countCallStatic() {
    static int counter = 0; // ตัวแปร static ถูกเก็บค่าระหว่างการเรียกฟังก์ชัน
    counter++;
    printf("[Static] Call Function: Counter = %d\n", counter);
}

// กรณีที่ 2: ไม่ใช้ static variable
void countCallNonStatic() {
    int counter = 0; // ตัวแปร non-static ถูกรีเซ็ตทุกครั้งที่เรียกฟังก์ชัน
    counter++;
    printf("[Non-Static] Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n\n");

    printf("--- Non-Static Variable ---\n");
    countCallNonStatic();
    countCallNonStatic();
    countCallNonStatic();

    printf("\n--- Static Variable ---\n");
    countCallStatic();
    countCallStatic();
    countCallStatic();

    return 0;
}
// ผลลัพธ์ที่ได้ต่างกันอย่างไร เพราะเหตุใด?
// - กรณี static: ค่าของ counter จะเพิ่มขึ้นเรื่อย ๆ เพราะไม่ถูกรีเซ็ต
// - กรณี non-static: counter จะเริ่มที่ 0 ทุกครั้ง ทำให้แสดงผลเป็น 1 เสมอ

// ความแตกต่างของ Non-Static Variable?
// - ตัวแปร non-static จะอยู่ในหน่วยความจำชั่วคราว มีอายุแค่ในฟังก์ชันนั้น ๆ เท่านั้น

// อธิบายและสรุปผลที่ได้จากการทดลอง
// - ใช้ static เมื่อจำเป็นต้องเก็บสถานะข้ามการเรียกใช้งานฟังก์ชัน
// - ใช้ non-static เมื่อไม่ต้องการให้ค่าตัวแปรสะสม