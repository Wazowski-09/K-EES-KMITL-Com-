## พื้นฐานการแสดงผล (Output)

### คำสั่ง: `printf()`

```c
printf("ข้อความ\n");       // แสดงข้อความ
printf("123\t456\n");      // แสดงเลขด้วย tab ระหว่างกลาง
printf("String: %s\n", "ABC"); // แสดงข้อความแบบตัวแปร
```

- `\n` คือขึ้นบรรทัดใหม่
- `\t` คือการเว้นวรรคแบบแท็บ (tab) สำหรับจัดข้อความให้อยู่ในแนวเดียวกัน

**ตัวอย่าง:**

```c
printf("Hello, KMITL!\n");  // แสดงข้อความต้อนรับ
```

**สถานการณ์:** ต้องการแสดงผลที่สวยงามบนหน้าจอ เช่น รายงานคะแนนนักเรียน

---

## การใช้ตัวแปรและการแสดงผลตัวเลข

### คำสั่ง: `int`, `float`, `%d`, `%f`, `%x`, `%X`, `%c`, `%s`

```c
int a = 97;
printf("%d\n", a);    // แสดงเป็นเลขฐาน 10
printf("%x\n", a);    // แสดงเป็นเลขฐาน 16
printf("%c\n", a);    // แสดงเป็นตัวอักษรจาก ASCII
printf("%s\n", "text");  // แสดงสตริง
```

**ตัวอย่าง:**

```c
int x = 65;
printf("%c", x);  // A
```

---

## การรับค่าจากผู้ใช้ (Input)

### คำสั่ง: `scanf()`, `fgets()`, `strcspn()`

```c
int a;
scanf("%d", &a);   // รับค่าจำนวนเต็ม

char name[20];
fgets(name, 20, stdin);               // รับ string
name[strcspn(name, "\n")] = '\0';   // ลบ \n ทิ้งหลังรับ
```

**ตัวอย่าง:** รับเลข 3 ตัวและแสดงเป็นอักษร

```c
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
printf("%c%c%c", a, b, c);
```

---

## เงื่อนไข if / else / switch

```c
if (a > b) {
  printf("a > b");
} else {
  printf("a <= b");
}
```

### คำสั่ง: `switch-case`

```c
switch (n) {
  case 1: printf("One"); break;
  case 2: printf("Two"); break;
  default: printf("Other");
}
```

### ตัวดำเนินการ AND / OR

```c
if (a > 0 && b > 0) {
  printf("Both positive\n");
}
if (a == 0 || b == 0) {
  printf("At least one is zero\n");
}
```

**ตัวอย่าง:** หาค่ามากสุดในสามตัวแปร

```c
int max = a;
if (b > max) max = b;
if (c > max) max = c;
printf("Max is %d", max);
```

---

## วนซ้ำ for / while / do-while

```c
for (int i = 0; i < 5; i++) {
  printf("%d ", i);
}
```

**ตัวอย่าง:** แสดงตัวอักษรทีละตัวในคำ

```c
char name[20];
scanf("%s", name);
int i = 0;
while (name[i] != '\0') {
  printf("%c\n", name[i]);
  i++;
}
```

---

## การคำนวณ / ตรวจสอบตัวเลข

### เทคนิค:

- หาผลรวมเลขโดด

```c
int sum = 0;
while (n > 0) {
  sum += n % 10;
  n /= 10;
}
```

- ตรวจสอบ Perfect Number

```c
int sum = 0;
for (int i = 1; i < n; i++)
  if (n % i == 0) sum += i;
if (sum == n) printf("Perfect");
```

---

## ฟังก์ชัน

```c
int findmax(int a, int b) {
  return a > b ? a : b;
}
```

**ตัวอย่าง:** รับเลข 4 ตัว หาค่ามากสุดด้วยฟังก์ชัน

---

## Array 1D และ 2D

```c
int a[10];           // Array 1 มิติ
int b[3][4];         // Array 2 มิติ
```

**ตัวอย่าง:** หาตำแหน่งของค่านึงใน Array 2 มิติ

```c
for (int i=0; i<3; i++)
  for (int j=0; j<4; j++)
    if (b[i][j] == target)
      printf("Found at %d %d", i, j);
```

---

## พอยน์เตอร์ (Pointer)

```c
int x = 10;
int *p = &x;
printf("%d\n", *p); // แสดงค่าของ x ผ่าน pointer
```

**ตัวอย่าง:** สลับค่าระหว่างสองตัวแปรด้วย pointer

```c
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
```

---

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

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("Hello, KMITL!\n");

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("Hello, Ladkrabang.\n");
    printf("Hello, KMITL.\n");
    printf("Hello, Bangkok.\n");
    printf("Hello, Thailand.\n");

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("Hello, world!\n");
    printf("Hello, Ladkrabang\n");
    printf("Hello, Computer Programming\n");
    printf("one\ttwo\tthree\tfour\tfive\tHallelujah\n");
    printf("12345678\t12345678\t12345678\t12345678\t12345678\n");
    printf("\t12345678\t12345678\t12345678\t12345678\t12345678\n");

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 8; i++)
    {
        printf("1234567890");
    }
    for (int i = 0; i < 10; i++)
    {
        printf("*\t");
    }
    printf("Hello, KMITL!\n");
    printf("Hello, Ladkrabang.\n");
    printf("Hello, Computer Programming.\n");
    printf("one\ttwo\tthree\tfour\tfive\tHallelujah\n");

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++) // 1
    {
        printf("0123456789abcdefghij");
    }
    printf("\n");               // 2
    for (int i = 0; i < 4; i++) // 3
    {
        printf("          1234567890");
    }
    for (int i = 0; i < 4; i++) // 4
    {
        printf("1234567890          ");
    }
    for (int i = 0; i < 4; i++) // 5
    {
        printf("          1234567890");
    }
    for (int i = 0; i < 10; i++) // 6
    {
        printf("12345678");
    }
    for (int i = 1; i <= 8; i++) // 7
    {
        printf("\t");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++) // 8
    {
        printf("12345678\t");
    }

    return 0;
}
```

---

# Chapter : 2 - การเขียนโปรแกรมเบื้องต้นและคำสั่งแสดงผล

## Chapter : 2 - item : 1 - การใช้งาน \n และ \t

ให้นักศึกษา เขียนโปรแกรมเพื่อแสดงผลลัพธ์

- จำนวนบรรทัด 1 บรรทัด
- แสดงผล Programming อยู่ด้านซ้ายของจอภาพ
- แสดงผล Computer อยู่ด้านขวาของจอภาพ
- โดยให้ใช้คำสั่ง printf ได้เพียงครั้งเดียว (ถ้าตรวจพบภายหลังจะได้ ศูนย์คะแนน)

**หมายเหตุ**

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร

**Output :**

```
Programming                                                             Computer
```

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("%-40s%40s", "Programming", "Computer");

    return 0;
}
```

---

## Chapter : 2 - item : 2 - การแสดงข้อความ มากกว่า 1 บรรทัด ไม่ใช้ \n \t

ให้เขียนโปรแกรมแสดงผลดังนี้

