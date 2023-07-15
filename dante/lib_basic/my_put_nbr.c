/*
** EPITECH PROJECT, 2022
** test
** File description:
** test file
*/

void my_putchar(char c);
void print_digit(int n);

int digits(int d)
{
    int count = 0;
    if (d == 0) {
        return 1;
    }
    while (d != 0) {
        d = d / 10;
        count++;
    }
    return count;
}

int my_put_nbr(int n)
{
    int count = 0;
    if (n < -2147483648 || n > 2147483647)
        return 0;
    if (n == 0) {
        my_putchar('0');
        return 1;
    } else if (n < 0) {
        my_putchar('-');
        count ++;
        n = n * -1;
    }
    print_digit(n);
    return (count + digits(n));
}

void print_digit(int n)
{
    if (n > 9) {
        print_digit(n / 10);
    }
    my_putchar(n % 10 + 48);
}
