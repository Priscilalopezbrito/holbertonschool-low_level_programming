#ifndef P
#define P
int _printf(const char *format, ...);
char (*get_op_function(char *s))(char);

typedef struct print_f
{
char *pf;
char (*f)(char);
} struct_name;

char print_char(char);
char print_string(char);

#endif