- บรรทัดแรกสุด ด้านซ้ายมือ แสดงผล Computer
- บรรทัดแรกสุด ด้านขวามือ แสดงผล Programming
- บรรทัดสุดท้าย (บรรทัดที่ 25) แสดงผลชิดซ้าย I will get 'A' on this subject.
- ห้ามใช้ \n \t

หมายเหตุ

1. การแสดงผลแต่ละบรรทัดมี 80 ตัวอักษร

**Output :**

```
Computer                                                             Programming























I will get 'A' on this subject.
```

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("%-40s%40s", "Computer", "Programming");
    printf("%1840s", "");
    printf("%-40s", "I will get 'A' on this subject.");

    return 0;
}
```

---

## Chapter : 2 - item : 3 - การแสดงผลจำนวนเต็ม

จงเติมจำนวนเต็ม ลงในช่องว่างเพื่อให้ได้ผลลัพธ์ ตามตัวอย่าง

- พารามิเตอร์ตัวที่ 2 ของคำสั่ง printf ยังไม่มี
- ให้เติมจำนวนเต็ม เพื่อให้ได้ผลลัพธ์ตามตัวอย่าง

```c
int main()
{
	printf("%d\n", );
	printf("%x\n", );
	printf("%X\n", );

	return 0;
}
```

**Output :**

```
97
7f
FF
```

**Code :**

```c
#include <stdio.h>

int main()
{

    printf("%d\n", 97);
    printf("%x\n", 127);
    printf("%X\n", 255);

    return 0;
}
```

---

## Chapter : 2 - item : 4 - การแสดงผลทศนิยม

เติมส่วนของ format string ในคำสั่ง printf ให้เหมาะสม เพื่อให้ผลลัพธ์ ตามตัวอย่าง

```c
#include<stdio.h>
int main()
{
	printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);
	printf("% f\n",3.1415926535897932);

	return 0;
}
```

**Output :**

```
1234567890123456789012345678901234567890123456789012345678901234567890
                                                                  3.14
                                                          3.1415926536
                                                3.14159265358979311600
                                      3.141592653589793115997963468544
                            3.1415926535897931159979634685441851615906
                  3.14159265358979311599796346854418516159057617187500
        3.141592653589793115997963468544185161590576171875000000000000
```

**Code :**

```c
#include <stdio.h>

int main()

{

    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");

    printf("%70.2f\n", 3.1415926535897932);

    printf("%70.10f\n", 3.1415926535897932);

    printf("%70.20f\n", 3.1415926535897932);

    printf("%70.30f\n", 3.1415926535897932);

    printf("%70.40f\n", 3.1415926535897932);

    printf("%70.50f\n", 3.1415926535897932);

    printf("%70.60f\n", 3.1415926535897932);

    return 0;
}
```

---

## Chapter : 2 - item : 5 - การแสดงข้อความ %s

เติม พารามิเตอร์ตัวแรก (first parameter) ของ printf ให้เหมาะสม เพื่อแสดงผลตามตัวอย่าง

```c
int main() {
	printf("1234567890123456789012345678901234567890\n");
	printf("% s\n","I have been a good student.");
	printf("% s\n","I have been a good student.");
	printf("% s\n","I have been a good student.");
	printf("% s\n","I have been a good student.");
	printf("% s\n","I have been a good student.");

	return 0;
}
```

**Output :**

```
1234567890123456789012345678901234567890
             I have been a good student.
   I have been a good student.
    I have
I have been a good stu
                  I have been a good stu
```

**Code :**

```c
#include <stdio.h>

int main()

{

    printf("1234567890123456789012345678901234567890\n");
    printf("%40s\n", "I have been a good student.");
    printf("%30s\n", "I have been a good student.");
    printf("%10.6s\n", "I have been a good student.");
    printf("%-40.22s\n", "I have been a good student.");
    printf("%40.22s\n", "I have been a good student.");

    return 0;
}
```

---

# Chapter : 3 - การใช้งานคำสั่ง Input Output และการคำนวณต่างๆ

## Chapter : 3 - item : 1 - รับตัวเลขแสดงตัวอักษร

ให้นักศึกษารับข้อมูลตัวเลข 3 ตัว แล้ว แสดงตัวอักษรของตัวเลขนั้น

**Testcase 1 :**

```
Enter 3 numbers : 65 66 67
ABC
```

**Testcase 2 :**

```
Enter 3 numbers : 99 65 116
cAt
```

**Testcase 3 :**

```
Enter 3 numbers : 87 111 119
Wow
```

**Code :**

```c
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // รับค่าตัวเลข 3 ตัว
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%c%c%c", num1, num2, num3);

    return 0;
}
```

---

## Chapter : 3 - item : 2 - (4) แสดงเลขในแบบต่าง ๆ

ให้นักศึกษาเขียนโปรแกรมรับจำนวนเต็ม 1 ตัว แล้วแสดงผลดังนี้

- แสดงจำนวนเต็ม
- แสดงทศนิยม 2 ตำแหน่ง
- แสดงค่า ตัวเลขหารด้วย 3 เป็นทศนิยม 3 ตำแหน่ง
- แสดงค่ากำลังสอง

ปล. แสดงผลให้เหมือนเป๊ะ ๆ ด้วย

**ห้ามใช้ Type casting** _(การแปลงชนิดของตัวแปรให้เป็นอีกชนิด)_  
เช่น (int) 3.6 จะได้ 3 _(การทำแบบนี้จะปัดเศษทิ้ง!!)_

**ให้ใช้ จำนวนเต็ม \* 1.0 แทน**
เช่น 3 \* 1.0 จะได้ 3.000000

**Testcase 1 :**

```
 *** Show a number in variety formats. ***
Enter integer : 12
Int	-> 12
Float	-> 12.00
Int/3	-> 4.000
Int^2	-> 144
```

**Testcase 2 :**

```
 *** Show a number in variety formats. ***
Enter integer : 17
Int	-> 17
Float	-> 17.00
Int/3	-> 5.667
Int^2	-> 289
```

**Testcase 3 :**

```
 *** Show a number in variety formats. ***
Enter integer : 65
Int	-> 65
Float	-> 65.00
Int/3	-> 21.667
Int^2	-> 4225
```

**Code :**

```c
#include <stdio.h>

int main()
{
    int num;

    printf(" *** Show a number in variety formats. *** \n");

    printf("Enter integer : ");
    scanf("%d", &num);

    printf("Int\t-> %d\n", num);
    printf("Float\t-> %.2f\n", num * 1.0);
    printf("Int/3\t-> %.3f\n", (num * 1.0) / 3);
    printf("Int^2\t-> %d\n", num * num);

    return 0;
}

```

---

## Chapter : 3 - item : 3 - แปลง เซลเซียส เป็น ฟาเรนไฮต์

รับค่าอุณหภูมิ เป็น องศาเซลเซียส เป็นจำนวนทศนิยม
แล้วแสดงผลเป็น องศาฟาเรนไฮต์ ทศนิยม 2 ตำแหน่ง

**Testcase 1 :**

```
 *** Convert Celcius to Fahrenheit ***
