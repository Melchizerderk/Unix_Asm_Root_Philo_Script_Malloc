#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "string.h"
#include "fcntl.h"

int	ft_strlen(char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *s1, char *s2);
int ft_puts(char *s);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strdup(const char *s1);
void ft_cat(int fd);
char *ft_strchr(const char *s, int c);
int	ft_memcmp(void *s1, void *s2);
int main(void)
{
	char *s;
	char *s1;
	s1 = s;
	s = malloc(sizeof(char) * 5);
	s[0] = '1';
	s[1] = '2';
	s[2] = '3';
	s[3] = '4';
	s[4] = '\0';
	char *s2;
	s2 = malloc(sizeof(char) * 4);
	s2[0] = '1';
	s2[1] = '2';
	s2[2] = '3';
	s2[3] = '\0';
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_strlen("eerere"));
	printf("%d\n", ft_strlen("eerere"));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_strlen("eerere"));
	printf("%d\n", ft_isdigit('r'));
	printf("%d\n", ft_isalnum('('));
	printf("%d\n", ft_isascii(4));
	printf("%c\n", ft_toupper('Q'));
	printf("%c\n", ft_tolower('Q'));
	printf("%s\n", ft_strcat(s, s2));
	ft_bzero(s, 3);

	int c = 'd';
	printf("%s\n", ft_memset(s, c, 2));
	printf("%s\n", ft_memcpy(s, "test", 2));
	printf("%s\n", ft_strdup("try"));
	printf("%s\n", ft_strchr("test", 'e'));
	printf("%d\n", ft_memcmp("test", "test"));	
	
	int fd;
	if ((fd = open("ft_puts.s", O_RDONLY)))
		ft_cat(fd);
	ft_puts("test");
	return (0);
}
