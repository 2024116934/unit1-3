# ELEC2645 Unit 1.3 Activity 6: Debug Practice

This program defines a `Pokemon` structure containing a name, level, hit points and type. It then uses a function to calculate whether one Pokémon's attack is effective against another.

The `level` and `hp` fields use fixed-width types from `<stdint.h>`:

- `uint8_t` is an unsigned 8-bit integer;
- `uint16_t` is an unsigned 16-bit integer.

These types make the expected size and range of structure fields clear, which is useful when structures represent embedded-system data.

Unfortunately, the starter code contains several problems. Some prevent compilation, while others compile but cause incorrect behaviour or unsafe memory access. Happy bug hunting!

## 1. Build the code

```bash
gcc -Wall -Wextra -Wpedantic -fsanitize=address activity6_debug_practice.c -o activity6_debug_practice.out
```

Compiler warnings and AddressSanitizer may help identify problems with the character arrays and initialisers.

## 2. The activity

The corrected program should:

- define a safe `Pokemon` structure;
- create Charmander and Bulbasaur;
- print their attack and effectiveness;
- create Pikachu and Jigglypuff;
- print their attack and effectiveness.

Expected output:

```text
Charmander attacks Bulbasaur
Effectiveness: 2.0x
Jigglypuff attacks Pikachu
Effectiveness: 1.0x
```

## 3. Test your work

```bash
make test6
```
