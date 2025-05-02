# Chapter : 6 - การเขียนโปรแกรมแบบวนซ้ำ และกำหนดเงื่อนไข

## Chapter : 6 - item : 1 - sum of common factors

ให้รับเลขจำนวนเต็ม 2 จำนวน
แล้วหา ผมรวมของ ตัวประกอบของสองจำนวนนั้น

```
 *** Summation of common factor ***
Enter two positive numbers : 3 6
Summation of common factors between 3 and 6 ==> 4
```

ตัวประกอบของ 3 คือ 1, 3
ตัวประกอบของ 6 คือ 1, 2, 3, 6
ตัวประกอบร่วมคือ 1 และ 3
ผลรวมคือ 1+3 = 4

**Testcase 1 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 3 6
Summation of common factors (3 and 6) ==> 4

```

**Testcase 2 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 6 3
Summation of common factors (6 and 3) ==> 4

```

**Testcase 3 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 1024 9988
Summation of common factors (1024 and 9988) ==> 7

```

**Testcase 4 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 999994  2048
Summation of common factors (999994 and 2048) ==> 3

```

**Testcase 5 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 91 169
Summation of common factors (91 and 169) ==> 14

```

**Testcase 6 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 48 72
Summation of common factors (48 and 72) ==> 60

```

**Testcase 7 :**

```
 *** Summation of common factor ***
Enter two positive numbers : 17 97
Summation of common factors (17 and 97) ==> 1

```

<img width="697" alt="Screen Shot 2568-05-02 at 20 15 32" src="https://github.com/user-attachments/assets/cca052e1-1ec7-47db-9869-76e7e9ae40e5" />

<img width="698" alt="Screen Shot 2568-05-02 at 20 15 47" src="https://github.com/user-attachments/assets/8c3031ef-e2ec-4ac0-a362-e090d5b0df23" />

<img width="696" alt="Screen Shot 2568-05-02 at 20 15 59" src="https://github.com/user-attachments/assets/4d261973-ab85-4c34-8ca0-52d303278db5" />

---

## Chapter : 6 - item : 2 - ตรวจสอบจำนวนสมบูรณ์แบบ Perfect Number

Perfect number คือ จำนวนที่ผลรวมตัวประกอบที่น้อยกว่าจำนวนนั้น รวมกันได้เป็นจำนวนนั้น
6 มีตัวประกอบ 4 จำนวนคือ 1, 2, 3 และ 6
ตัวประกอบที่น้อยกว่า 6 คือ 1, 2 และ 3 ซึ่ง 1+2+3 = 6

จงเขียนโปรแกรมเพื่อรับค่า จำนวนนับ 1 จำนวน แล้วตรวจสอบว่า เป็น perfect number หรือไม่
แสดงผลตามตัวอย่าง

**Testcase 1 :**

```
 *** Perfect Number Verification ***
Enter a counting number : 6
6 is a PERFECT NUMBER.

```

**Testcase 2 :**

```
 *** Perfect Number Verification ***
Enter a counting number : 0
Only positive number : DO YOU UNDERSTAND !!!

```

**Testcase 3 :**

```
 *** Perfect Number Verification ***
Enter a counting number : 12
12 is NOT a perfect number.

```

**Testcase 4 :**

```
 *** Perfect Number Verification ***
Enter a counting number : 8128
8128 is a PERFECT NUMBER.

```

<img width="699" alt="Screen Shot 2568-05-02 at 20 16 20" src="https://github.com/user-attachments/assets/61bcf974-709c-42e9-8e35-fc8cd79bf291" />

<img width="696" alt="Screen Shot 2568-05-02 at 20 16 30" src="https://github.com/user-attachments/assets/ca8b8de1-267c-4ace-ab88-7b3df9fd59f0" />

---

## Chapter : 6 - item : 3 - สี่เหลี่ยมกลวง

จงเขียนโปรแกรมเพื่อรับเลขจำนวนเต็ม 1 จำนวน ค่าระหว่าง 1-16
ถ้าค่าเกินขอบเขตนี้ให้ แสดงผล Out of range
แสดงผลสี่เหลี่ยมกลวงตามตัวอย่าง

