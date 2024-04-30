#include <stdio.h>


/* ANDI, BEQ, ADDI */
const char* check_even_odd(int num) {
    if (num & 1) {
        return "Odd";
    } else {
        return "Even";
    }
}

/* ADD, ADDI, BNE*/
int sum_up_to(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

/* BEQ, LW, SW, XOR */
void swap(int *a, int *b) {
    if (a != b) { 
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

/* OR */
int is_divisible_by_3_and_5(int num) {
    return (num % 3 == 0) && (num % 5 == 0);
}

/* SUB, NOT */
int absolute_difference(int a, int b) {
    int diff = a - b;
    int abs_diff = diff & (~(diff >> 31));
    return abs_diff;
}

/* ADD */
int count_set_bits(int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

/* ORI - Kinda */
int set_bit(int num, int pos) {
    int mask = 1 << pos;
    return num | mask;
}

/* XORI - Kinda */
int toggle_bit(int num, int pos) {
    int mask = 1 << pos;
    return num ^ mask;
}


int main() {

    return 0;
}