Enter temperature in degree celcius : 0
0.00 degrees equals 32.00 degree Fahrenheit.

```

**Testcase 2 :**

```
 *** Convert Celcius to Fahrenheit ***
Enter temperature in degree celcius : 100
100.00 degrees equals 212.00 degree Fahrenheit.

```

**Testcase 3 :**

```
 *** Convert Celcius to Fahrenheit ***
Enter temperature in degree celcius : 37
37.00 degrees equals 98.60 degree Fahrenheit.

```

**Code :**

```c
#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf(" *** Convert Celcius to Fahrenheit *** \n");

    printf("Enter temperature in degree celcius : ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2f degrees equals %.2f degree Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
```

---

## Chapter : 3 - item : 4 - การรับข้อความจากคีย์บอร์ด

จงเขียนโปรแกรมรับข้อความ 1 บรรทัด

- นำข้อความที่รับเข้ามา แสดงผลตามตัวอย่าง

**Testcase 1 :**

```
 *** Get input from keyboard as string ***
Please input a string : Computer Programming
string : Computer Programming
string : Compute
string : Computer Progra

```

**Testcase 2 :**

```
 *** Get input from keyboard as string ***
Please input a string : Kualalumpur seagame 2017
string : Kualalumpur seagame 2017
string : Kualalu
string : Kualalumpur sea

```

**Testcase 3 :**

```
 *** Get input from keyboard as string ***
Please input a string : I love Computer Programming subject.
string : I love Computer Programming subject.
string : I love
string : I love Computer

```

**Testcase 4 :**

```
 *** Get input from keyboard as string ***
Please input a string : Today is a beautiful day.
string : Today is a beautiful day.
string : Today i
string : Today is a beau

```

**Code :**

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // แสดงข้อความเริ่มต้น
    printf(" *** Get input from keyboard as string *** \n");

    // รับข้อความ 1 บรรทัด
    printf("Please input a string : ");
    fgets(str, sizeof(str), stdin);

    // ลบ newline ออกจากข้อความ (หากมี)
    str[strcspn(str, "\n")] = 0;

    // แสดงผลตามรูปแบบที่กำหนด
    printf("string : %s\n", str);
    printf("string : %.7s\n", str);
    printf("string : %.15s\n", str);

    return 0;
}
```

---

## Chapter : 3 - item : 5 - แสดงผลจำนวนเต็ม แบบคอมม่า

ให้เขียนโปรแกรม รับจำนวนเต็ม 10 หลัก 1 จำนวนแล้วแสดงผลดังนี้

- แสดงตัวเลข ที่รับเข้ามา
- แสดงขนาดของตัวแปร printf("variable size = %d bytes\n",sizeof(n));
- แสดงตัวเลข 3 หลักสุดท้าย (หลักร้อย หลักสิบ หลักหน่วย)
- แสดงตัวเลข 3 หลักถัดมา (หลักแสน หลักหมื่น หลักพัน)
- แสดงตัวเลข 3 หลักถัดมา (หลักร้อยล้าน หลักสิบล้าน หลักล้าน)
- แสดงตัวเลข หลักซ้ายมือสุด (หลักพันล้าน)
- แสดงตัวเลข แบบมี comma คั่น

**Hint:**
ตัวเลขจำนวนเต็ม ประเภทต่าง ๆ
int ขนาด 4 Bytes เก็บตัวเลขได้สูงสุด 2,147,483,647
unsigned int ขนาด 4 Bytes เก็บตัวเลขได้สูงสุด 4,294,967,295
long ขนาด 8 Bytes เก็บตัวเลขได้สูงสุด 9,223,372,036,854,775,807
unsigned long ขนาด 8 Bytes เก็บตัวเลขได้สูงสุด 18,446,744,073,709,551,615

[https://www.tutorialspoint.com/c_standard_library/limits_h.htm](https://www.tutorialspoint.com/c_standard_library/limits_h.htm)

[https://stackoverflow.com/questions/49320769/c-int-and-long-have-the-same-size-and-max-value](https://stackoverflow.com/questions/49320769/c-int-and-long-have-the-same-size-and-max-value)[](https://stackoverflow.com/questions/49320769/c-int-and-long-have-the-same-size-and-max-value)

**ข้อแนะนำ**
ประกาศตัวแปรเป็น unsigned long
การรับค่า หรือ แสดงผล ให้ใช้ %ld แทน %d

**Testcase 1 :**

```
 *** Display integer in different styles ***
Enter an integer : 1234567890
Your number : 1234567890
variable size = 8 bytes
last 3 digits : 890
next 3 digits : 567
next 3 digits : 234
next 3 digits :   1
comma format  : 1,234,567,890
```

**Testcase 2 :**

```
 *** Display integer in different styles ***
Enter an integer : 1222333444
Your number : 1222333444
variable size = 8 bytes
last 3 digits : 444
next 3 digits : 333
next 3 digits : 222
next 3 digits :   1
comma format  : 1,222,333,444

```

**Testcase 3 :**

```
 *** Display integer in different styles ***
Enter an integer : 3456789712
Your number : 3456789712
variable size = 8 bytes
last 3 digits : 712
next 3 digits : 789
next 3 digits : 456
next 3 digits :   3
comma format  : 3,456,789,712

```

**Code :**

```c
#include <stdio.h>

int main()
{
    unsigned long num;

    printf(" *** Display integer in different styles *** \n");

    printf("Enter an integer : ");
    scanf("%lu", &num);

    printf("Your number : %lu\n", num);

    printf("variable size = %lu bytes\n", sizeof(num));

    printf("last 3 digits : %03lu\n", num % 1000);
    printf("next 3 digits : %03lu\n", (num / 1000) % 1000);
    printf("next 3 digits : %03lu\n", (num / 1000000) % 1000);
    printf("next 3 digits : %3lu\n", (num / 1000000000) % 1000);

    printf("comma format  : %lu,%03lu,%03lu,%03lu\n",
           (num / 1000000000) % 1000, (num / 1000000) % 1000,
           (num / 1000) % 1000, num % 1000);

    return 0;
}
```

---

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

**Code :**

```c
#include <stdio.h>
#include <stdlib.h> // สำหรับใช้ฟังก์ชัน abs()

int main()
{
    int num;

    printf(" *** Show absolute value ***\n");
    printf("Enter an integer : ");
    scanf("%d", &num);

    printf("Absolute value of %d is |%d| = %d\n", num, num, abs(num));

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int max, min;

    printf(" *** Find Maximum / Mininum ***\n");
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // หาค่าสูงสุด
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // หาค่าต่ำสุด
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // แสดงผลลัพธ์
    printf("Max / Min = %d / %d = %.3f\n", max, min, (float)max / min);

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    char color;

    printf("what color do you like.\n");
    printf("Red\nBlue\nGreen\nYellow\nPurple\nWhite\n");
    printf("Select R B G Y P W : ");
    scanf(" %c", &color);

    switch (color)
    {
    case 'R':
        printf("You like Red\n");
        break;
    case 'B':
        printf("You like Blue\n");
        break;
    case 'G':
        printf("You like Green\n");
        break;
    case 'Y':
        printf("You like Yellow\n");
        break;
    case 'P':
        printf("You like Purple\n");
        break;
    case 'W':
        printf("You like White\n");
        break;
    default:
        printf("NO color in range\n");
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;

    printf("Enter 3 Number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("ANSWER = %d\n", sum);

    int tens_digit = (sum / 10) % 10;
    if (tens_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    double num1, num2;
    char op;

    printf("A is +\nB is -\nC is *\nD is /\n");
    printf("Enter number and operator : ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    // ให้ตัวมากเป็นตัวตั้งเสมอ
    if (num1 < num2)
    {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }

    switch (op)
    {
    case 'A':
        printf("%.0lf+%.0lf = %.3lf\n", num1, num2, num1 + num2);
        break;
    case 'B':
        printf("%.0lf-%.0lf = %.3lf\n", num1, num2, num1 - num2);
        break;
    case 'C':
        printf("%.0lf*%.0lf = %.3lf\n", num1, num2, num1 * num2);
        break;
    case 'D':
        if (num2 != 0)
            printf("%.0lf/%.0lf = %.3lf\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;
    default:
        printf("Invalid operator\n");
    }

    return 0;
}
```

---

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int start, diff;

    printf(" *** Arithmetic Sequence ***\n");
    printf("Enter 2 Positive Integers: ");
    scanf("%d %d", &start, &diff);

    int max_value = start + (9 * diff);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", max_value - (i * diff));
    }
    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    char name[21];
    int length = 0;

    printf("Enter your name : ");
    scanf("%20s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - ('a' - 'A');
        }
        printf("%c\n", name[i]);
        length++;
    }

    printf("Name length : %d\n", length);

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    char x;
    unsigned char y;
    int l, i = 0, input;

    printf(" *** Display char and unsigned char ***\n");
    printf("Enter number and length : ");
    scanf("%d %d", &input, &l);

    while (i < l)
    {
        x = (char)(input + i);
        y = (unsigned char)x;
        printf("char = %-5d\tunsigned char = %-5u\n", x, y);
        i++;
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", 'A' + i + j);
        }
        printf("\n");
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("</3\n");
    }
    else if (n > 10)
    {
        printf("Too much :(\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("I Love You\n");
        }
    }

    return 0;
}
```

---

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num1, num2;

    printf(" *** Summation of common factor ***\n");
    printf("Enter two positive numbers : ");
    scanf("%d %d", &num1, &num2);

    int sum = 0;

    // หาตัวประกอบร่วมและคำนวณผลรวม
    for (int i = 1; i <= (num1 < num2 ? num1 : num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            sum += i;
        }
    }

    printf("Summation of common factors (%d and %d) ==> %d\n", num1, num2, sum);

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num;

    printf(" *** Perfect Number Verification ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Only positive number : DO YOU UNDERSTAND !!!\n");
    }
    else
    {
        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            printf("%d is a PERFECT NUMBER.\n", num);
        }
        else
        {
            printf("%d is NOT a perfect number.\n", num);
        }
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number (1-16) : ");
    scanf("%d", &num);

    if (num < 1 || num > 16)
    {
        printf("Out of range ! ! !\n");
    }
    else
    {
        for (int i = num; i >= 1; i--)
        {
            if (i > 9)
                printf("%c", 'A' + (i - 10));
            else
                printf("%d", i);
        }
        printf("\n");

        for (int i = 0; i < num - 2; i++)
        {
            if (num > 9)
                printf("%c", 'A' + (num - 10));
            else
                printf("%d", num);

            for (int j = 0; j < num - 2; j++)
            {
                printf(" ");
            }

            printf("1\n");
        }

        if (num > 1)
        {
            for (int i = num; i >= 1; i--)
            {
                if (i > 9)
                    printf("%c", 'A' + (i - 10));
                else
                    printf("%d", i);
            }
            printf("\n");
        }
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf(" *** Summation of each digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d", &num);

    if (num < 0 || num > 999999999)
    {
        printf("Out of range! Please enter a number up to 9 digits.\n");
    }
    else
    {
        int temp = num;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        printf("\nSummation of each digit = %d\n", sum);
    }

    return 0;
}
```

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

