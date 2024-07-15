#ifndef V
#define V

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

struct print_t
{
char form;
void (*p)(va_list *);
};
#endif
