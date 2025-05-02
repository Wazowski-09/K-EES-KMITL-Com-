# Chapter : 4 - การเขียนโปรแกรมแบบกำหนดเงื่อนไข

## Chapter : 4 - item : 1 - รับจำนวนเต็ม แล้วแสดงค่าสัมบูรณ์

รับจำนวนเต็ม 1 จำนวน แล้วแสดงผล ค่าสัมบูรณ์

**Testcase 1 :**

```
 *** Show absolute value ***
Enter an integer : 3
Absolute value of 3 is |3| = 3

```

**Testcase 2 :**

```
 *** Show absolute value ***
Enter an integer : -25
Absolute value of -25 is |-25| = 25

```

**Testcase 3 :**

```
 *** Show absolute value ***
Enter an integer : 0
Absolute value of 0 is |0| = 0

```

<img width="698" alt="Screen Shot 2568-05-02 at 19 14 44" src="https://github.com/user-attachments/assets/8a281fc1-1635-4de1-8e1f-2bb09c62cd5d" />

---

## Chapter : 4 - item : 2 - get 3 show max/min

รับจำนวนเต็ม 3 จำนวน แล้วแสดงผลจำนวนที่มากหารด้วยจำนวนที่น้อยทีสุด ทศนิยม 3 ตำแหน่ง

**Testcase 1 :**

```
 *** Find Maximum / Mininum ***
Enter 3 integers : 3 2 1
Max / Min = 3 / 1 = 3.000

```

**Testcase 2 :**

```
 *** Find Maximum / Mininum ***
Enter 3 integers : 6 3 7
Max / Min = 7 / 3 = 2.333

```

**Testcase 3 :**

```
 *** Find Maximum / Mininum ***
Enter 3 integers : 1 9 1
Max / Min = 9 / 1 = 9.000

```

**Testcase 4 :**

```
 *** Find Maximum / Mininum ***
Enter 3 integers : 100 0 -100
Max / Min = 100 / -100 = -1.000

```

<img width="698" alt="Screen Shot 2568-05-02 at 19 15 05" src="https://github.com/user-attachments/assets/e1b38d3b-3516-4f6b-849f-acbb93c7be4b" />

<img width="699" alt="Screen Shot 2568-05-02 at 19 15 20" src="https://github.com/user-attachments/assets/8abfbf8d-d6c6-4246-bf9c-2e78948c1086" />

---

## Chapter : 4 - item : 3 - (43) เลือกสีที่ชอบโดยใช้คำสั่ง switch

ให้เขียนโปรแกรม โดยใช้คำสั่ง switch ให้มีคุณลักษณะดังนี้

- แสดงสีให้เลือกตามตัวอย่าง
- รับตัวอักษร 1 ตัวเป็นตัวแทนของสีที่ชอบ
- แสดงสีที่ได้เลือกตามตัวอย่าง
- ในกรณีที่ไม่มีสีตามที่เลือกให้แสดง NO color in range

**Testcase 1 :**

```
what color do you like.
Red
Blue
Green
Yellow
Purple
White
Select R B G Y P W : R
You like Red

```

**Testcase 2 :**

```
what color do you like.
Red
Blue
Green
Yellow
Purple
White
Select R B G Y P W : W
You like White

```

**Testcase 3 :**

```
what color do you like.
Red
Blue
Green
Yellow
Purple
White
Select R B G Y P W : O
NO color in range

```

<img width="696" alt="Screen Shot 2568-05-02 at 19 15 41" src="https://github.com/user-attachments/assets/b61ab8ef-6b85-4bbe-9978-fdc5f9f883ab" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 15 56" src="https://github.com/user-attachments/assets/4f076d3e-4d45-4994-be0b-40541063b5e0" />

---

## Chapter : 4 - item : 4 - (8) หลักสิบเป็นเลขคู่หรือคี่

ให้รับ input เป็น integer 3 ค่า จากนั้นนำมาบวกกัน แล้วหลักสิบจากผลลัพธ์ที่ได้ เป็นเลขคู่หรือเลขคี่

**Testcase 1 :**

```
Enter 3 Number : 1 1 1
ANSWER = 3
EVEN

```

**Testcase 2 :**

```
Enter 3 Number : 9 8 1
ANSWER = 18
ODD

```

**Testcase 3 :**

```
Enter 3 Number : 15 2 187
ANSWER = 204
EVEN

```

<img width="698" alt="Screen Shot 2568-05-02 at 19 16 20" src="https://github.com/user-attachments/assets/af476df6-73a5-4a7e-98ac-1bcf88d36b32" />

---

## Chapter : 4 - item : 5 - (4) เครื่องคิดเลขที่มีตัวมากเป็นตัวตั้ง

ให้เขียนโปรแกรมเครื่องคิดเลขโดยรับค่า เป็น ตัวเลข 2 ตัว และใช้ ตัวอักษร (A,B,C,D) แทน operator
โดย A แทน บวก , B แทน ลบ , C แทน คูณ , D แทน หาร
โดยที่ตัวตั้งจะเป็นตัวเลขที่มีค่ามากกว่าอีกตัวเสมอ
แสดงผลลัพธ์เป็นเลขทศนิยม 3 หลัก
Input จะอยู่ในรูปแบบ ตัวเลข ตัวอักษร ตัวเลข

**Testcase 1 :**

```
A is +
B is -
C is *
D is /
Enter number and operator : 6 A 9
9+6 = 15.000

```

**Testcase 2 :**

```
A is +
B is -
C is *
D is /
Enter number and operator : 15 B 3
15-3 = 12.000

```

**Testcase 3 :**

```
A is +
B is -
C is *
D is /
Enter number and operator : 3 C 5
5*3 = 15.000

```

**Testcase 4 :**

```
A is +
B is -
C is *
D is /
Enter number and operator : 2 D 3
3/2 = 1.500

```

**Testcase 5 :**

```
A is +
B is -
C is *
D is /
Enter number and operator : 3 B 5
5-3 = 2.000

```

<img width="697" alt="Screen Shot 2568-05-02 at 19 16 43" src="https://github.com/user-attachments/assets/73d2bc5f-5705-4b9f-924f-932a57d7f027" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 17 09" src="https://github.com/user-attachments/assets/e5090bd9-1de4-433e-8264-654321bf1f92" />

---
