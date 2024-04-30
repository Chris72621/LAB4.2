#include <stdio.h>

int get_str_size(const char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++; 
    }

    return count;
}



int main() {
    printf(get_str_size("Apple"));
    return 0;
}