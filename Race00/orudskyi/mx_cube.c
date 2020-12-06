void mx_printchar(char c);

void mx_cube(int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n /  2 + 1; i++)
        mx_printchar(' ');
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
        mx_printchar('-');
    mx_printchar('+');
    mx_printchar('\n');
    for(int j = 0; j < n / 2; j++) {
        for (int i = j; i < n / 2; i++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int i = 0; i < n * 2; i++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int i = 0; i < j; i++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
        mx_printchar('-');
    mx_printchar('+');
    for (int i = 0; i < n /  2; i++)
        mx_printchar(' ');
    mx_printchar('|');
    mx_printchar('\n');
    for(int j = 0; j < n - (n / 2 + 1); j++) {
        mx_printchar('|');
        for (int i = 0; i < n *  2; i++)
            mx_printchar(' ');
        mx_printchar('|');
        for (int i = 0; i < n / 2; i++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
    }
    mx_printchar('|');
    for (int i = 0; i < n *  2; i++)
        mx_printchar(' ');
    mx_printchar('|');
    for (int i = 0; i < n / 2; i++)
        mx_printchar(' ');
    mx_printchar('+');
    mx_printchar('\n');
    for(int j = 0; j < n / 2; j++) {
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++)
            mx_printchar(' ');
        mx_printchar('|');
        for (int i = j; i < n / 2 - 1; i++)
            mx_printchar(' ');
        mx_printchar('/');
        mx_printchar('\n');
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
        mx_printchar('-');
    mx_printchar('+');
    mx_printchar('\n');
}

