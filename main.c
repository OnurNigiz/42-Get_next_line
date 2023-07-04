#include <fcntl.h>
//#include "get_next_line_bonus.h"
#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{   
    (void) argc;
    int fd = open(argv[1], O_RDONLY);
    int x = 0;

    while (x < 300)
    {   
        printf("%s\n", get_next_line(fd));
        x++;
    }
    return 0;    
}
