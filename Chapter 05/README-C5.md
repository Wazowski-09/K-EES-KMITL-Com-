# Chapter : 5 - การเขียนโปรแกรมแบบวนซ้ำ

## Chapter : 5 - item : 1 - (41) ลำดับเลขคณิตแบบถอยหลัง

จงเขียนโปรแกรมแสดงลำดับเลขคณิต
โดยรับ Input เป็นจำนวนเต็ม 2 จำนวน คือค่าเริ่มต้น กับค่าผลต่างร่วม
แล้วแสดง Output เป็นลำดับเลขคณิตจำนวน 10 เลข โดยที่เอาเลขมากสุดขึ้นก่อน แล้วถอยหลังลงมา

**Testcase 1 :**

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 1 1
10 9 8 7 6 5 4 3 2 1
```

**Testcase 2 :**

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 9 10
99 89 79 69 59 49 39 29 19 9
```

**Testcase 3 :**

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 0 25
225 200 175 150 125 100 75 50 25 0
```

**Testcase 4 :**

```
 *** Arithmetic Sequence ***
Enter 2 Positive Integers: 23 17
176 159 142 125 108 91 74 57 40 23
```

<img width="697" alt="Screen Shot 2568-05-02 at 19 28 37" src="https://github.com/user-attachments/assets/ca9a40a4-c8e3-4568-87e6-1f8301824c30" />

<img width="699" alt="Screen Shot 2568-05-02 at 19 28 54" src="https://github.com/user-attachments/assets/df08f4b4-b21a-402d-a163-405a923fe309" />

---

## Chapter : 5 - item : 2 - (4) สะกดชื่อ

เพื่อนของนักศึกษาชอบเรียกชื่อนักศึกษาผิด จนทำให้นักศึกษาโมโห  
และลงมือเขียนโปรแกรมที่จะสะกดชื่อของนักศึกษาให้เพื่อนฟังอย่างเสียงดังฟังชัด !

**INPUT :**  
text ชุดนึง ยาวไม่เกิน 20 ตัวอักษร

**OUTPUT :**  
ตัวอักษรพิมพ์ใหญ่ที่มาจาก input บรรทัดละ 1 ตัว  
บรรทัดสุดท้ายแสดงความยาวของ input

**ห้ามใช้ #include <string.h>**  
ปล. แสดงให้เหมือนเป๊ะ ๆ นะ
ปล2. ลองทำความรู้จักกับตัวอักษรนี้ดู \0

**Testcase 1 :**

```
Enter your name : jewsar
J
E
W
S
A
R
Name length : 6
```

**Testcase 2 :**

```
Enter your name : fonkook
F
O
N
K
O
O
K
Name length : 7
```

**Testcase 3 :**

```
Enter your name : titan
T
I
T
A
N
Name length : 5
```

<img width="697" alt="Screen Shot 2568-05-02 at 19 29 24" src="https://github.com/user-attachments/assets/4a6a139c-c1d5-4a1a-b36b-3fd91d3030a8" />

<img width="695" alt="Screen Shot 2568-05-02 at 19 29 38" src="https://github.com/user-attachments/assets/b462c1aa-2bde-4f20-b511-9c30cc829e51" />

---

## Chapter : 5 - item : 3 - ขอบเขตข้อมูล char และ unsigned char (while loop)

การประกาศตัวแปรคือการจองหน่วยความจำเพื่อเก็บข้อมูล
ทุกครั้งที่ประกาศตัวแปร (Variable declaration) จะต้องกำหนดชนิดของข้อมูลด้วยเสมอ

char และ unsigned char เป็นข้อมูล ขนาด 8 บิต หรือ 1 ไบท์
char มีค่าต่ำสุดคือ -128 และค่าสูงสุดคือ 127
unsigned char มีค่าต่ำสุดคือ 0 และค่าสูงสุดคือ 255

**ให้สังเกตุการแสดงผล ว่า เมื่อถึงค่าสูงสุดแล้ว ข้อมูลภายในตัวแปรที่ถูกนำมาแสดงผลเป็นอย่างไร**

ตัวอย่างโค้ดด้านล่างเป็นโค้ดที่สามารถนำไปรันได้เลย ได้ผลลัพธ์ตามตัวอย่างใช้ for loop

**ให้นักศึกษาเปลี่ยนเป็น while loop**

```c
#include <stdio.h>
int main() {
    char x;
    unsigned char y;
    int l=5,i=1,input;
    printf(" *** Display char and unsigned char ***\n");
    printf("Enter number and length : ");
    scanf("%d %d",&input,&l);

    for(i=0;i<l;i++) {
        x = (char) (input +i);
        y = (unsigned char) x;
        printf("char= %-5d\tunsigned char = %-5u\n",x,y);
    }

    return 0;
}
```

**Testcase 1 :**

```
 *** Display char and unsigned char ***
Enter number and length : 1 5
char = 1    	unsigned char = 1
char = 2    	unsigned char = 2
char = 3    	unsigned char = 3
char = 4    	unsigned char = 4
char = 5    	unsigned char = 5

```

**Testcase 2 :**

```
 *** Display char and unsigned char ***
Enter number and length : 125 7
char = 125  	unsigned char = 125
char = 126  	unsigned char = 126
char = 127  	unsigned char = 127
char = -128 	unsigned char = 128
char = -127 	unsigned char = 129
char = -126 	unsigned char = 130
char = -125 	unsigned char = 131