**Testcase 1 :**

```
Enter a number (1-16) : 200
Out of range ! ! !

```

**Testcase 2 :**

```
Enter a number (1-16) : -5
Out of range ! ! !

```

**Testcase 3 :**

```
Enter a number (1-16) : 5
54321
5   1
5   1
5   1
54321



```

**Testcase 4 :**

```
Enter a number (1-16) : 9
987654321
9       1
9       1
9       1
9       1
9       1
9       1
9       1
987654321



```

**Testcase 5 :**

```
Enter a number (1-16) : 13
DCBA987654321
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
D           1
DCBA987654321



```

<img width="697" alt="Screen Shot 2568-05-02 at 20 16 50" src="https://github.com/user-attachments/assets/e58d7ab9-a675-4b5d-8e25-b33d465cacfb" />

<img width="699" alt="Screen Shot 2568-05-02 at 20 17 04" src="https://github.com/user-attachments/assets/f37a3e13-e57b-420c-ac8f-898a73ebbcaf" />

---

## Chapter : 6 - item : 4 - ผลบวกเลขโดด

จงเขียนโปรแกรมรับตัวเลขจำนวนเต็ม ไม่เกิน 9 หลัก แล้วหาผลรวมของเลขโดด แต่ละหลัก

- รับตัวเลข 123 => 1+2+3=6
- รับตัวเลข 7892 => 7+8+9+2=26
- รับตัวเลข 32189657 => 3+2+1+8+9+6+5+7=41

**Testcase 1 :**

```
 *** Summation of each digit ***
Enter a positive number : 123

Summation of each digit = 6

```

**Testcase 2 :**

```
 *** Summation of each digit ***
Enter a positive number : 2560

Summation of each digit = 13

```

**Testcase 3 :**

```
 *** Summation of each digit ***
Enter a positive number : 456123789

Summation of each digit = 45

```

<img width="695" alt="Screen Shot 2568-05-02 at 20 18 15" src="https://github.com/user-attachments/assets/9914681b-6993-4c4b-a4ad-a812ee27abf5" />

---

## Chapter : 6 - item : 5 - ผลบวกเลขโดด เหลือหลักเดียว

จงเขียนโปรแกรมรับตัวเลขจำนวนเต็ม ไม่เกิน 9 หลัก แล้วหาผลรวมของเลขโดด แต่ละหลัก จนได้เลขเพียงหลักเดียว

- รับตัวเลข 123 => 1+2+3=6
- รับตัวเลข 7892 => 7+8+9+2=26 => 2+6=8
- รับตัวเลข 32189657 => 3+2+1+8+9+6+5+7=41 => 4+1=5

**Testcase 1 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 123
123 => 1 + 2 + 3 = 6

```

**Testcase 2 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 7892
7892 => 7 + 8 + 9 + 2 = 26 => 2 + 6 = 8

```

**Testcase 3 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 789789
789789 => 7 + 8 + 9 + 7 + 8 + 9 = 48 => 4 + 8 = 12 => 1 + 2 = 3

```

**Testcase 4 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 1011059
1011059 => 1 + 0 + 1 + 1 + 0 + 5 + 9 = 17 => 1 + 7 = 8

```

**Testcase 5 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 1020301
1020301 => 1 + 0 + 2 + 0 + 3 + 0 + 1 = 7

```

**Testcase 6 :**

```
 *** Summation of each digit into one digit ***
Enter a positive number : 32189657
32189657 => 3 + 2 + 1 + 8 + 9 + 6 + 5 + 7 = 41 => 4 + 1 = 5

```

<img width="695" alt="Screen Shot 2568-05-02 at 20 18 33" src="https://github.com/user-attachments/assets/95e55948-19ea-4996-99c0-e644c6b606e9" />

<img width="698" alt="Screen Shot 2568-05-02 at 20 18 46" src="https://github.com/user-attachments/assets/7afe2177-9279-454a-8cb7-3e25ed2635fc" />

---
