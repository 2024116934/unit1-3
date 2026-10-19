# ELEC2645 Unit 1.3 Activity 2: Using Libraries

Larger C programs are normally organised across header (`.h`) and source (`.c`) files. Header files describe a library's public interface, including function prototypes, constants and shared data types. Source files contain the function implementations.

This structure keeps code modular, readable and easier to maintain as projects grow. In this activity, you will complete a small library for Ohm's law and two-resistor calculations.

Header guards prevent the same header being processed more than once. This is why `activity2_main.c` can include `activity2_ohmskit.h` twice without producing duplicate declarations.

## 1. Build the code

Both C source files must be compiled and linked together:

```bash
gcc activity2_main.c activity2_ohmskit.c -o activity2_using_libraries.out -lm
```

We need to add the `-lm` flag because we are using the `<math.h>` library. That is quite a lot to type! Luckily the Makefile can do it for you:

```bash
make activity2_using_libraries.out
```

## 2. The activity

The program does not link because parts of the library are missing.

- Inspect the prototypes and comments in `activity2_ohmskit.h`.
- Add the missing parallel-resistance prototype.
- Implement `i_from_vr()`.
- Implement `r_series2()`.
- Implement `r_parallel2()`, handling zero resistance safely.

Function declarations in a header define the types used by a library's public interface. Embedded interfaces often use fixed-width integer types from `<stdint.h>` when an exact number of bits matters. We will use these later in this unit.

## 3. Test your work

```bash
make test2
```
