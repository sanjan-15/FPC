#include <stdio.h>
#include <stdarg.h>

#define my_printf(format, ...) _my_printf(format, ##__VA_ARGS__)

void _my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    putchar(c);
                    break;
                }
                case 'd': {
                    int d = va_arg(args, int);
                    printf("%d", d);
                    break;
                }
                case 'l': {
                    long int l = va_arg(args, long int);
                    printf("%ld", l);
                    break;
                }
                case 'L': {
                    long long int L = va_arg(args, long long int);
                    printf("%lld", L);
                    break;
                }
                case 'f': {
                    float f = va_arg(args, double);
                    printf("%f", f);
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char *);
                    printf("%s", s);
                    break;
                }
                case 'D': {
                    double D = va_arg(args, double);
                    printf("%lf", D);
                    break;
                }
                default: {
                    putchar(*format);
                    break;
                }
            }
        } else {
            putchar(*format);
        }
        format++;
    }
    va_end(args);
}


int main()
{
	int i = 10; int j = 20; int k = 30;
	int l = 40; int m = 50; int n = 60;

	my_printf("No parameters\n");

	my_printf("Print integer parameters ...\n");

	my_printf("1 param: %d\n", i);
	my_printf("2 params: %d %d\n", i, j);
	my_printf("3 params: %d %d %d\n", i, j, k);

	my_printf("6 params: %d %d %d %d %d %d\n",
		i, j, k, l, m, n);

	my_printf("10 params: %d %d %d %d %d %d %d %d %d %d\n",
		i, j, k, l, m, n, i, j, k, l);

	char ch = 'M';
	my_printf("Char: %c\n", ch);

	float f1 = 1.1111;
	my_printf("Float value: %f\n", f1);

	double d1 = 2.2222;
	my_printf("Double value: %f\n", d1);

	long li = 11; long lj = 21; long lk = 31;
	long ll = 41; long lm = 51; long ln = 61;

	my_printf("Print long integer parameters ...\n");

	my_printf("1 param: %l\n", li);
	my_printf("2 params: %l, %l\n", li, lj);
	my_printf("3 params: %l, %l, %l\n", li, lj, lk);

	my_printf("6 params: %l, %l, %l, %l, %l, %l\n",
		li, lj, lk, ll, lm, ln);

	my_printf("10 params: %l, %l, %l, %l, %l, %l, %l, %l, %l, %l\n",
		li, lj, lk, ll, lm, ln, li, lj, lk, ll);

	long long lli = 0x123456789ABCDE12;

	my_printf("Print long long integer parameters ...\n");

	my_printf("1 param: 0x%L\n", lli);

	my_printf("Print all types of values once ...\n");

	my_printf("All values: %c, %d, %l, 0x%L, %f, %f\n", ch, i, li, lli, f1, d1);

}