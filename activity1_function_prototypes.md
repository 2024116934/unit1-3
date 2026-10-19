# ELEC2645 Unit 1.3 Activity 1: Function Prototypes

A function prototype tells the compiler a function's name, return type and parameters before the full function definition appears. This allows functions to be called before they are defined and helps the compiler check that functions are used correctly.

```c
int add(int a, int b); // Prototype or declaration

int main(void) {
    int result = add(2, 3); // Function call
    return 0;
}

int add(int a, int b) { // Full definition
    return a + b;
}
```

This pattern becomes increasingly useful as programs contain more functions and those functions call one another.

## 1. Run the code

```bash
gcc activity1_function_prototypes.c -o activity1_function_prototypes.out
./activity1_function_prototypes.out
```

The starter code does not compile yet. Read the compiler messages and compare the function calls, prototypes and definitions.

## 2. The activity

- Add the missing prototype for `square()`.
- Add a function called `cube()` that accepts and returns an `int`.
- Add a function called `sum3()` that accepts three integers and returns their sum.
- Add the missing calls and variables in `main()`.

When complete, the program should print:

```text
Hello!
y = 100, z = 1000, sum = 1110
```

## 3. Test your work

```bash
make test1
```
