#include "main.h"
#include <stdio.h> 

int main() {
    unsigned long int testCases[] = { 0, 255, 123456789, 18446744073709551615UL };
    unsigned long int i, j;
    unsigned int indices[] = { 0, 3, 7, 31, 63, 65 };

    for (i = 0; i < sizeof(testCases) / sizeof(testCases[0]); ++i) {
        for (j = 0; j < sizeof(indices) / sizeof(indices[0]); ++j) {
            int bitValue = get_bit(testCases[i], indices[j]);

            if (bitValue != -1) {
                printf("Bit at index %u of %lu is: %d\n", indices[j], testCases[i], bitValue);
            } else {
                printf("Error: Invalid bit index\n");
            }
        }
    }

    return 0;
}