**Code :**

```c
#include <stdio.h>

int main()
{
    int num, sum;

    printf(" *** Summation of each digit into one digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d", &num);

    if (num < 0 || num > 999999999)
    {
        printf("Out of range! Please enter a number up to 9 digits.\n");
    }
    else
    {
        printf("%d", num);

        while (num >= 10)
        {
            sum = 0;
            printf(" => ");
            int temp = num, digits[10], count = 0;

            while (temp > 0)
            {
                digits[count++] = temp % 10;
                temp /= 10;
            }

            for (int i = count - 1; i >= 0; i--)
            {
                if (i != count - 1)
                    printf(" + ");
                printf("%d", digits[i]);
                sum += digits[i];
            }

            num = sum;
            printf(" = %d", num);
        }
        printf("\n");
    }

    return 0;
}
```

---

# Chapter : 7 - ฟังก์ชันเบื้องต้นและขอบเขตตัวแปร

## Chapter : 7 - item : 1 - หาค่า Max รับจำนวนเต็ม 4 จำนวน

จงเขียนโปรแกรมรับจำนวนเต็ม 4 จำนวน เพื่อหาค่าสูงสุด
โดยห้ามแก้ไข code ด้านล่าง ให้เพิ่มตัว function ให้สมบูรณ์

```c
#include<stdio.h>

int findmax(int,int);

int main() {
	int a,b,c,d;
	printf(" *** Find max value of 4 inputs ***\n");
	printf("Enter 4 integers : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("The maximum number is %d\n",findmax(findmax(a,b),findmax(c,d)));

	return 0;
}
//เพิ่ม code ด้านล่าง
```

**Testcase 1 :**

```
 *** Find max value of 4 inputs ***
Enter 4 integers : 1 2 3 4
The maximum number is 4

```

**Testcase 2 :**

```
 *** Find max value of 4 inputs ***
Enter 4 integers : 9 8 7 6
The maximum number is 9

```

**Testcase 3 :**

```
 *** Find max value of 4 inputs ***
Enter 4 integers : -9 -6 -5 -3
The maximum number is -3

```

**Testcase 4 :**

```
 *** Find max value of 4 inputs ***
Enter 4 integers : 107 130 998 689
The maximum number is 998

```

**Code :**

```c
#include <stdio.h>

int findmax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int a, b, c, d;
    printf(" *** Find max value of 4 inputs ***\n");
    printf("Enter 4 integers : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("The maximum number is %d\n", findmax(findmax(a, b), findmax(c, d)));
    return 0;
}
```

---

## Chapter : 7 - item : 2 - (4) ลดราคา

นักศึกษาได้คูปองส่วนลดมา 2 ใบ ดีใจมากจนรีบวิ่งไปซื้อของที่อยากได้ ปรากฎว่า  
นักศึกษาพกเงินมาไม่พอซื้อของทั้ง 2 ชิ้น จึงตัดสินใจหยิบคอมขึ้นมาเขียนโปรแกรมคำนวณว่าซื้อชิ้นไหนถูกกว่ากัน

