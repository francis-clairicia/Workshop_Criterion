/*
** EPITECH PROJECT, 2021
** Workshop_Criterion
** File description:
** test_write
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <string.h>

Test(write, print_on_stdout)
{
    char str[] = "Hello world";

    cr_redirect_stdout();
    cr_redirect_stderr();
    write(1, str, strlen(str));
    write(2, str, strlen(str));
    cr_assert_stdout_eq_str("Hello world");
    cr_assert_stderr_eq_str("Hello world");
}

Test(write, print_many_strings)
{
    char str[] = "Hello world\n";
    char str2[] = "Welcome\n";

    cr_redirect_stdout();
    write(1, str, strlen(str));
    write(1, str2, strlen(str2));
    cr_assert_stdout_eq_str("Hello world\nWelcome\n");
}