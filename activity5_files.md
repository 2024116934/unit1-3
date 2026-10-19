# ELEC2645 Unit 1.3 Activity 5: Reading and Writing Files

Files allow programs to store and retrieve data beyond a single run. This is useful for logging measurements, saving settings and processing datasets.

Files are opened using `fopen()`. Data can be read line by line using `fgets()` and written using `fprintf()`:

```c
FILE *input = fopen("data.txt", "r");
FILE *output = fopen("results.txt", "w");

if (input != NULL && output != NULL) {
    char line[100];

    while (fgets(line, sizeof(line), input) != NULL) {
        fprintf(output, "Read line: %s", line);
    }

    fclose(input);
    fclose(output);
}
```

`fgets()` returns `NULL` when it reaches the end of the file, so it can be used as the stopping condition for a loop. Files should always be closed with `fclose()` when they are no longer needed.

## 1. Build the code

```bash
gcc activity5_files.c -o activity5_files.out -lm
./activity5_files.out
```

The program reads from `activity5_numbers.txt` and writes its results to `activity5_stats.txt`.

## 2. The activity

Complete the missing steps in `activity5_files.c`:

- fix the loop that reads the input values;
- calculate the sum, minimum and maximum;
- calculate the average;
- write the statistics using `fprintf()`.

The output file should contain:

```text
statistic,value
average,13.07
min,5.19
max,19.75
```

## 3. Test your work

```bash
make test5
```
