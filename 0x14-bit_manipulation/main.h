#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int num);
int get_bit(unsigned long int m, unsigned int index);
int set_bit(unsigned long int *m, unsigned int index);
int clear_bit(unsigned long int *m, unsigned int index);
unsigned int flip_bits(unsigned long int m, unsigned long int n);
int get_endianness(void);

#endif
