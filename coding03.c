#include <stdio.h>  // ใช้สำหรับฟังก์ชัน printf

int main() {
    char nameInitial = 'S';    //  ประกาศตัวแปรชนิดที่เหมาะสมกับค่าตัวอักษร → ใช้ char
    int age = 18;              //  ใช้ int สำหรับอายุซึ่งเป็นเลขจำนวนเต็ม
    float weight = 48.50;      //  ใช้ float สำหรับเลขทศนิยม 1 ตำแหน่ง
    char gender[] = "male";  //  ใช้ char array สำหรับข้อความเพศ (string)

    //  แสดงผลค่าทั้งหมดด้วย printf
    printf("nameInitial = %c\n", nameInitial);  
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;  //  จบโปรแกรมอย่างถูกต้อง ไม่เกิด error
}
