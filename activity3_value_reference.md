# ELEC2645 Unit 1.3 Activity 3: Value vs Reference

C always passes function arguments by value, meaning that the function receives a copy. To allow a function to modify a variable belonging to its caller, we can instead pass the variable's address using a pointer. This is often described informally as pass by reference.

```c
int times2(int x) {
    return x * 2;
}

void times2_inplace(int *x) {
    *x = *x * 2;
}

int main(void) {
    int a = 7;
    int b = times2(a);  // a is still 7, b is 14
    times2_inplace(&a); // a is now 14
    return 0;
}
```

Passing addresses also allows a function such as `circle_props()` to calculate several outputs in one call. This becomes particularly useful for larger structures and buffers in embedded systems.

## 1. Build the code

```bash
gcc activity3_main.c activity3_geometry.c -o activity3_value_reference.out
./activity3_value_reference.out
```

Or use the Makefile:

```bash
make activity3_value_reference.out
```

## 2. The activity

The circle functions are complete examples. Inspect their prototypes in `activity3_geometry.h` and implementations in `activity3_geometry.c`.

Add two similar rectangle functions to `activity3_geometry.c`:

- `rect_props()` calculates area and perimeter from width and height;
- `rect_set()` updates width and height, clamping negative values to zero.

## 3. Test your work

```bash
make test3
```
