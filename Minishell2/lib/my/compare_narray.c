/*
** EPITECH PROJECT, 2023
** compare_narray
** File description:
** compare_narray
*/

int compare_narray(char *s1, char *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (!(s1[i] == s2[i])) {
            return 1;
        }
    }
    return 0;
}
