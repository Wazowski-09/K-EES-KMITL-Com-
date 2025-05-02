# Chapter : 1 - การเขียนโปรแกรมภาษาซีเบื้องต้น

## Chapter : 1 - item : 1 - แสดงผลตามตัวอย่าง 1

ให้นักศึกษาส่ง โปรแกรม HelloKMITL.c ซึ่งมีข้อมูลดังนี้

```c
#include<stdio.h>
int main() {
	printf("Hello, KMITL!\n");

	return 0;
}
```

นามสกุลของไฟล์ ต้องเป็น .c เท่านั้น
ถ้านามสกุลเป็น .cpp ให้ทำการ rename ก่อนส่ง

**Output :**

```
Hello, KMITL!
```

<img width="729" alt="Screen Shot 2568-05-02 at 15 45 04" src="https://github.com/user-attachments/assets/b6a2dc8c-a24d-4cff-95b7-4807ab9933cc" />

---

## Chapter : 1 - item : 2 - แสดงผลตามตัวอย่าง 2

ให้นักศึกษาเขียนโปรแกรมแสดงผลตามตัวอย่าง

- บรรทัดแรก แสดงผล Hello, Ladkrabang.
- บรรทัดที่สอง แสดงผล Hello, KMITL.
- บรรทัดที่สาม แสดงผล Hello, Bangkok.
- บรรทัดที่สี่ แสดงผล Hello, Thailand.

**Output :**

```
Hello, Ladkrabang.
Hello, KMITL.
Hello, Bangkok.
Hello, Thailand.
```

<img width="731" alt="Screen Shot 2568-05-02 at 18 16 02" src="https://github.com/user-attachments/assets/1408a5d8-d965-43e0-b7f6-6f15eb99e809" />

---

## Chapter : 1 - item : 3 - แสดงผลตามตัวอย่าง 3

ให้นักศึกษา เขียนโปรแกรมแสดงผลตามตัวอย่างที่กำหนดให้

- มีจำนวนทั้งหมด 6 บรรทัด
- บรรทัดที่ 4-6 ห้ามใช้ space
- ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน ในข้อนี้

**Output :**

```
Hello, world!
Hello, Ladkrabang
Hello, Computer Programming
one     two     three   four    five    Hallelujah
12345678        12345678        12345678        12345678        12345678
        12345678        12345678        12345678        12345678        12345678
```

<img width="733" alt="Screen Shot 2568-05-02 at 18 16 19" src="https://github.com/user-attachments/assets/ea0d2474-4925-4733-bad3-3397722cf261" />

---

## Chapter : 1 - item : 4 - แสดงผลตามตัวอย่าง 4

แสดงผลตามตัวอย่าง

- มีจำนวน 6 บรรทัด
- บรรทัดแรก แสดง 1234567890 จำนวน 8 ครั้ง
- บรรทัดที่สอง แสดง \* จำนวน 10 ตัวอักษรดังตัวอย่าง
- บรรทัดที่สาม แสดง Hello, KMITL!
- บรรทัดที่สี่ แสดง Hello, Ladkrabang.
- บรรทัดที่ห้า แสดง Hello, Computer Programming.
- บรรทัดที่หก แสดง ตัวอักษรให้ถูกต้อง โดยใช้ \t ภายใน format string ห้ามมีช่องว่าง (space)

**Output :**

```
12345678901234567890123456789012345678901234567890123456789012345678901234567890
*       *       *       *       *       *       *       *       *       *
Hello, KMITL!
Hello, Ladkrabang.
Hello, Computer Programming.
one     two     three   four    five    Hallelujah
```

<img width="730" alt="Screen Shot 2568-05-02 at 18 16 39" src="https://github.com/user-attachments/assets/ea928599-2ddb-44f3-968d-5175ccbcf752" />

---

## Chapter : 1 - item : 5 - แสดงผลตามตัวอย่าง 5

แสดงผลตามตัวอย่าง 5 (ขนาดของหน้าจอ คือ 80 คอลัมน์ 25 แถว)

- จำนวนทั้งหมด 8 บรรทัด
- บรรทัดแรกแสดงผล 0123456789abcdefghij จำนวน 4 ครั้ง
- บรรทัดที่สอง เป็นบรรทัดว่าง
- บรรทัดที่สาม แสดงผล 1234567890 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่สี่ แสดงผล 1234567890 จำนวน 4 ครั้ง ตามตัวอย่าง
- บรรทัดที่ห้า แสดงผล เหมือนบรรทัดที่สาม
- บรรทัดที่หก แสดงผล 12345678 จำนวน 10 ครั้ง
- บรรทัดที่ 7-8 แสดงผลตามตัวอย่าง ห้ามใช้ space bar (ถ้าตรวจพบ จะได้ศูนย์คะแนนในข้อนี้)

**หมายเหตุ ขนาดของหน้าจอ คือ 80 คอลัมน์ 25 แถว**

**Output :**

```
0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij0123456789abcdefghij

          1234567890          1234567890          1234567890          1234567890
1234567890          1234567890          1234567890          1234567890
          1234567890          1234567890          1234567890          1234567890
12345678123456781234567812345678123456781234567812345678123456781234567812345678
        1       12      123     1234    12345   123456  1234567 12345678
12345678        12345678        12345678        12345678        12345678
```

<img width="730" alt="Screen Shot 2568-05-02 at 18 17 09" src="https://github.com/user-attachments/assets/3a95e8c4-8053-4c01-aabb-28645cdabca3" />

---
