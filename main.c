#include <stdio.h>
#include <string.h>
#include <unistd.h>
size_t  ft_strlen(char *s);
char    *ft_strcpy(char *dest, char *src);
int     ft_strcmp(char *s1, char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);

int main(int argc, char **argv)
{
    // //ft_strlen
    // printf("\n=== strlen ===\n");
    // {
    //     char *s = "Hello World";
    //     printf("strlen : %zu\n", strlen(s));
    //     printf("ft_strlen : %zu\n", ft_strlen(s));
    // }

    // // ft_strcpy
    // printf("\n=== strcpy ===\n");
    // {
    //     printf("STD:\n");
    //     char *src = "Hello World";
    //     char dest[200];

    //     char * ret = strcpy(dest, src);
    //     printf("src : [%s] [%p]\n", src, src);
    //     printf("dest : [%s] | ret = [%s]\n", dest, ret);
    //     printf("dest : [%p] | ret = [%p]\n", dest, ret);
    // }
    // {
    //     printf("\nFT:\n");
    //     char *src = "Hello World";
    //     char dest[200];

    //     char * ret = ft_strcpy(dest, src);
    //     printf("src : [%s] [%p]\n", src, src);
    //     printf("dest : [%s] | ret = [%s]\n", dest, ret);
    //     printf("dest : [%p] | ret = [%p]\n", dest, ret);
    // }

    // // ft_strcmp
    // {
    //     printf("\n=== strcmp ===\n");
    //     char *s1 = "Hello World";
    //     char *s2 = "Hello World";
    //     printf("strcmp : %d\n", strcmp(s1, s2));
    //     printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
    //     printf("\n");
    //     char *s3 = "Hello";
    //     printf("strcmp : %d\n", strcmp(s1, s3));
    //     printf("ft_strcmp : %d\n", ft_strcmp(s1, s3));
    // }

    // // ft_write
    // {
    //     printf("\n=== write ===\n");
    //     char *s = "Hello World\n";
    //     ssize_t res1 = write(1, s, ft_strlen(s));
    //     ssize_t res2 = ft_write(1, s, ft_strlen(s));
    //     printf("std: %ld | ft: %ld\n", res1, res2);
    //     res1 = write(400, s, ft_strlen(s));
    //     res2 = ft_write(400, s, ft_strlen(s));
    //     printf("std: %ld | ft: %ld\n", res1, res2);
    //     res1 = write(1, NULL, ft_strlen(s));
    //     res2 = ft_write(1, NULL, ft_strlen(s));
    //     printf("std: %ld | ft: %ld\n", res1, res2);
    // }
    return (0);
}
