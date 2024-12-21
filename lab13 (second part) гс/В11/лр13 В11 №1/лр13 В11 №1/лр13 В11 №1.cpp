#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char str[128];
    char last[128];
    int i = 0;
    int j = 0;
    puts("Введите строку: ");
    gets_s(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            last[j] = str[i - 1];
            j++;
        }
        i++;
    }
    last[j] = '\0';
    printf("Строка из последних букв: %s\n", last);
    return 0;
}