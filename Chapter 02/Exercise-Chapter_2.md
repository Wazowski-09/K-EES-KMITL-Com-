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

<img width="731" alt="Screen Shot 2568-05-02 at 18 32 39" src="https://github.com/user-attachments/assets/90bb5266-d616-4f71-bee2-357c4e696e7c" />

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

<img width="729" alt="Screen Shot 2568-05-02 at 18 33 11" src="https://github.com/user-attachments/assets/d7665c48-6d4c-405a-bdd9-e2858e7bc504" />

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

<img width="728" alt="Screen Shot 2568-05-02 at 18 34 23" src="https://github.com/user-attachments/assets/9de2ae08-d13b-49e0-8f2e-a9d54f9ce789" />

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

<img width="731" alt="Screen Shot 2568-05-02 at 18 34 40" src="https://github.com/user-attachments/assets/8b91fa61-13ba-40c4-8d51-b5e57ff62830" />

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

<img width="728" alt="Screen Shot 2568-05-02 at 18 34 59" src="https://github.com/user-attachments/assets/305978fa-9a54-4d43-9447-eacc6fa64a7b" />

---
