#ifndef P
#define P
int _printf(const char *format, ...);
int (*get_op_function(char *s))(va_list);/**/

typedef struct prinf_function
{
char *format_specifier;
int (*funcpoint)(va_list);
} printf_function;

int  print_char(char c);
int  print_string(char *s);

#endif