```

**Testcase 3 :**

```
 *** Display char and unsigned char ***
Enter number and length : 250 9
char = -6   	unsigned char = 250
char = -5   	unsigned char = 251
char = -4   	unsigned char = 252
char = -3   	unsigned char = 253
char = -2   	unsigned char = 254
char = -1   	unsigned char = 255
char = 0    	unsigned char = 0
char = 1    	unsigned char = 1
char = 2    	unsigned char = 2

```

**Testcase 4 :**

```
 *** Display char and unsigned char ***
Enter number and length : 15 6
char = 15   	unsigned char = 15
char = 16   	unsigned char = 16
char = 17   	unsigned char = 17
char = 18   	unsigned char = 18
char = 19   	unsigned char = 19
char = 20   	unsigned char = 20

```

**Testcase 5 :**

```
 *** Display char and unsigned char ***
Enter number and length : -125 8
char = -125 	unsigned char = 131
char = -124 	unsigned char = 132
char = -123 	unsigned char = 133
char = -122 	unsigned char = 134
char = -121 	unsigned char = 135
char = -120 	unsigned char = 136
char = -119 	unsigned char = 137
char = -118 	unsigned char = 138

```

<img width="698" alt="Screen Shot 2568-05-02 at 19 29 54" src="https://github.com/user-attachments/assets/d4315db2-6804-4ab8-aba2-b7b7abd5b393" />

<img width="694" alt="Screen Shot 2568-05-02 at 19 30 21" src="https://github.com/user-attachments/assets/05b3bde7-ea5b-44f0-8e17-302fd420bc80" />

<img width="698" alt="Screen Shot 2568-05-02 at 19 30 37" src="https://github.com/user-attachments/assets/dc886400-29ec-4ef4-9964-3a6fcdbcb7e9" />

---

## Chapter : 5 - item : 4 - รูปสี่เหลี่ยม ใช้แอสกี 2

รับจำนวนเต็มบวก 1 จำนวนแสดงผล แล้วแสดงผลเป็นรูป สี่เหลี่ยมจตุรัส ตามจำนวนที่รับเข้ามา
ตัวอย่าง รับเลข 3
แสดงผล 3 บรรทัด แต่ละบรรทัดแสดงผล 3 ตำแหน่ง
บรรทัดแรกเริ่มจาก ABC
บรรทัดสองเริ่มจาก BCD
บรรทัดสามเริ่มจาก CDE

**Testcase 1 :**

```
Enter a number : 4
ABCD
BCDE
CDEF
DEFG

```

**Testcase 2 :**

```
Enter a number : 12
ABCDEFGHIJKL
BCDEFGHIJKLM
CDEFGHIJKLMN
DEFGHIJKLMNO
EFGHIJKLMNOP
FGHIJKLMNOPQ
GHIJKLMNOPQR
HIJKLMNOPQRS
IJKLMNOPQRST
JKLMNOPQRSTU
KLMNOPQRSTUV
LMNOPQRSTUVW

```

**Testcase 3 :**

```
Enter a number : 11
ABCDEFGHIJK
BCDEFGHIJKL
CDEFGHIJKLM
DEFGHIJKLMN
EFGHIJKLMNO
FGHIJKLMNOP
GHIJKLMNOPQ
HIJKLMNOPQR
IJKLMNOPQRS
JKLMNOPQRST
KLMNOPQRSTU

```

**Testcase 4 :**

```
Enter a number : 7
ABCDEFG
BCDEFGH
CDEFGHI
DEFGHIJ
EFGHIJK
FGHIJKL
GHIJKLM

```

**Testcase 5 :**

```
Enter a number : 3
ABC
BCD
CDE

```

<img width="698" alt="Screen Shot 2568-05-02 at 19 30 52" src="https://github.com/user-attachments/assets/545851c0-dec9-4c86-a5a3-cbec03bd79c8" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 31 06" src="https://github.com/user-attachments/assets/c8231a28-b5b6-404c-b9a1-92668708e9ed" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 31 18" src="https://github.com/user-attachments/assets/eb2d4774-233b-4707-8eae-ba9c342976ac" />

---

## Chapter : 5 - item : 5 - (43) รักมากไปรึเปล่า

สมมติว่านักศึกษารักคน ๆ นึง และพยายามจีบเขาอยู่  
นักศึกษาเลยคิดที่จะเขียนโปรแกรมขึ้นมาเพื่อส่งความรักไปให้เขา  
โดยจะส่งไปเท่ากับจำนวณครั้งของ input

**INPUT :**  
ตัวเลข 1 ตัว

**OUTPUT :**  
แสดงคำว่า I Love You ตามจำนวนครั้งที่ input เข้ามา  
แต่ถ้า input <= 0 นักศึกษาจะอกหัก </3  
และถ้า input > 10 นักศึกษาจะเหนื่อยเกินไป Too much :(

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

**Testcase 1 :**

```
Enter number : 1
I Love You

```

**Testcase 2 :**

```
Enter number : 3
I Love You
I Love You
I Love You

```

**Testcase 3 :**

```
Enter number : 0
</3
```

**Testcase 4 :**

```
Enter number : 15
Too much :(
```

<img width="698" alt="Screen Shot 2568-05-02 at 19 31 37" src="https://github.com/user-attachments/assets/3425bfca-b3fd-4068-8bd2-fc86f1221697" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 31 53" src="https://github.com/user-attachments/assets/61394e95-6940-476c-8e5b-14c4aa304971" />

---
