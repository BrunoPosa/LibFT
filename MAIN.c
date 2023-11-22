#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_isalpha(int c);


#include <stdio.h>
#include <ctype.h>

/*// -- isascii --
int	ft_isascii(int c);

int	main(void)
{
	int	a, b, c, d;
	char	e;
	long	f;
	char	g;
	float	h;

	a = 6;
	b = -50;
	c = 200;
	d = 128;
	e = -125;
	f = -21474836499;
	g = '\0';
	h = 122.730019;

		printf("____\ninput: %d\nmyf: %d\n", a, ft_isascii(a));
	printf("OGf: %d\n\n", isascii(a));
		printf("input: %d\nmyf: %d\n", b, ft_isascii(b));
	printf("OGf: %d\n\n", isascii(b));
		printf("input: %d\nmyf: %d\n", c, ft_isascii(c));
	printf("OGf: %d\n\n", isascii(c));
		printf("input: %d\nmyf: %d\n", d, ft_isascii(d));
	printf("OGf: %d\n\n", isascii(d));
		printf("input: %c\nmyf: %d\n", e, ft_isascii(e));
	printf("OGf: %d\n\n", isascii(e));
		printf("input: %ld\nmyf: %d\n", f, ft_isascii(f));
	printf("OGf: %d\n\n", isascii(f));
		printf("input: %c\nmyf: %d\n", g, ft_isascii(g));
	printf("OGf: %d\n\n", isascii(g));
		printf("input: %f\nmyf: %d\n", h, ft_isascii(h));
	printf("OGf: %d\n\n", isascii(h));

	return (0);
}*/
/*// -- isdigit --
int	main(void)
{
	int	a, b, c, d;
	char	e;
	long	f;
	char	g;

	a = 45;
	b = 54;
	c = -2147483648;
	d = 0;
	e = '\0';
	f = 21474836496;
	g = 'a';
	printf("myf: %d\n", ft_isdigit(a));
	printf("OGf: %d\n\n", isdigit(a));
		printf("myf: %d\n", ft_isdigit(b));
	printf("OGf: %d\n\n", isdigit(b));
		printf("myf: %d\n", ft_isdigit(c));
	printf("OGf: %d\n\n", isdigit(c));
		printf("myf: %d\n", ft_isdigit(d));
	printf("OGf: %d\n\n", isdigit(d));
		printf("myf: %d\n", ft_isdigit(e));
	printf("OGf: %d\n\n", isdigit(e));
		printf("myf: %d\n", ft_isdigit(f));
	printf("OGf: %d\n", isdigit(f));

	return (0);
}
*/
/*// -- isprint --
int	main(void)
{
int	a, b, c, d;
	char	e;
	long	f;
	char	g;

	a = 45;
	b = 32;
	c = -48;
	d = 127;
	e = -21;
	f = 21474836496;
	g = 037;
		printf("myf: %d\n", ft_isprint(a));
	printf("OGf: %d\n\n", isprint(a));
		printf("myf: %d\n", ft_isprint(b));
	printf("OGf: %d\n\n", isprint(b));
		printf("myf: %d\n", ft_isprint(c));
	printf("OGf: %d\n\n", isprint(c));
		printf("myf: %d\n", ft_isprint(d));
	printf("OGf: %d\n\n", isprint(d));
		printf("myf: %d\n", ft_isprint(e));
	printf("OGf: %d\n\n", isprint(e));
		printf("myf: %d\n", ft_isprint(f));
	printf("OGf: %d\n", isprint(f));

	return (0);	
}
*/
/*// -- strlen --
int	main(void)
{
	char	*str2;
	char	str3[999999] = "Hola";
	char	str4[1];
	int i = 0;

	str2 = "hello";
	while (i < 999998)
	{
		str3[i] = 's';
		i++;
	}
	str3[999998] = '\0';
	*str4 = -24;

	printf("\n----\nString is: %s\nLength: %zu\nOGlength: %zu\n", "Telepolis", ft_strlen("Telepolis"), strlen("Telepolis"));
	printf("\n----\nString 2 is: %s\nLength: %zu\nOGlength: %zu\n", str2, ft_strlen(str2), strlen(str2));
	printf("\n----\nString 3 size: %zu\nLength: %zu\nOGlength: %zu\n", sizeof(str3), ft_strlen(str3), strlen(str3));
	printf("\n----\nString 4 is: %s\nLength: %zu\nOGlength: %zu\n", str4, ft_strlen(str4), strlen(str4));

	return (0);
}
*/
/*// -- memset --
int	main(void)
{
	char	str[38] = "ABCD EFGH";	
	char	str2[38] = "ABCD EFGH";

	printf("Before memset: %s\n", str);
	memset(str, 'h', 5);
	printf("After memset: %s\n__\n", str);

	printf("Before ft_memset: %s\n", str2);
	ft_memset(str2, 'h', 5);
	printf("After ft_memset: %s\n", str2);


	return (0);
}
*/
/*//-- bzero --
int	main(void)
{
	char	str[3] = "2t";	
	char	str2[3] = "2t";

	printf("Before bzero: %s\n", str);
	bzero(str, 2);
	printf("After bzero: %s\n__\n", str);

	printf("Before ft_bzero: %s\n", str2);
	ft_bzero(str2, 2);
	printf("After ft_bzero: %s\n", str2);
}
*/
/*// -- memcpy --
int	main(void)
{
	char    source[] = "zzzzzzzzzz";
    char    *dest = "iiiiiiiiiiiiiiiii";

	char	source2[] = "zzzzzzzzzz";
	char	*dest2 = "iiiiiiiiiiiiiiiiii";
	
	dest = source+2;
	dest2 = source2+2;
	printf("   memcpy: %s\n\n", memcpy(dest2, source2, 10));
	printf("ft_memcpy: %s\n", ft_memcpy(dest, source, 10));

	return (0);
}
*/

/*// -- memmove --
int	main(void)
{
	const char	src[] = "xxxx";
	char	dest[] = "d";

	printf("\nresult: %s", ft_memmove(dest, src, 3));
	return(0);
}
*/
// -- isalpha --
int	main(void)
{
	int	a;

	a = 10;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
	a = -2147483648;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = 2147483647;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = 0;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = -1;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
	a = 65;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = 90;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
	a = 91;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = 123;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
		a = 122;
	printf("myf: %d\n", ft_isalpha(a));
	printf("og: %d\n", isalpha(a));
	return(0);
}

