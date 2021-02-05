/*
** EPITECH PROJECT, 2021
** Workshop_Criterion
** File description:
** main
*/

#include <stdio.h>
#include "my_strlen.h"

int main(int ac, char * const *av)
{
    if (ac < 2) {
        fprintf(stderr, "No arguments given.\n");
        return (84);
    }
    for (int i = 1; i < ac; i += 1) {
        printf("'%s' has length %d\n", av[i], my_strlen(av[i]));
    }
    return (0);
}