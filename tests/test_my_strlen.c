/*
** EPITECH PROJECT, 2021
** Workshop_Criterion
** File description:
** test_my_strlen
*/

#include <criterion/criterion.h>
#include "my_strlen.h"

Test(my_strlen, count_number_of_chars_in_str)
{
    int length = my_strlen("hello world");

    cr_assert_eq(length, 11);
}

Test(my_strlen, handle_empty_string)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen, handle_null_value)
{
    cr_assert_eq(my_strlen(NULL), -1);
}