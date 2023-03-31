#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{   
    (void)argc;
    int i = 1;
    char *str;
    int fd = open(argv[1], O_RDONLY);
    while (i <= 25)
    {
        str = get_next_line(fd);
        printf("%s", str);
        i++;
    }
}
