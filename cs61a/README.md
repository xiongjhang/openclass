# cs61a

> This folder is code for cs61a spring 2025.

## Useful Link

- [Using OK](https://cs61a.org/articles/using-ok/)

- [UNIX tutorial](https://cs61a.org/articles/unix/)

- [Debug](https://cs61a.org/articles/debugging/)

## Labs

1. Lab 0: Getting Started - Practice of using software

2. Lab 1: Functions

3. Lab 2: Higher-Order Functions, Lambda Expressions

## Hws

1. Homework 1: Functions, Control

2. Homework Higher-Order Functions

## Appendix

### Code Check

- `python3 ok -q <func_name>`: Test specific questions

- `python3 ok`: Test all questions

- `python3 ok -v`: Display all tests. By default, only tests that **fail** will appear.

- `python3 ok --local`: Test locally

### Useful Python Command Line Options

Here are the most common ways to run Python on a file.

1. Using no command-line options will run the code in the file you provide and return you to the command line. If your file just contains function definitions, you'll see no output unless there is a syntax error.

    ```
    python3 lab00.py
    ```

2. **`-i`**: The `-i` option runs the code in the file you provide, then opens an interactive session (with a `>>>` prompt). You can then evaluate expressions such as calling functions you defined. To exit, type `exit()`. You can also use the keyboard shortcut `Ctrl-D` on Linux/Mac machines or `Ctrl-Z Enter` on Windows.

    If you edit the Python file while running it interactively, you will need to exit and restart the interpreter in order for those changes to take effect.

    Here's how we can run `lab00.py` interactively:
    ```
    python3 -i lab00.py
    ```

3. **`-m doctest`**: Runs the doctests in a file, which are the examples in the docstrings of functions.

    Each test in the file consists of `>>>` followed by some Python code and the expected output.

    Here's how we can run the doctests in `lab00.py`:
    ```
    python3 -m doctest lab00.py
    ```

    When our code passes all of the doctests, no output is displayed. Otherwise, information about the tests that failed will be displayed.