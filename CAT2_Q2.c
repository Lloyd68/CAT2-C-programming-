
/*I

An array is an ordered arrangement of finite elements of the same data types and and stored at contiguous memory locations 



ii & iii*/

#include <stdio.h>

/*CAT2_Q2

AUTHOR ;Anyasi Liloyo Munala 

Reg;CT101/G/22812 /24*/ 

int main() {

    // Declare and initialize the 2D array

    int Scores[2][4] = {

        {65, 92, 84, 72},

        {35, 70, 59, 67}

    };



    // Print the array using a nested loop

    printf("Scores array:\n");

    for (int k= 0; k < 2; k++) { // Loops rows

        for (int l = 0; l< 4; l++) { // Loops columns

            printf("%d\n", Scores[k][l]);

        }

        

    }



    return 0;

} 