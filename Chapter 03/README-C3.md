# Chapter : 3 - การใช้งานคำสั่ง Input Output และการคำนวณต่างๆ

## Chapter : 3 - item : 1 - รับตัวเลขแสดงตัวอักษร

ให้นักศึกษารับข้อมูลตัวเลข 3 ตัว แล้ว แสดงตัวอักษรของตัวเลขนั้น

<img width="694" alt="Screen Shot 2568-05-02 at 19 02 15" src="https://github.com/user-attachments/assets/99779db2-1453-48e8-98fc-f08e5cee1518" />

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

<img width="696" alt="Screen Shot 2568-05-02 at 19 02 41" src="https://github.com/user-attachments/assets/252bc2e2-ddec-4bd0-b227-dfd0566ecd32" />

<img width="696" alt="Screen Shot 2568-05-02 at 19 03 00" src="https://github.com/user-attachments/assets/719aca9a-1c77-4729-b8fd-fcb4c0403ad0" />

---

## Chapter : 3 - item : 3 - แปลง เซลเซียส เป็น ฟาเรนไฮต์

รับค่าอุณหภูมิ เป็น องศาเซลเซียส เป็นจำนวนทศนิยม
แล้วแสดงผลเป็น องศาฟาเรนไฮต์ ทศนิยม 2 ตำแหน่ง

<img width="699" alt="Screen Shot 2568-05-02 at 19 03 39" src="https://github.com/user-attachments/assets/ad14b8fe-40b1-4998-a2fa-80e659aa3ebf" />

<img width="695" alt="Screen Shot 2568-05-02 at 19 03 51" src="https://github.com/user-attachments/assets/a961115d-ff15-4c89-9194-210d7178e313" />

---

## Chapter : 3 - item : 4 - การรับข้อความจากคีย์บอร์ด

จงเขียนโปรแกรมรับข้อความ 1 บรรทัด

- นำข้อความที่รับเข้ามา แสดงผลตามตัวอย่าง

<img width="698" alt="Screen Shot 2568-05-02 at 19 04 11" src="https://github.com/user-attachments/assets/f3bcee28-d296-4d74-8662-c1d253edd1cd" />

<img width="699" alt="Screen Shot 2568-05-02 at 19 04 28" src="https://github.com/user-attachments/assets/7d326ba2-ca33-4804-ba5f-9d75dfcd8c48" />

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

<img width="695" alt="Screen Shot 2568-05-02 at 19 05 19" src="https://github.com/user-attachments/assets/175aaf35-52cd-46f4-b1fd-930c066b3e25" />

<img width="697" alt="Screen Shot 2568-05-02 at 19 05 38" src="https://github.com/user-attachments/assets/ce751f9a-c952-4270-9744-497af4c672c0" />

---
