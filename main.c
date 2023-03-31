#include <fcntl.h>
#include "get_next_line_bonus.h"
//#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{   
    (void)argc;
    int i = 1;
    char *str;
    char *str2;
    int fd = open(argv[1], O_RDONLY);
    int fd2 =open(argv[2], O_RDONLY);
    while (i <= 25)
    {   
        str2 = get_next_line(fd2);
        str = get_next_line(fd);
        printf("%s%s", str, str2);
        i++;
        free(str);
        free(str2);
    }
}
