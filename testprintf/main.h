#ifndef P
#define P
int _printf(const char *format, ...);
int (*get_op_function(char *s))(char);

typedef struct print_f
{
char *pf;
char (*f)(char);
} struct_name;

#endif