**INPUT :**  
ตัวเลข 4 ตัว โดย 2 ตัวแรกเป็นราคาสินค้า 2 อันต่อมาเป็นเปอร์เซ็นต์ส่วนลด

**OUTPUT :**  
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

**ให้เอาโค้ดตรงนี้ไปเขียนเพิ่มเท่านั้น !!**

```c
#include <stdio.h>

float  discount(int prize,  float coupon);

int main()
{

	/* CODE INPUT HERE */

	float sale1 = discount(prize1, coupon1);
	float sale2 = discount(prize2, coupon2);

	/* CODE OUTPUT HERE */

	if (sale1 < sale2)
		printf("* Item1 is cheaper");
	else if (sale1 == sale2)
		printf("* Item1 is equal to Item2");
	else
		printf("* Item2 is cheaper");
}

float  discount(int  prize,  float coupon)
{

	/* CODE FUNCTION HERE */

}
```

**Testcase 1 :**

```
Enter 2 prizes and 2 coupons : 129 89 15 7.7
Item1 129 -> 109.65
Item2 89 -> 82.15
* Item2 is cheaper
```

**Testcase 2 :**

```
Enter 2 prizes and 2 coupons : 50 50 10 10
Item1 50 -> 45.00
Item2 50 -> 45.00
* Item1 is equal to Item2
```

**Testcase 3 :**

```
Enter 2 prizes and 2 coupons : 19 39 4 8.4
Item1 19 -> 18.24
Item2 39 -> 35.72
* Item1 is cheaper
```

**Code :**

```c
#include <stdio.h>

float discount(int prize, float coupon);

int main()
{
    int prize1, prize2;
    float coupon1, coupon2;

    printf("Enter 2 prizes and 2 coupons : ");
    scanf("%d %d %f %f", &prize1, &prize2, &coupon1, &coupon2);

    float sale1 = discount(prize1, coupon1);
    float sale2 = discount(prize2, coupon2);

    printf("Item1 %d -> %.2f\n", prize1, sale1);
    printf("Item2 %d -> %.2f\n", prize2, sale2);

    if (sale1 > sale2)
        printf("* Item2 is cheaper");
    else if (sale1 == sale2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item1 is cheaper");
}

float discount(int prize, float coupon)
{
    return prize * (1 - coupon / 100);
}
```

---

## Chapter : 7 - item : 3 - เปลี่ยนข้อความเป็น ตัวใหญ่ ตัวเล็ก

จงเขียนโปรแกรมรับข้อความ หนึ่งบรรทัด
แล้วแสดงผล 2 บรรทัด
บรรทัดที่ 1 แสดงผลเป็น ตัวอักษรตัวใหญ่
บรรทัดที่ 2 แสดงผลเป็น ตัวอักษรตัวเล็ก

**ข้อแนะนำ**
ใช้ function toupper และ tolower ซี่งอยู่ใน ctype.h

**Testcase 1 :**

```
Enter a string : Hello
Capital : HELLO
Small : hello

```

**Testcase 2 :**

```
Enter a string : This is my world.
Capital : THIS IS MY WORLD.
Small : this is my world.

```

**Testcase 3 :**

```
Enter a string : Are you dare to copy other person program.
Capital : ARE YOU DARE TO COPY OTHER PERSON PROGRAM.
Small : are you dare to copy other person program.

```

**Testcase 4 :**

```
Enter a string : Institute of Tecnology Ladkrabang.
Capital : INSTITUTE OF TECNOLOGY LADKRABANG.
Small : institute of tecnology ladkrabang.

```

**Code :**

```c

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char input[100];
    char upper[100], lower[100];

    printf("Enter a string : ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        upper[i] = toupper(input[i]);
        lower[i] = tolower(input[i]);
    }
    upper[i] = '\0'; // Null-terminate the strings
    lower[i] = '\0';

    printf("Capital : %s\n", upper);
    printf("Small : %s\n", lower);

    return 0;
}
```

---

## Chapter : 7 - item : 4 - (43) จำไม่เก่ง

สมมติจากเรื่องจริงว่านักศึกษาเป็นคนขี้ลืม ตั้งรหัสอะไรไปก็จะลืมเสมอ จึงตัดสินใจ  
เขียนโปรแกรมตรวจสอบว่ารหัสที่กำลังจะตั้งมันจำง่ายหรือยากเกินไปไหม  
โดยรหัสที่ถือว่ายากจะประกอบด้วย 3 ใน 4 ข้อพวกนี้ขึ้นไป

- ตัวเลข
- อักษรพิมพ์ใหญ่
- อักษรพิมพ์เล็ก
- ความยาวมากกว่า 8 ตัว

**INPUT :**  
text 1 ชุด ความยาวไม่เกิน 200 ตัวอักษร

**OUTPUT :**  
สังเกตุจาก test case

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

**ให้เอาโค้ดข้างล่างนี้ ไปเพิ่มเติมเท่านั้น และห้ามใช้ <string.h>**

```c
#include <stdio.h>

int has_lower_case(char string[]);

int has_upper_case(char string[]);

int has_number(char string[]);

int check_length(char string[]);

int main() {
	char password[20];
	printf("Enter password : ");
	scanf("%s", &password);

	/* CODE OUTPUT HERE */

	has_upper_case(password);
}

int has_upper_case(char string[]) {
	int i,flag=0;
	for(i=0; string[i]!='\0'; i++) {
		printf("%c",string[i]);
}
	printf("\n");
	return flag;
}
```

**Testcase 1 :**

```
Enter password : 1234
verifying . . .
> Easy to remember!
```

**Testcase 2 :**

```
Enter password : 123456789a
verifying . . .
> Hard to remember!
```

**Testcase 3 :**

```
Enter password : 123abc
verifying . . .
> Easy to remember!
```

**Code :**

```c
#include <stdio.h>

int has_lower_case(char string[]);
int has_upper_case(char string[]);
int has_number(char string[]);
int check_length(char string[]);

int main()
{
    char password[200];
    printf("Enter password : ");
    scanf("%s", password);

    printf("verifying . . .\n");

    int lower = has_lower_case(password);
    int upper = has_upper_case(password);
    int number = has_number(password);
    int length = check_length(password);

    int strength = lower + upper + number + length;

    if (strength >= 3)
    {
        printf("> Hard to remember!\n");
    }
    else
    {
        printf("> Easy to remember!\n");
    }

    return 0;
}

int has_lower_case(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int has_upper_case(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int has_number(char string[])
{
    int i, flag = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int check_length(char string[])
{
    int i, length = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    return length > 8 ? 1 : 0;
}
```

---

## Chapter : 7 - item : 5 - (4) บัตรปชช

นักศึกษาทำบัตรประชาชนหาย และขี้เกียจไปทำใหม่ นักศึกษาจึงได้ตัดสินใจ  
เขียนโปรแกรมให้พิมพ์บัตรออกมาใหม่แทน โดยลักษณะของบัตรคือ

1. แสดงชื่อ
2. แสดงอายุ
3. แสดงอาชีพ

