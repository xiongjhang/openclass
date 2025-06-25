# CS106L: Standard C++ Programming - Spring 2025

> Official Website: https://web.stanford.edu/class/cs106l/

**Short Description** \
CS106L is a 1-unit class that explores the modern C++ language in depth. We'll cover some of the most exciting features of C++, including modern patterns (up through C++26) that give it beauty and power.

## Course Map

1. Welcome
2. Types and Structs
3. Initialization and References
4. Guest Lecture
5. Streams
6. Containers
7. Iterators and Pointers
8. Classes
9. Inheritance
10. Const Correctness & Class Templates
11. Function Templates
12. Functions and Lambdas
13. Operator Overloading
14. Special Member Functions
15. Move Semantics
16. `std::optional` and Type Safety
17. RAII, Smart Pointers, and Building C++ Projects

## Assignments Information

> Official Repo: https://github.com/cs106l/cs106l-assignments

- [x] Assignment 0: Setup!

- [x] Assignment 1: SimpleEnroll

- [ ] Assignment 3: Make a Class

- [ ] Assignment 4: Ispell

- [ ] Assignment 5: Treebook

- [ ] Assignment 6: Explore Courses

- [ ] Assignment 7: Unique Pointer

## Collections

### Testing your setup!

Now we will have you compile your first C++ file and run the autograder. To run any C++ code, first you'll need to compile it. Open up a VSCode terminal (again, hit <kbd>Ctrl+\`</kbd> or go to **Terminal > New Terminal** at the top of the window). Then make sure that you are in the `assignment0/` directory and run:

```sh
g++ -std=c++23 main.cpp -o main
```

This **compiles** the C++ file `main.cpp` into an executable file called `main` which contains raw machine code that your processor can execute. Assuming that your code compiles without any errors, you can now do:

```sh
./main
```

which will actually run the `main` function in `main.cpp`. This will execute your code and then run an autograder that will check that your installation is correct.

> [!NOTE]
>
> ### Note for Windows
>
> On Windows, you may need to compile your code using
>
> ```sh
> g++ -static-libstdc++ -std=c++20 main.cpp -o main
> ```
>
> in order to see output. Also, the output executable may be called `main.exe`, in which case you'll run your code with:
>
> ```sh
> ./main.exe
> ```
> 

> [!NOTE]
>
> ### Note for Mac
>
> You may get a compiler error when attempting to compile this code due to a missing `wchar.h` (or some similar file). If this happens, you may need to reinstall the Xcode command line tools on your machine by running the following commands:
>
> ```sh
> sudo rm -rf /Library/Developer/CommandLineTools
> sudo xcode-select --install
> ```
>
> Afterwards, you should be able to compile normally.