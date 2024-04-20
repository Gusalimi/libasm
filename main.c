#include <stdio.h>
#include <string.h>
size_t  ft_strlen(char *s);
char    *ft_strcpy(char *dest, char *src);

int main(int argc, char **argv)
{
    //ft_strlen
    printf("\n=== strlen ===\n");
    {
        char *s = "Hello World";
        printf("strlen : %zu\n", strlen(s));
        printf("ft_strlen : %zu\n", ft_strlen(s));
    }

    // ft_strcpy
    printf("\n=== strcpy ===\n");
    {
        printf("STD:\n");
        char *src = "Hello World";
        char dest[200];

        char * ret = strcpy(dest, src);
        printf("src : [%s] [%p]\n", src, src);
        printf("dest : [%s] | ret = [%s]\n", dest, ret);
        printf("dest : [%p] | ret = [%p]\n", dest, ret);
    }
    {
        printf("\nFT:\n");
        char *src = "Hello World";
        char dest[200];

        char * ret = ft_strcpy(dest, src);
        printf("src : [%s] [%p]\n", src, src);
        printf("dest : [%s] | ret = [%s]\n", dest, ret);
        printf("dest : [%p] | ret = [%p]\n", dest, ret);
    }
    return (0);
}