**INPUT**
ตัวอักษรชุดนึง ตัวเลข และตัวอักษรอีกชุดนึง ตามลำดับ  
สมมติว่าตัวอักษรที่ใส่เข้ามาจะไม่ยาวเกินบัตรแน่ ๆ  
\* บัตรมีขนาด 22 x 6 ช่อง ใช้ตัวอักษร 4 ตัวนี้ในการสร้าง ( = ) ( - ) ( : ) ( | )

ปล. แสดงให้เหมือนเป๊ะ ๆ นะ

**เอาโค้ดข้างล่างนี้ไปเขียนต่อนะ เพิ่มได้ ลดไม่ได้**

```c
#include <stdio.h>

void print_id_card(char  name[],  char  job[],  int  age);

int main()
{

	/* CODE HERE */

}
```

**Testcase 1 :**

```
Enter name, age, job : Than 20 TA
======================
| Than               |
| ------------------ |
| Age : 20           |
| Job : TA           |
======================

```

**Testcase 2 :**

```
Enter name, age, job : Tommy 7 TroubleMaker
======================
| Tommy              |
| ------------------ |
| Age : 7            |
| Job : TroubleMaker |
======================

```

**Testcase 3 :**

```
Enter name, age, job : Compro 1990 Easy
======================
| Compro             |
| ------------------ |
| Age : 1990         |
| Job : Easy         |
======================

```

**Code :**

```c
#include <stdio.h>
#include <string.h>
void print_id_card(char name[], char job[], int age);

int main()
{
    char name[50], job[50];
    int age;

    // Prompt the user for input
    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);

    // Print the ID card
    print_id_card(name, job, age);

    return 0;
}

void print_id_card(char name[], char job[], int age)
{
    // Print the top border
    printf("======================\n");

    // Print the name
    printf("| %-18s |\n", name);

    // Print the separator
    printf("| ------------------ |\n");

    // Print the age
    printf("| Age : %-12d |\n", age);

    // Print the job
    printf("| Job : %-12s |\n", job);

    // Print the bottom border
    printf("======================\n");
}
```

---

# Chapter : 8 - ตัวแปรแบบแถวลำดับและตัวแปรแบบโครงสร้าง

## Chapter : 8 - item : 1 - Array 1 dimension

รับข้อมูลจำนวนเต็ม 10 จำนวน แล้ว แสดงผลเรียงจากน้อยไปมาก
แสดงผลตามตัวอย่าง

**Testcase 1 :**

```
 *** Ascending sort ***
Enter 10 whole numbers : 10 20 30 40 50 60 70 80 90 22
Output : 10 20 22 30 40 50 60 70 80 90

```

**Testcase 2 :**

```
 *** Ascending sort ***
Enter 10 whole numbers : 19 3 9 17 36 44 37 2 69 96
Output : 2 3 9 17 19 36 37 44 69 96

```

**Testcase 3 :**

```
 *** Ascending sort ***
Enter 10 whole numbers : 97 83 53 43 47 23 29 31 71 79
Output : 23 29 31 43 47 53 71 79 83 97

```

**Testcase 4 :**

```
 *** Ascending sort ***
Enter 10 whole numbers : 69 95 41 20 0 -9 -63 50 17 3
Output : -63 -9 0 3 17 20 41 50 69 95

```

**Code :**

```c
#include <stdio.h>

void sortAscending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numbers[10];

    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    sortAscending(numbers, 10);

    printf("Output : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
```

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

**Testcase 1 :**

```
 *** Find a value in array 2 dimension ***
Enter a value : 3
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 3
1. (row,column) => (1,2)
2. (row,column) => (7,2)

```

**Testcase 2 :**

```
 *** Find a value in array 2 dimension ***
Enter a value : 99
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 99
 --- !!! NOT FOUND !!! ---

```

**Testcase 3 :**

```
 *** Find a value in array 2 dimension ***
Enter a value : 45
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 45
 --- !!! NOT FOUND !!! ---

```

**Testcase 4 :**

```
 *** Find a value in array 2 dimension ***
Enter a value : 13
    2    3    5    7   11   13   17   19   29   31
   37   41   43   37   61   71   73   79   83   97
  103  107  109  113  131  151  181  191  193  173
  163  113  102  107  127  137  257  139  149  369
  212  224  236  248  313  326  339  341  355  368
    2    4    6    6   10   12   14   16   18   20
    1    3    5    7    9   11   13   17   19   21
  163  113  102  107  127  137  257  139  149  369

Finding value => 13
1. (row,column) => (1,6)
2. (row,column) => (7,7)

```

**Code :**

```c
#include <stdio.h>

int main()
{
    int num[8][10] = {
        {2, 3, 5, 7, 11, 13, 17, 19, 29, 31},
        {37, 41, 43, 37, 61, 71, 73, 79, 83, 97},
        {103, 107, 109, 113, 131, 151, 181, 191, 193, 173},
        {163, 113, 102, 107, 127, 137, 257, 139, 149, 369},
        {212, 224, 236, 248, 313, 326, 339, 341, 355, 368},
        {2, 4, 6, 6, 10, 12, 14, 16, 18, 20},
        {1, 3, 5, 7, 9, 11, 13, 17, 19, 21},
        {163, 113, 102, 107, 127, 137, 257, 139, 149, 369}};

    int value, found = 0, count = 0;

    printf(" *** Find a value in array 2 dimension ***\n");
    printf("Enter a value : ");
    scanf("%d", &value);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }

    printf("\nFinding value => %d\n", value);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num[i][j] == value)
            {
                count++;
                printf("%d. (row,column) => (%d,%d)\n", count, i + 1, j + 1);
                found = 1;
            }
        }
    }

    if (!found)
    {
        printf(" --- !!! NOT FOUND !!! ---\n");
    }

    return 0;
}
```

---

## Chapter : 8 - item : 3 - ผลต่างมากสุดของจำนวนที่ติดกัน v1

รับจำนวนเต็ม 10 จำนวน
แล้วตรวจสอบว่า ผลต่างของจำนวนติดกัน มีค่ามากที่สุดเท่าไหร่
แนวทางการแก้ไขปัญหา

1. นำข้อมูลในอาร์เรย์ตัวปัจจุบัน - ตัวถัดไป โดยไม่คิดเครื่องหมาย อาจใช้ฟังก์ชัน abs() ใน math.h หรือใช้การตรวจสอบหากมีค่าน้อยกว่า 0 ให้คูณด้วย -1 แล้วเก็บค่าที่มากที่สุดไว้ โดยเปรียบเทียบค่าที่ได้ กับตัวแปรที่เก็บค่ามากที่สุด
2. ทำตามในข้อ 1 จนถึงตำแหน่งของอาร์เรย์ตำแหน่งรองสุดท้าย คือตำแหน่งที่ 8
3. แสดงผลตามตัวอย่าง

**Testcase 1 :**

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 1 2 3 4 5 6 7 8 9 10
Maximum differnce is 1

```

**Testcase 2 :**

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 1 3 5 25 12 99 47 97 14 17
Maximum differnce is 87

```

