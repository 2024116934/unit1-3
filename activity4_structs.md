# ELEC2645 Unit 1.3 Activity 4: Structs

A `struct` bundles related data into a custom type. For example, `struct Point` groups an x and y coordinate so they can be passed around together and accessed using the dot operator:

```c
struct Point {
    double x;
    double y;
};

struct Point q = {10, 20};
q.x = 1000;
printf("q = (%.2f, %.2f)\n", q.x, q.y);
```

Structures can be passed to functions and returned from functions. This activity passes small `Point` structures by value and uses related functions to calculate distances and midpoints.

In embedded systems, structures often represent sensor readings, messages or hardware data. Fixed-width integer types from `<stdint.h>` make the expected size and range of fields clearer:

```c
#include <stdint.h>

struct SensorReading {
    uint16_t sensor_id;      // Unsigned 16-bit integer
    int16_t temperature;     // Signed 16-bit integer
    uint32_t timestamp_ms;   // Unsigned 32-bit integer
};
```

We will use structures frequently in Semester 2. A common C pattern is **a structure plus related functions** to represent something that might be an object in another language.

## 1. Build the code

```bash
gcc activity4_structs.c -o activity4_structs.out -lm
./activity4_structs.out
```

`<math.h>` provides the declaration for `sqrt()`, while `-lm` links the program with the maths library.

## 2. The activity

Follow the steps in `activity4_structs.c`:

- print `p3` and `p4` using their structure fields;
- calculate the distance between them;
- complete `midpoint()` and use its returned `struct Point`;
- complete `points_equal()`.

## 3. Test your work

```bash
make test4
```
