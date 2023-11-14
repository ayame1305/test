#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *keep;
    char *buf;
    ssize_t return_read;
    char *result;

    if (fd < 0 || BUFFER_SIZE < 1)
        return NULL;
    buf = (char *)malloc(size_of(char) * (BUFFER_SIZE + 1));
    if (buf == NULL)
        return NULL;
    return_read = BUFFER_SIZE;
    while (return_read > 0 && check_nl(buf) == 1)
    {
        return_read = read(fd, buf, BUFFER_SIZE);
        if (return_read > 0)
        {
            buf[return_read] = '\0'
            keep = join(keep, buf);
        }
    }
    free(buf);
    if (return_read < 0)
        return NULL;
    result = get_until_nl(keep);
    keep = get_after_nl(keep);
    if (keep == NULL)
        return NULL;
    return result;
}