**Testcase 3 :**

```
 *** Maximum diference of adjacent number ***
Enter 10 integers : 2 4 6 8 10 -10 -8 -6 -4 -2
Maximum differnce is 20

```

**Code :**

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int maxDifference = 0;

    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        int difference = abs(numbers[i] - numbers[i + 1]);
        if (difference > maxDifference)
        {
            maxDifference = difference;
        }
    }

    printf("Maximum differnce is %d\n", maxDifference);

    return 0;
}
```

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

**Testcase 1 :**

```
 *** Structure Array ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsak 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99013876 Somkid 13


 *** Analyzing Data ***
Average marking = 66.300
Min -- Max      = 13 --> 99

```

**Code :**

```c
#include <stdio.h>
#define SIZE 10

int main()
{
    struct student
    {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i, i_max = 0, i_min = 0;
    float average = 0, sum = 0;

    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
        sum += st[i].marking;

        if (st[i].marking > st[i_max].marking)
        {
            i_max = i;
        }
        if (st[i].marking < st[i_min].marking)
        {
            i_min = i;
        }
    }

    average = sum / SIZE;

    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n", average);
    printf("Min -- Max      = %d --> %d\n", st[i_min].marking, st[i_max].marking);

    return 0;
}
```

---

## Chapter : 8 - item : 5 - structure array 2

เขียนโปรแกรมรับ ข้อมูลนักเรียน 10 คน โดยนักเรียนแต่ละคนมีข้อมูลดังนี้
เลขประจำตัว ชื่อ คะแนน

แล้วหาว่า มีกี่คนได้คะแนนสูงสุด ใครบ้าง
แล้วแสดงผลออกมาตามตัวอย่าง

**Testcase 1 :**

```
 *** Structure Array 2 ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsri 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99013876 Somkid 13


 *** Analyzing Data ***
Max marking   = 99 points, 3 students.
1. 99011234 Somsak 99
2. 99011233 Somsri 99
3. 99049234 Gulf 99

```

**Testcase 2 :**

```
 *** Structure Array 2 ***
Enter data : 99011234 Somsak 99
99012456 Pracha 44
99019876 Suraphon 86
99011233 Somsri 99
99022456 Pisanu 78
99039876 Sriracha 66
99049234 Gulf 99
99012756 Energy 43
99019806 Pronpan 36
99093876 Dekdee 100


 *** Analyzing Data ***
Max marking   = 100 points, 1 students.
1. 99093876 Dekdee 100

```

**Code :**

```c
#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 10

typedef struct
{
    char id[10];
    char name[50];
    int score;
} Student;

int main()
{
    Student students[NUM_STUDENTS];
    int i, maxScore = 0, count = 0;

    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        scanf("%s %s %d", students[i].id, students[i].name, &students[i].score);
        if (students[i].score > maxScore)
        {
            maxScore = students[i].score;
        }
    }

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].score == maxScore)
        {
            count++;
        }
    }

    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n", maxScore, count);

    int index = 1;
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        if (students[i].score == maxScore)
        {
            printf("%d. %s %s %d\n", index++, students[i].id, students[i].name, students[i].score);
        }
    }

    return 0;
}
```

---

# Chapter : 9 - ตัวแปรแบบตัวชี้ตำแหน่ง และฟังก์ชันขั้นสูง

## Chapter : 9 - item : 1 - palindrom A

จงเขียนโปรแกรม เพื่อรับข้อความ 1 บรรทัด แล้วตรวจสอบว่า เป็น ตัวอักษรพาลินโดรมหรือไม่
พาลินโดรมคืออักษรที่สมมาตรกัน เช่น

madam
abba
atoyota
detartrated

ให้นักศึกษาแก้ source code ด้านล่างเพื่อให้แสดงผลตามตัวอย่าง

```c
#include<stdio.h>

int main() {
	char str[100],*p_left, *p_right;
	printf(" *** Palindrome Verification ***\n");
	printf("Enter a sentence : ");
	scanf("%[^\n]",str);

	for(p_right=str; *p_right!='\0';p_right++);
		p_right--;

	for(p_left=str; p_left<p_right; p_left++,p_right--) {
		if(*p_left!=*p_right)
			break;
	}
	if (p_left < p_right) {
		printf("%s is NOT palindrom.\n",str);
	} else {
		printf("%s is PALINDROME.\n",str);
	}

	return 0;
}
```

**Testcase 1 :**

```
 *** Palindrome Verification ***
Enter a sentence : madam
"madam" is PALINDROME.

```

**Testcase 2 :**

```
 *** Palindrome Verification ***
Enter a sentence : abba
"abba" is PALINDROME.

```

**Testcase 3 :**

```
 *** Palindrome Verification ***
Enter a sentence : atoyota
"atoyota" is PALINDROME.

```

**Testcase 4 :**

```
 *** Palindrome Verification ***
Enter a sentence : a toyota
"a toyota" is NOT palindrom.

```

**Testcase 5 :**

```
 *** Palindrome Verification ***
Enter a sentence : detartrated
"detartrated" is PALINDROME.

```

**Testcase 6 :**

```
 *** Palindrome Verification ***
Enter a sentence : Wonton
"Wonton" is NOT palindrom.

```

**Testcase 7 :**

```
 *** Palindrome Verification ***
Enter a sentence : KappAk
"KappAk" is NOT palindrom.

```

**Code :**

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    scanf(" %[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("\"%s\" is NOT palindrom.\n", str);
            return 0;
        }
    }

    printf("\"%s\" is PALINDROME.\n", str);
    return 0;
}
```

---

## Chapter : 9 - item : 2 - (43) โจร

สมมติว่านักศึกษาคือโจร และกำลังจะฝึกสลับกระเป๋าตังของตัวเองกับเหยื่อ  
นักศึกษาเริ่มฝึกฝนผ่านการเขียนโปรแกรม  
โดยต้องการที่จะสลับที่ของตัวแปร 2 ตัว

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

**ให้นำโค้ดข้างล่างนี้ไปแก้ไขเพิ่มเติม โดย ห้ามแก้ไข main**

และให้สร้างฟังก์ชันชื่อ swap_wallet ซึ่ง

- ห้ามมีการ return ใด ๆ
- รับ parameter เข้ามากี่ตัวก็ได้
- ห้ามมีการ printf ภายในฟังก์ชันนี้ ให้มีแค่ใน main เท่านั้น

_Hint: pass by referrence_

```c
int main()
{
	int my_wallet, other_wallet;
	printf("Enter my money, other money : ");
	scanf("%d  %d", &my_wallet, &other_wallet);
	printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
	swap_wallet(&my_wallet, &other_wallet);
	printf("\n\n====== Whooop! ======\n\n");
	printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}
```

**Testcase 1 :**

```
Enter my money, other money : 10 200
Me :   10 | Other :  200

====== Whooop! ======

Me :  200 | Other :   10
```

**Testcase 2 :**

```
Enter my money, other money : 0 500
Me :    0 | Other :  500

====== Whooop! ======

Me :  500 | Other :    0
```

**Code :**

