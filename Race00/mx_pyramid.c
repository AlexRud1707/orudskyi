void mx_printchar(char c);

void mx_pyramid(int n) {
    int s = 0;
    if (n <= 1 || (n % 2 != 0) )
        return;
    for (int i = 0; i < n - 1; i++)
        mx_printchar(' ');
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
    int b = 1;
    for (int j = 0; j < n / 2 - 1; j++) {
        for (int i = 0; i < n - 2 - j; i++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int i = 0; i < b; i++)
            mx_printchar(' ');
        mx_printchar('\\');
        for (int i = 0; i < j + 1; i++) {
            mx_printchar(' ');
            s = i + 1;
        }
        mx_printchar('\\');
        mx_printchar('\n');
        b += 2;
    }
    for (int j = 0; j < n / 2 - 1; j++) {
        for (int i = 0; i < s; i++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int i = 0; i < b; i++)
            mx_printchar(' ');
        mx_printchar('\\');
        for (int i = 0; i < s; i++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
        s--;
        b += 2;
    }
    mx_printchar('/');
    for (int i = 0; i < n * 2 - 3; i++)
        mx_printchar('_');
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}
