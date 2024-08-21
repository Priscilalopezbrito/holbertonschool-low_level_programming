#ifndef V
#define V

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct format_spec - Struct to map format specifiers to functions.
 * @specifier: The format specifier.
 * @print_func: The function to handle that specifier.
 */
typedef struct format_spec
{
char specifier;
void (*print_func)(va_list args);
} format_spec_t;

#endif
