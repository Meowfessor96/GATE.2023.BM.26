#include <stdio.h>

int main() {
    int n;
    double y;

    // Open the file for writing
    FILE *fp = fopen("data.dat", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the header
    fprintf(fp, "n\ty\n");
	y = 1 ;
    // Generate the first 10 values and write to the file
    for (n = 0; n < 10; n++) {
        y = (n >= 0) ? y*0.5 : 0; // Apply unit step function
        fprintf(fp, "%d\t%.5f\n", n, y);
    }

    // Close the file
    fclose(fp);

    return 0;
}

