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

<img width="701" alt="Screen Shot 2568-05-02 at 21 11 23" src="https://github.com/user-attachments/assets/94e9747f-fe39-4db0-bb7c-343262bdca84" />

<img width="696" alt="Screen Shot 2568-05-02 at 21 11 38" src="https://github.com/user-attachments/assets/38bee712-93fe-4121-8cd1-1330303d4009" />

<img width="697" alt="Screen Shot 2568-05-02 at 21 11 47" src="https://github.com/user-attachments/assets/56fdd271-1ee8-4815-9aab-98a7d5f48500" />

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

<img width="697" alt="Screen Shot 2568-05-02 at 21 12 07" src="https://github.com/user-attachments/assets/44223842-8331-44ff-aff2-c578bd0b4f7f" />

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

<img width="698" alt="Screen Shot 2568-05-02 at 21 12 23" src="https://github.com/user-attachments/assets/7a55d286-85a5-4422-b081-924298940e2f" />

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

<img width="697" alt="Screen Shot 2568-05-02 at 21 12 44" src="https://github.com/user-attachments/assets/32e52aaf-9a22-49a5-8bf8-c98ca32130eb" />

<img width="697" alt="Screen Shot 2568-05-02 at 21 14 29" src="https://github.com/user-attachments/assets/af9cef82-6710-4b32-9c51-1979da8b220c" />

<img width="696" alt="Screen Shot 2568-05-02 at 21 14 40" src="https://github.com/user-attachments/assets/5d966eb8-adf1-42b4-8928-99f36d2e7c3c" />

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

<img width="697" alt="Screen Shot 2568-05-02 at 21 15 02" src="https://github.com/user-attachments/assets/20f893aa-1609-469c-8185-959784be0d6e" />

<img width="694" alt="Screen Shot 2568-05-02 at 21 15 14" src="https://github.com/user-attachments/assets/a353d868-83b4-40d2-8c3c-487a1e517f1e" />

---
