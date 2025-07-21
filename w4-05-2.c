#include <stdio.h>


void countCall();

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call!\n");
    countCall();
    return 0;
}

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call function counter = %d\n", counter);
}
// ค่าของ counter ถูกเก็บไว้ระหว่างการเรียกใช้ฟั่งก์ชั่น สามารถนับจำนวนครั้งที่เรียกใช้ฟั่งก์ชั่นได้เพราะเป็น static
