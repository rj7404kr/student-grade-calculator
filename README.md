# Student Result Management System in C (Using File Handling)

## 📌 Project Overview:

This is a C language project created to manage student results. It takes details and marks of multiple students, calculates total marks, average, grade, checks pass/fail status, assigns rank based on average, and stores the complete result in a file (`record.txt`).

This project follows the file handling approach and meets all the key requirements suggested by the teacher.

---

## 👩‍🎓 Features:

* Input details for multiple students
* Marks entry for 5 subjects
* Calculates total and average
* Grade assignment based on average
* Checks individual subject for pass/fail
* Rank assignment based on average
* Saves output in a text file (`record.txt`)

---

## 🛠 Concepts Used:

* `struct` (for storing student data)
* `arrays` (for marks)
* `functions` (for calculating grade, result, rank)
* `file handling` (`fopen`, `fprintf`, `fclose`)
* `snprintf` for safe string writing

---

## 📝 File Description:

* **main.c** – Contains the full C source code
* **record.txt** – Output file that stores all student result data
* **README.txt** – Project explanation and features

---

## 📊 Grade Criteria:

| Average Score | Grade |
| ------------- | ----- |
| 90 and above  | A     |
| 75 – 89       | B     |
| 60 – 74       | C     |
| 40 – 59       | D     |
| Below 40      | F     |

---

## 📊 Sample Output in record.txt:

| Name            | Roll | Total | Average | Grade | Result | Rank |
| --------------- | ---- | ----- | ------- | ----- | ------ | ---- |
| Rajni Kumari    | 101  | 453   | 90.60   | A     | Pass   | 1    |
| Neha Kumari     | 102  | 445   | 89.00   | B     | Pass   | 2    |
| Jyoti Gupta     | 103  | 301   | 60.20   | C     | Fail   | 7    |
| Amisha Raj      | 104  | 296   | 59.20   | D     | Fail   | 9    |
| Nandani Pandey  | 105  | 337   | 67.40   | C     | Fail   | 4    |
| Aman Kumar      | 106  | 268   | 53.60   | D     | Fail   | 10   |
| Raushan Kumar   | 107  | 327   | 65.40   | C     | Pass   | 5    |
| Md.Asif         | 108  | 423   | 84.60   | B     | Pass   | 3    |
| Harsh Kumar     | 109  | 305   | 61.00   | C     | Fail   | 6    |
| Shubham Shastri | 110  | 301   | 60.20   | C     | Fail   | 8    |

---

## 📚 How to Compile and Run:

1. Open terminal or use VS Code
2. Compile the file using:

   ```bash
   gcc main.c -o result
   ```
3. Run the program:

   ```bash
   ./result
   ```
4. Check `record.txt` for the result

---

## ✅ Use Cases:

* College/School mini project
* Resume or academic portfolio
* Practicing file handling and data structures in C

---

## ✍️ Created By:

**Rajni Kumari**

---
