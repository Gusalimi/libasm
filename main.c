#include <stdio.h>
size_t ft_strlen(char *s);

int main(int argc, char **argv)
{
    char *s;
    if (argc > 1)
        s = argv[1];
    else
        s = "Hello world!";
    printf("%s [%zu]\n", s, ft_strlen(s));
    return (0);
}
