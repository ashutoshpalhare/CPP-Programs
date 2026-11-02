# 100 C++ Programming Programs

A beginner-friendly collection of **100 standalone C++ programs** covering core programming fundamentals, problem-solving patterns, arrays, strings, pointers, object-oriented programming, and file handling.

Every program is kept as an individually numbered `.cpp` file in the repository root. The filenames make the learning order easy to follow.

## Topics Covered

| Program numbers | Topic | Examples |
|---|---|---|
| 001–015 | C++ Basics | Input/output, arithmetic, swapping, temperature and area conversions |
| 016–030 | Conditional Statements | Even/odd, largest values, leap year, grading, switch, validation |
| 031–039 | Loops | Counting, sums, multiplication tables, factorial |
| 040–060 | Number Logic | Reversing numbers, digit operations, primes, GCD, LCM, Fibonacci |
| 061–070 | Pattern Programs | Star, number, and alphabet patterns |
| 071–082 | Arrays & Matrices | Array operations, sorting, searching, duplicate removal, matrix operations |
| 083–090 | Strings | Length, copy, concatenation, comparison, reversal, character frequency |
| 091–092 | Recursion | Factorial and Fibonacci using recursion |
| 093–095 | Pointers & References | References, pointer-based array operations, pointer arithmetic |
| 096–098 | OOP & User-Defined Types | Class/object, vector-based student records, union |
| 099 | File Handling | Writing to and reading from a file |
| 100 | Mini Project | Student management system |

## Repository Structure

All 100 source files are stored in the root directory; they are **not** separated into topic folders.

```text
CPP-Programs/
├── 001_hello_world.cpp
├── 002_personal_details.cpp
├── 003_add_two_numbers.cpp
├── ...
├── 099_file_write_read.cpp
├── 100_student_management_system.cpp
├── .github/
│   └── workflows/
│       └── cpp-compile.yml
├── LICENSE
└── README.md
```

The numbered filenames correspond to the topic ranges in the table above. Browse the repository's root directory to see the complete list.

## Requirements

- A C++ compiler: GCC or Clang.
- C++17 support.
- An editor or IDE such as Visual Studio Code, Code::Blocks, or another C++-compatible IDE.

**Recommended:** GCC with the C++17 standard.

## Clone the Repository

```bash
git clone https://github.com/ashutoshpalhare/CPP-Programs.git
cd CPP-Programs
```

## Compile and Run a Program

Each source file is a separate, standalone program. Compile and run **one file at a time**.

For example, to compile the Hello World program:

```bash
g++ -std=c++17 001_hello_world.cpp -o hello_world
```

Run it on Linux or macOS:

```bash
./hello_world
```

Run it on Windows:

```powershell
.\hello_world.exe
```

Replace `001_hello_world.cpp` with the filename of the program you want to try. Do not pass every `.cpp` file to one compiler command: each file has its own `main()` function.

## Learning Roadmap

A suggested order for working through the collection:

1. Start with input/output, variables, and arithmetic.
2. Practice conditions and loops.
3. Work through number logic and pattern problems.
4. Learn arrays, matrices, and strings.
5. Study recursion, pointers, and references.
6. Explore classes, objects, and user-defined types.
7. Finish with file handling and the student management mini project.

Try changing the inputs and implementing the logic yourself instead of only copying and running the examples.

## Automated Checks

GitHub Actions runs a compile check for every root-level `.cpp` file when changes are pushed or a pull request targets `main`.

The workflow uses GCC with `-std=c++17 -fsyntax-only`. It checks that each source file parses and compiles without executing the programs. This is a syntax/compile check, not a test of runtime behaviour or correctness for every possible input.

## Contributions

Contributions are welcome.

1. Fork the repository.
2. Create a feature branch.
3. Add a useful program or improve an existing one.
4. Keep the code beginner-friendly and avoid duplicate examples.
5. Submit a pull request describing the change.

## License

This project is licensed under the [MIT License](LICENSE).

## Author

**Ashutosh Palhare**

- GitHub: [@ashutoshpalhare](https://github.com/ashutoshpalhare)
- Portfolio: [ashutoshpalhare.github.io](https://ashutoshpalhare.github.io/)

---

If you find this collection useful, consider giving the repository a star.

Happy coding! 🚀
