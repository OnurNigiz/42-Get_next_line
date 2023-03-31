#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 3

# endif

int		ft_strlen(char *c);
int		ft_find(char *finder);
char	*ft_line(char *handle_string);
char	*ft_strjoin(char *lft_str, char *buff);
char	*ft_clean(char *handle_string);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);

#endif