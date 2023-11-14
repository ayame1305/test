int check_nl(char *buf)
{
    size_t i;
    if (buf == NULL)
        return 0;
    i = 0;
    while(buf[i] && buf[i] != '\n')
        i++;
    if (!buf[i])
        return 0;
    return 1;
}

size_t ft_strlen(char *str)
{
    size_t len;

    if (!str)
        return 0;
    len = 0;
    while (str[len])
        len++;
    return len;
}

char *join(char *keep, char *buf)
{
    char *return_keep;
    size_t size;
    size_t i;


    size = ft_strlen(keep) + ft_strlen(buf);
    return_keep = (char *)malloc(sizeof(char) * (size + 1));
    if (return_keep == NULL || buf == NULL)
    {
        if (keep != NULL)
            free(keep);
        return NULL;
    }
    return_keep[size] = '\0';
    i = 0;
    while (keep != NULL && keep[++i - 1] != NULL)
    {
        return_keep[i] = 
    }
    while (buf[0])


}

char *get_until_nl(char *keep)
{
    char *result;
    size_t i;

    if (keep == NULL || keep[0] == '\0')
        return NULL;
    if (keep[0] == '\n')
        i = 1;
    else
    {
        i = 1;
        while (keep[i] && keep[i - 1] != '\n')
            i++;
    }
    result = (char *)malloc(size_of(char) * (i + 1));
    if (result == NULL)
        return NULL;
    result[i] = '\0';
    while (i > 0)
    {
        result[i - 1] = keep[i - 1];
        i--;
    }
    return result;
}

char *get_after_nl(char *keep)
{
    char *return_keep;
    size_t i;
    size_t j;

    if (check_nl(keep) == 0)
        return NULL;
    i = 0;
    while (keep[i] != '\n')
        i++;
    j = ft_strlen(keep) - i;
    return_keep = (char *)malloc(size_of(char) * (j + 1));
    if (return_keep == NULL)
        return NULL;
    return_keep[j] = '\0';
    while (j > 0)
    {
        return_keep[j - 1] = keep[i + j];
        j--; 
    }
    free(keep);
    return return_keep;
}
