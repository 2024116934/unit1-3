# Makefile for building and testing the six Unit 1.3 activities.
# Run "make test" to see the available tests.
# Run "make test1", "make test2", and so on to test one activity.
# Run "make clean" to delete compiled .out files.
#
# Programs include debugging information for VS Code Run and Debug.
# Note to students: You do not need to fully understand this Makefile!

CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -std=c11 -g -O0

.PHONY: test test1 test2 test3 test4 test5 test6 clean

test:
	@echo "Choose an activity test:"
	@echo "  make test1  Activity 1: Function Prototypes"
	@echo "  make test2  Activity 2: Using Libraries"
	@echo "  make test3  Activity 3: Value vs Reference"
	@echo "  make test4  Activity 4: Structs"
	@echo "  make test5  Activity 5: Reading and Writing Files"
	@echo "  make test6  Activity 6: Debug Practice"

test1: activity1_function_prototypes.out
	@bash activity1_test.sh

test2: activity2_using_libraries.out
	@bash activity2_test.sh

test3: activity3_value_reference.out
	@bash activity3_test.sh

test4: activity4_structs.out
	@bash activity4_test.sh

test5: activity5_files.out
	@bash activity5_test.sh

test6: activity6_debug_practice.out
	@bash activity6_test.sh

activity1_function_prototypes.out: activity1_function_prototypes.c
	$(CC) $(CFLAGS) $< -o $@

activity2_using_libraries.out: activity2_main.c activity2_ohmskit.c activity2_ohmskit.h
	$(CC) $(CFLAGS) activity2_main.c activity2_ohmskit.c -o $@ -lm

activity3_value_reference.out: activity3_main.c activity3_geometry.c activity3_geometry.h
	$(CC) $(CFLAGS) activity3_main.c activity3_geometry.c -o $@

activity4_structs.out: activity4_structs.c
	$(CC) $(CFLAGS) $< -o $@ -lm

activity5_files.out: activity5_files.c activity5_numbers.txt
	$(CC) $(CFLAGS) activity5_files.c -o $@ -lm

activity6_debug_practice.out: activity6_debug_practice.c
	$(CC) $(CFLAGS) -fsanitize=address $< -o $@

clean:
	rm -f *.out
