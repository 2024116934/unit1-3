#include <stdio.h> // for file operations and printf
#include <stdlib.h> // for atof
#include <math.h> // for fmin and fmax

#define MAX_LINE 100 // maximum length of a line in the input file
#define MAX_NUMBERS 100 // maximum numbers to process

int main(void) {

    // Open input and output files
    // "r" for reading, "w" for writing
    // FILE pointers are used for file handling

    // "activity5_numbers.txt" should contain a header line followed by one number per line
    FILE *input = fopen("activity5_numbers.txt", "r");
    // "activity5_stats.txt" will contain the computed statistics, in comma separated format
    FILE *output = fopen("activity5_stats.txt", "w");

    // Check if files opened successfully
    // pointers will be NULL if fopen fails
    // or a valid FILE pointer if successful
    if (!input || !output) {
        printf("Error opening file.\n");
        return 1;
    }

    // Array to hold numbers read from the file
    // size must be defined at compile time in C
    // so we use a constant #define 
    float numbers[MAX_NUMBERS];

    // Buffer to hold each line read from the file
    // again safer to define a max size
    char line[MAX_LINE];


    // The file has a header line with the names of the columns
    // we need to skip. fgets reads a line from the file into the buffer
    // but as its the header we don't need to do anything with it
    //
    // Each time we call fgets it reads the *next* line
    fgets(line, MAX_LINE, input);

    // Counter for how many numbers read
    int count = 0;

    // Read numbers from the file until End of File or max count reached
    // fgets returns NULL on EOF or error, so we can use that to stop the loop
    // if we reach MAX_NUMBERS we also stop reading
    while (count < MAX_NUMBERS &&
           fgets(line, MAX_LINE, input) != NULL) {
        // Convert string to float and store in array
        numbers[count] = atof(line);
        // Remember to update count after storing each number!
    }

    float sum = 0.0, min = numbers[0], max = numbers[0];

    // Step 1: Calculate the sum, minimum, and maximum of the numbers
    // loop through each number to calculate sum, min, and max
    // hint: you already have a variable which contains the number
    // of numbers read from the file - use that to limit the loop
    //
    // the fmin and fmax functions are in math.h and tell you the smaller/larger of two floats
    // min = fmin(min, numbers[i]) is equivalent to:
    // if (numbers[i] < min) { min = numbers[i]; }  
    // but is shorter and easier to read
    //
    // overwriting min and max each time we find a new min or max



    // Step 2: Calculate the average


    // Step 3: write the results to the output file in CSV format
    // fprintf works like printf but takes a FILE pointer as the first argument
    // Use "%.2f" to format the float to 2 decimal places

    fprintf(output, "statistic,value\n");


    // Close the files - remember to always do this!
    fclose(input);
    fclose(output);

    printf("Statistics saved to 'stats.txt'.\n");
    return 0;
}