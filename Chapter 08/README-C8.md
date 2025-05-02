# Chapter : 8 - ตัวแปรแบบแถวลำดับและตัวแปรแบบโครงสร้าง

## Chapter : 8 - item : 1 - Array 1 dimension

รับข้อมูลจำนวนเต็ม 10 จำนวน แล้ว แสดงผลเรียงจากน้อยไปมาก
แสดงผลตามตัวอย่าง

<img width="696" alt="Screen Shot 2568-05-02 at 20 51 24" src="https://github.com/user-attachments/assets/6fc00856-9fe2-4e96-a0f7-b4d48c7d4051" />

<img width="696" alt="Screen Shot 2568-05-02 at 20 51 37" src="https://github.com/user-attachments/assets/3496214f-0c93-4b83-bb74-dc535c08b80e" />

---

## Chapter : 8 - item : 2 - Array 2 dimensions

กำหนด

```
int num[8][10] = { 2, 3, 5, 7, 11, 13, 17, 19, 29, 31,
37, 41, 43, 37, 61, 71, 73, 79, 83, 97,
103, 107, 109, 113, 131, 151, 181, 191, 193, 173,
163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
2, 4, 6, 6, 10, 12, 14, 16, 18, 20,
1, 3, 5, 7, 9, 11, 13, 17, 19, 21,
163, 113, 102, 107, 127, 137, 257, 139, 149, 369 }
```

เขียนโปรแกรม รับค่าตัวเลข แล้วแสดงตำแหน่ง row, column ดังตัวอย่าง
ถ้า ตัวเลขที่ป้อนเข้ามาไม่มีใน ให้แสดง NOT FOUND!

<img width="696" alt="Screen Shot 2568-05-02 at 20 51 54" src="https://github.com/user-attachments/assets/37b52a12-38b1-4bc2-a411-382409f0d7b4" />

<img width="697" alt="Screen Shot 2568-05-02 at 20 52 11" src="https://github.com/user-attachments/assets/6d58910c-1a88-4966-9c0a-14d8a9b96304" />

<img width="696" alt="Screen Shot 2568-05-02 at 20 52 23" src="https://github.com/user-attachments/assets/3ebd6398-47d6-4a96-887a-952e563955a7" />

<img width="697" alt="Screen Shot 2568-05-02 at 20 52 39" src="https://github.com/user-attachments/assets/4e29a412-80e4-41dc-b887-4a7b7a7a9ab7" />

---

## Chapter : 8 - item : 3 - ผลต่างมากสุดของจำนวนที่ติดกัน v1

รับจำนวนเต็ม 10 จำนวน
แล้วตรวจสอบว่า ผลต่างของจำนวนติดกัน มีค่ามากที่สุดเท่าไหร่
แนวทางการแก้ไขปัญหา

1. นำข้อมูลในอาร์เรย์ตัวปัจจุบัน - ตัวถัดไป โดยไม่คิดเครื่องหมาย อาจใช้ฟังก์ชัน abs() ใน math.h หรือใช้การตรวจสอบหากมีค่าน้อยกว่า 0 ให้คูณด้วย -1 แล้วเก็บค่าที่มากที่สุดไว้ โดยเปรียบเทียบค่าที่ได้ กับตัวแปรที่เก็บค่ามากที่สุด
2. ทำตามในข้อ 1 จนถึงตำแหน่งของอาร์เรย์ตำแหน่งรองสุดท้าย คือตำแหน่งที่ 8
3. แสดงผลตามตัวอย่าง

<img width="697" alt="Screen Shot 2568-05-02 at 20 52 56" src="https://github.com/user-attachments/assets/d0fd91f2-0397-4413-8512-e9309c61a7bd" />

---

## Chapter : 8 - item : 4 - structure array 1

เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้
เลขประจำตัว ชื่อ คะแนน

แล้วคำนวณ หา ค่าเฉลี่ย คะแนนต่ำสุด คะแนนสูงสุด
แล้วแสดงผลออกมาตามตัวอย่าง

```c
#include<stdio.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max,i_min;
    float average=0,sum=0;
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */

    // find max marking
    i_max=0;

    // find min marking
    i_min=0;

    //calculate average

    average = sum/SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n",average);
    printf("Min -- Max      = %d --> %d\n",st[i_min].marking,st[i_max].marking);

    return 0;
}
```

<img width="699" alt="Screen Shot 2568-05-02 at 20 53 12" src="https://github.com/user-attachments/assets/fdfca9a2-e8cd-4901-b278-2d44591ab587" />

---

## Chapter : 8 - item : 5 - structure array 2

เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้
เลขประจำตัว ชื่อ คะแนน

แล้วหาว่า มีกี่คนได้คะแนนสูงสุด ใครบ้าง
แล้วแสดงผลออกมาตามตัวอย่าง

<img width="695" alt="Screen Shot 2568-05-02 at 20 53 26" src="https://github.com/user-attachments/assets/fc5bceec-62a9-4a53-b0ed-024f45873afa" />

<img width="700" alt="Screen Shot 2568-05-02 at 20 53 36" src="https://github.com/user-attachments/assets/f4a2d620-8765-4b43-b4b0-b0614ad1c804" />

---
