#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// TODO: Declare any necessary helper functions

void dec_to_hex(char* decimal_str, char* hex_str) {
    // TODO: Convert decimal string to hexadecimal string
    // Example: decimal_str = "255", hex_str = "FF"
    //          decimal_str = "4096", hex_str = "1000"

    int num = atoi(decimal_str);

    int arr[32];
    int i = 0;

    while (num > 0) {
        arr[i++] = num % 16; //store remainder and track how many times num is divided
        num /= 16; //divide by 16 and go to next digit
    }

    //loop through all stored numbers
    for (int j = 0; j < i; j++) {
        int digit = arr[i - j - 1];

        if (digit < 10) 
            hex_str[j] = '0' + digit;
        else 
            hex_str[j] = 'A' + (digit - 10);
    }
    
}

int main() {
    // Read decimal value as string from STDIN
    char decimal_str[8] = {0};
    fgets(decimal_str, sizeof(decimal_str), stdin);

    // Convert decimal string to hexadecimal string
    char hex_str[8] = {0};
    dec_to_hex(decimal_str, hex_str);

    // Write hexadecimal value to STDOUT
    printf("%s", hex_str);
}