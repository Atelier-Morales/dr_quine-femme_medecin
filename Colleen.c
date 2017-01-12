#include <stdio.h>

char *data[] = {
    "    NULL};",
    "",
    "/*",
    "   Ceci est commentaire hors du main",
    "*/",
    "",
    "void print_string(char *str)",
    "{",
    "    char *ptr;",
    "    printf(\"    \\\"\");",
    "    for (ptr = str; *ptr != 0; ptr++)",
    "        if (*ptr == '\\\\')",
    "            printf(\"\\\\\\\\\");",
    "        else if (*ptr == '\"')",
    "            printf(\"\\\\\\\"\");",
    "        else",
    "            putchar(*ptr);",
    "    printf(\"\\\",\\n\");",
    "}",
    "",
    "int main(void)",
    "{",
    "    /*",
    "        Ceci est un commentaire dans le main",
    "    */",
    "",
    "    char **ptr;",
    "    printf(\"#include <stdio.h>\\n\\n\");",
    "    printf(\"char *data[] = {\\n\");",
    "    for (ptr = data; *ptr != NULL; ptr++)",
    "        print_string(*ptr);",
    "    for (ptr = data; *ptr != NULL; ptr++)",
    "        printf(\"%s\\n\", *ptr);",
    "    return 0;",
    "}",
    NULL};

/*
   Ceci est commentaire hors du main
*/

void print_string(char *str)
{
    char *ptr;
    printf("    \"");
    for (ptr = str; *ptr != 0; ptr++)
        if (*ptr == '\\')
            printf("\\\\");
        else if (*ptr == '"')
            printf("\\\"");
        else
            putchar(*ptr);
    printf("\",\n");
}

int main(void)
{
    /*
        Ceci est un commentaire dans le main
    */

    char **ptr;
    printf("#include <stdio.h>\n\n");
    printf("char *data[] = {\n");
    for (ptr = data; *ptr != NULL; ptr++)
        print_string(*ptr);
    for (ptr = data; *ptr != NULL; ptr++)
        printf("%s\n", *ptr);
    return 0;
}
