#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject) {
    size_t count = 0;

    while (s[count] != '\0') {
        int found = 0;
        size_t j = 0;

        while (reject[j] != '\0') {
            if (s[count] == reject[j]) {
                found = 1;
                break;
            }
            j++;
        }

        if (found) {
            return count;
        }

        count++;
    }

    return count;
}