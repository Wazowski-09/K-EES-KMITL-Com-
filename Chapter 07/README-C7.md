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

---

## Chapter : 7 - item : 3 - เปลี่ยนข้อความเป็น ตัวใหญ่ ตัวเล็ก

จงเขียนโปรแกรมรับข้อความ หนึ่งบรรทัด
แล้วแสดงผล 2 บรรทัด
บรรทัดที่ 1 แสดงผลเป็น ตัวอักษรตัวใหญ่
บรรทัดที่ 2 แสดงผลเป็น ตัวอักษรตัวเล็ก

**ข้อแนะนำ**
ใช้ function toupper และ tolower ซี่งอยู่ใน ctype.h

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

---
