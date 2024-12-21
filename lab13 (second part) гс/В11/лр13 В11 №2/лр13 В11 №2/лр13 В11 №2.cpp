#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char str[128];
    char* p = str;
    int max_len = 0;
    int max_index = 0;
    int max_pos = 0;
    int len = 0;
    int index = 0;
    int pos = 1;

    puts("Введите строку: ");
    gets_s(str);
    while (*p != '\0') {
        if (*p == ' ') {
            if (len > max_len) {
                max_len = len;
                max_index = index;
                max_pos = pos;
            }
            len = 0;
            index = p - str + 1;
            pos++;
        }
        else {
            len++;
        }
        p++;
    }
    printf("Порядковый номер слова максимальной длины: %d\n", max_index);
    printf("Номер позиции в строке, с которой оно начинается: %d\n", max_pos);
    return 0;
}