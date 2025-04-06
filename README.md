## 👋 Hi Everyone!

Today, I'm starting to learn programming, and this is my hands-on note.
Here, I explain the main concepts with code, and each section has corresponding code examples in the same file.

Note: If you don't understand anything I said, please check the actual code file.

---


## 🚀 Getting Started

To clone this repository and run it locally on your computer, follow these steps:

Open your terminal and run the following command to clone the repository to your local machine:
```bash
git clone https://github.com/MashrafiDev/Basic-Syntax-Variables-and-Data-types.git
cd Basic-Syntax-Variables-and-Data-types


### 🤔 Why C Language?

Although I have some experience with web development, I believe in building a strong foundation. That’s why I’m starting from scratch with the C programming language.  
👉 If you're just starting out and want something easier, Python can also be a good choice.

---

### 🧠 What You'll Learn Here:

- Basic Structure of a C Program
- How to Print Output in C
- How to Take Input in C
- Variables and Data Types
- Data Type Limitations
- Variable Naming Rules

---

### 🧱 Structure of a C Program:

```c
#include <stdio.h> // Includes the Standard Input Output library

int main() {
    printf("Hello World\n"); // Prints "Hello World"
    return 0; // Indicates successful program execution
}
```

- `#include <stdio.h>`: Includes the Standard Input Output header.
- `int main()`: This is the starting point of a C program.
- `printf()`: Used for printing output.
- `return 0`: Means program executed successfully.

---

### 🔤 Escape Sequences:

- `\n`: New line  
- `\t`: Tab (adds 4 spaces)
```c
Example: printf("Hello\nWorld\t!");
```

---

### 🔢 Data Types in C:

| Data Type | Example Values | Memory | Format Specifier |
|-----------|----------------|--------|------------------|
| `int`     | 4, -10         | 4 Bytes | `%d`             |
| `float`   | 3.14, -2.5     | 4 Bytes | `%f`             |
| `char`    | 'A', '@'       | 1 Byte  | `%c`             |
| `bool`    | true/false     | 1 Byte  | `%d` (0 or 1)     |

---

### ⚙️ Variable Declaration:

```c
int num = 4;
float price = 3.14;
char letter = 'A';
```

**Rule**:  
`DataType VariableName = Value;`

⚠️ For `char`, always use single quotes like `'A'`, not `"A"`.

---

### 🔄 Format Specifiers Recap:

| Type          | Specifier | Example        |
|---------------|-----------|---------------------------------|
| int           | `%d`      | `printf("%d", num);`            |
| float         | `%.2f`    | `printf("%.2f", f);`            |
| char          | `%c`      | `printf("%c", letter);`         |
| long int      | `%ld`     | `printf("%ld", bigNumber);`     |
| long long int | `%lld`    | `printf("%lld", biggerNumber);` |
| double        | `%lf`     | `printf("%lf", doubleVal);`     |

---

### 📥 Taking Input from User:

```c
int i;
float f;
char c;

scanf("%d %f %c", &i, &f, &c);
```

- `&` is used to refer to the memory address where data will be stored.
- Always match `scanf()` specifier with the variable type.

---

### ⚠️ Data Type Limits:

| Type            | Size | Max Digits | Use                      |
|-----------------|------|------------|--------------------------|
| int             | 4 B  | ~10 digits | normal integers          |
| long long int   | 8 B  | ~20 digits | large integers           |
| float           | 4 B  | ~7 digits  | basic fractions          |
| double          | 8 B  | ~15 digits | accurate large fractions |

📌 To store bigger values than supported, use `long long int` or `double`.

---

### 🔐 Variable Naming Rules:

1. Must start with a letter or underscore (`_`)
2. Can include letters, numbers, or underscores
3. Cannot use C keywords like `int`, `return`, `if` as variable names

---

### 🧮 Bonus: Memory & Bit Concepts

- 1 Byte = 8 Bits
- 1 KB = 1024 Bytes
- 1 MB = 1024 KB
- 1 GB = 1024 MB

Binary power logic:
- 2^1 = 2  
- 2^3 = 8  
- 2^8 = 256  
- 2^32 = 4,294,967,296 (max for 32-bit int)

---

### ✅ Final Thoughts

This type of repository will be added to my GitHub as I continue to learn more topics. I hope others find it helpful as well. If you find it useful, feel free to follow me and star the repo! If you notice any mistakes, please let me know so I can fix them. I'll be creating new repositories as I learn, so feel free to follow those as well if you want to keep up with my progress.