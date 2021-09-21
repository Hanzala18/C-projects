#include <stdio.h>
int main() {
    char s1[100], s2[100], b;
    printf("Enter source string: ");
    fgets(s1, sizeof(s1), stdin);

    for (b = 0; s1[b] != '\0'; ++b) {
        s2[b] = s1[b];
    }

    s2[b] = '\0';
    printf("Destination String: %s", s2);
    return 0;
}
