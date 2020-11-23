//
// Created by samuelbretz on 11/22/20.
//


#include <string.h>
#include <stdlib.h>
#include <stdio.h>


char* stringToBinary(char* s) {
    if(s == NULL) return 0; /* no input string */
    size_t len = strlen(s);
    char *binary = malloc(len*8 + 1); // each char is one byte (8 bits) and + 1 at the end for null terminator
    binary[0] = '\0';
    for(size_t i = 0; i < len; ++i) {
        char ch = s[i];
        for(int j = 7; j >= 0; --j){
            if(ch & (1 << j)) {
                strcat(binary,"1");
            } else {
                strcat(binary,"0");
            }
        }
    }
    return binary;
}

void stringToFreqMap(char* s) {
/*
 * This method will take a string formatted as     'abababc'
 * and return it as                                'a3b3c1'
 */
    printf("%s", "Testing");
    for (int i = 1; i < 3; i++) {
        printf("%c", s[i]);
    }
}