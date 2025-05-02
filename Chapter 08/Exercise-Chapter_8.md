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

<img width="699" alt="Screen Shot 2568-05-02 at 20 53 12" src="https://github.com/user-attachments/assets/fdfca9a2-e8cd-4901-b278-2d44591ab587" />

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

<img width="695" alt="Screen Shot 2568-05-02 at 20 53 26" src="https://github.com/user-attachments/assets/fc5bceec-62a9-4a53-b0ed-024f45873afa" />

<img width="700" alt="Screen Shot 2568-05-02 at 20 53 36" src="https://github.com/user-attachments/assets/f4a2d620-8765-4b43-b4b0-b0614ad1c804" />

---

git mv Chapter\ 08/README-C8.md Chapter\ 08/Exercise-Chapter_8.md
