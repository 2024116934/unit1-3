#include <stdio.h>  // printf
#include <math.h>   // sqrt (you'll need to add -lm when compiling)

/*
 * A 'struct' lets us group related pieces of data together
 * into a single custom type. Here we create a Point type
 * with two floating-point fields: x and y.
 */
struct Point {
    double x;  // x coordinate
    double y;  // y coordinate
};

// function prototypes (declarations)


/*
 * distance(a, b)
 * --------------
 * Returns the straight-line (Euclidean) distance between two points.
 * We pass the structs by value.
 *
 * Steps:
 *  1) Compute differences dx and dy.
 *  2) Use Pythagoras: sqrt(dx*dx + dy*dy).
 *
 */
double distance(struct Point a, struct Point b);

/*
 * midpoint(a, b)
 * --------------
 * Returns the point exactly halfway between a and b.
 *
 * The midpoint is found by averaging the x coordinates
 * and averaging the y coordinates.
 */
struct Point midpoint(struct Point a, struct Point b) ;


/*
 * points_equal(a, b)
 * ------------------
 * Returns 1 if the points have exactly the same coordinates, else 0.
 * Using 'int' as a simple boolean: 1 = true, 0 = false.
 */
int points_equal(struct Point a, struct Point b);


int main(void) {
    // Create two points using simple brace initialization
    struct Point p1 = {10, 20};
    struct Point p2 = {30, 45};

    // Show the original points
    printf("p1 = (%.2f, %.2f)\n", p1.x, p1.y);
    printf("p2 = (%.2f, %.2f)\n", p2.x, p2.y);

    // Distance between p1 and p2
    double dist = distance(p1, p2);
    printf("Distance = %.2f\n", dist);

    // Step 1: Create two more points p3 (13,37) and p4 (73,31)
    struct Point p3 = {13, 37};
    struct Point p4 = {73, 31};

    // print the new points just like p1 and p2 above "p3 = (13, 37)" etc.
    printf("p3 = ()\n");
    printf("p4 = ()\n");

    // calculate and print the distance between p3 and p4 like above
    double new_dist = 0;
    printf("Distance = %.2f\n", new_dist);

    // Step 2: Create a function midpoint(a,b) that returns a struct representing
    // the midpoint between two points

    // Midpoint between p3 and p4
    struct Point mid = {0, 0};  // replace with call to midpoint(p3, p4)
    printf("Midpoint = (%.2f, %.2f)\n", 0.0, 0.0);  // replace 0.0, 0.0 with mid.x, mid.y

    // Step 3: Create a function points_equal(a,b) 
    // that returns 1 if the points are equal, else 0

    // Check whether p1 and p2 are equal
    if (points_equal(p1, p2)) {
        printf("p1 and p2 are equal\n");
    } else {
        printf("p1 and p2 are different\n");
    }

    return 0;  // Program finished successfully
}


// Function implementations


double distance(struct Point a, struct Point b) {
    double dx = a.x - b.x;  // difference in x 
    double dy = a.y - b.y;  // difference in y
    double diff = sqrt(dx * dx + dy * dy); 
    return diff;  // Pythagoras
}

// empty implementation to allow compilation
// the midpoint is the average of the x and y coordinates
// of the two points (a.x + b.x) / 2.0 etc
// dont forget about the floating point division!
struct Point midpoint(struct Point a, struct Point b) {

}


// empty implementation to allow compilation
// return 1 if both x and y coordinates are equal, else return 0
int points_equal(struct Point a, struct Point b) {
    return 1;
}