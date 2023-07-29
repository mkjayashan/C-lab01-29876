#include <stdio.h>

int main() {
    char characters[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    int num_chars = sizeof(characters) / sizeof(char);

    printf("Integer equivalents:\n");

    for (int i = 0; i < num_chars; i++) {
        printf("%c: %d\n", characters[i], characters[i]);
    }

    return 0;
}
