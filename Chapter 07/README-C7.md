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

<img width="697" alt="Screen Shot 2568-05-02 at 20 43 58" src="https://github.com/user-attachments/assets/0e321020-710d-4631-8683-d4d52163c557" />

<img width="698" alt="Screen Shot 2568-05-02 at 20 44 12" src="https://github.com/user-attachments/assets/ad30d67f-48c4-4d48-afce-3b6df7109f2c" />

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

<img width="695" alt="Screen Shot 2568-05-02 at 20 44 34" src="https://github.com/user-attachments/assets/380b8cab-15da-4c21-8143-907a5650cd23" />

---

## Chapter : 7 - item : 3 - เปลี่ยนข้อความเป็น ตัวใหญ่ ตัวเล็ก

จงเขียนโปรแกรมรับข้อความ หนึ่งบรรทัด
แล้วแสดงผล 2 บรรทัด
บรรทัดที่ 1 แสดงผลเป็น ตัวอักษรตัวใหญ่
บรรทัดที่ 2 แสดงผลเป็น ตัวอักษรตัวเล็ก

**ข้อแนะนำ**
ใช้ function toupper และ tolower ซี่งอยู่ใน ctype.h

<img width="695" alt="Screen Shot 2568-05-02 at 20 44 48" src="https://github.com/user-attachments/assets/b900a322-1422-42de-ad38-641333334f84" />

<img width="697" alt="Screen Shot 2568-05-02 at 20 45 01" src="https://github.com/user-attachments/assets/70a7d745-e5b9-4aea-871f-47cf654aec6d" />

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

<img width="696" alt="Screen Shot 2568-05-02 at 20 45 23" src="https://github.com/user-attachments/assets/56ed6f8e-4ccf-421c-ba82-0eb826ae396c" />

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

<img width="697" alt="Screen Shot 2568-05-02 at 20 45 45" src="https://github.com/user-attachments/assets/d09c20b7-7aba-475a-9afc-b5f8d17b2ca6" />

<img width="699" alt="Screen Shot 2568-05-02 at 20 46 00" src="https://github.com/user-attachments/assets/928ae422-31da-4440-9dab-585e9bc1847d" />

---