```c
#include <stdio.h>

void swap_wallet(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}
```

---

## Chapter : 9 - item : 3 - (4) คะแนน

นักศึกษากำลังมองหาคะแนนวิชา Com Pro ของตัวเอง แต่เนื่องจากมีคนเรียนเยอะเกินไป ทำให้หายังไงก็ไม่เจอ  
อยู่ดี ๆ นักศึกษาก็มีไอเดียขึ้นมาว่า ถ้าเราเรียงคะแนนจากมากไปหาน้อย  
เราก็จะเจอคะแนนของเราอยู่อันแรกๆแน่นอน หาง่ายชัวร์ !!

ปล. แสดงผลให้เหมือนเป๊ะ ๆ นะ

**ให้เขียนฟังก์ชัน sort ขึ้นมาเพื่อให้โปรแกรมสมบูรณ์ และห้ามแก้ไข main**

_Hint : pass by reference_

```c
int main()
{
	int scores[5], i;
	printf("Enter 5 score : ");

	for (i = 0; i < 5; i++)
		scanf("%d", &scores[i]);

	sort(scores);
	printf("Sorted : ");

	for (i = 0; i < 5; i++)
		printf("%d ", scores[i]);
}
```

**Testcase 1 :**

```
Enter 5 score : 5 4 3 2 1
Sorted : 5 4 3 2 1
```

**Testcase 2 :**

```
Enter 5 score : 1 2 3 4 5
Sorted : 5 4 3 2 1
```

**Testcase 3 :**

```
Enter 5 score : 2 3 1 2 4
Sorted : 4 3 2 2 1
```

**Code :**

```c
#include <stdio.h>

void sort(int *scores)
{
    int i, j, temp;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (scores[j] < scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int scores[5], i;
    printf("Enter 5 score : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for (i = 0; i < 5; i++)
        printf("%d ", scores[i]);
}
```

---

## Chapter : 9 - item : 4 - Palindrome function (L4)

จงเขียนโปรแกรม เพื่อรับข้อความ 1 บรรทัด แล้วตรวจสอบว่า เป็น ข้อความพาลินโดรมหรือไม่
โดยที่ตัวอักษรตัวใหญ่ และ ตัวเล็ก ถือเป็นตัวอักษรเดียวกัน
ตรวจสอบเฉพาะ ตัวอักษร และ ตัวเลข
สัญญลักษณ์พิเศษ หรือ ช่องว่าง (space) ให้ข้ามไป

ให้แก้ไขฟังก์ชั่น เพื่อให้ได้ผลลัพธ์ตามตัวอย่าง ห้ามแก้ไข main function

```c
#include<stdio.h>
#include<string.h>

void palindrome(char *);

int main() {
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    printf("Entered message : %s\n",str);
    palindrome(str);

	return 0;
}
```

**Testcase 1 :**

```
 ***  Palindrome Verification  ***
 *  verify only alphabet number  *
 *        insensitive case       *
 *-------------------------------*
Enter a sentence : a&b#a
Entered message : a&b#a
"a&b#a" is PALINDROME.

```

**Testcase 2 :**

```
 ***  Palindrome Verification  ***
 *  verify only alphabet number  *
 *        insensitive case       *
 *-------------------------------*
Enter a sentence : a b+A
Entered message : a b+A
"a b+A" is PALINDROME.

```

**Testcase 3 :**

```
 ***  Palindrome Verification  ***
 *  verify only alphabet number  *
 *        insensitive case       *
 *-------------------------------*
Enter a sentence : abbaABBA
Entered message : abbaABBA
"abbaABBA" is PALINDROME.

```

**Testcase 4 :**

```
 ***  Palindrome Verification  ***
 *  verify only alphabet number  *
 *        insensitive case       *
 *-------------------------------*
Enter a sentence : 789 A a= 987
Entered message : 789 A a= 987
"789 A a= 987" is PALINDROME.

```

**Testcase 5 :**

```
 ***  Palindrome Verification  ***
 *  verify only alphabet number  *
 *        insensitive case       *
 *-------------------------------*
Enter a sentence : 123325
Entered message : 123325
"123325" is NOT palindrom.

```

**Code :**

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palindrome(char *str)
{
    char filtered[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalnum(str[i]))
        {
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0';

    int len = strlen(filtered);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (filtered[i] != filtered[len - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
    {
        printf("\"%s\" is PALINDROME.\n", str);
    }
    else
    {
        printf("\"%s\" is NOT palindrom.\n", str);
    }
}

int main()
{
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]", str);
    printf("Entered message : %s\n", str);
    palindrome(str);
    return 0;
}
```

---

## Chapter : 9 - item : 5 - phone number

รับข้อมูลเป็นตัวเลขเบอร์โทรศัพท์ 10 หลัก แล้วแสดงตัวเลข เป็นคำอ่านตามตัวอย่าง
ทำ function number2word ให้สมบูรณ์
ห้ามแก้ไข main function

```c
#include<stdio.h>

int main() {
	char phone_number[15],str[15]="nothing";
	int i;
	printf("*** Number to words ***\n");
	printf("Enter phone number : ");
	scanf("%s",phone_number);
	printf("%s ==> ",phone_number);
	for(i=0;phone_number[i] != '\0';i++) {
		number2word(phone_number[i]-0x30,str);
		printf("%s ",str);
	}
	printf("\n");

	return 0;
}
```

**Testcase 1 :**

```
*** Number to words ***
Enter phone number : 0881231234
0881231234 ==> zero eight eight one two three one two three four

```

**Testcase 2 :**

```
*** Number to words ***
Enter phone number : 0884238899
0884238899 ==> zero eight eight four two three eight eight nine nine

```

**Testcase 3 :**

```
*** Number to words ***
Enter phone number : 0869037938
0869037938 ==> zero eight six nine zero three seven nine three eight

```

**Testcase 4 :**

```
*** Number to words ***
Enter phone number : 023264711
023264711 ==> zero two three two six four seven one one

```

**Code :**

```c
#include <stdio.h>

void number2word(int num, char *str)
{
    switch (num)
    {
    case 0:
        sprintf(str, "zero");
        break;
    case 1:
        sprintf(str, "one");
        break;
    case 2:
        sprintf(str, "two");
        break;
    case 3:
        sprintf(str, "three");
        break;
    case 4:
        sprintf(str, "four");
        break;
    case 5:
        sprintf(str, "five");
        break;
    case 6:
        sprintf(str, "six");
        break;
    case 7:
        sprintf(str, "seven");
        break;
    case 8:
        sprintf(str, "eight");
        break;
    case 9:
        sprintf(str, "nine");
        break;
    default:
        sprintf(str, "invalid");
        break;
    }
}

int main()
{
    char phone_number[15], str[15] = "nothing";
    int i;
    printf("*** Number to words ***\n");
    printf("Enter phone number : ");
    scanf("%s", phone_number);
    printf("%s ==> ", phone_number);
    for (i = 0; phone_number[i] != '\0'; i++)
    {
        number2word(phone_number[i] - 0x30, str);
        printf("%s ", str);
    }
    printf("\n");
    return 0;
}
```

---
