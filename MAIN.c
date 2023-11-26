#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *stc, size_t size);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);



/*// -- isalpha --
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
}*/
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
	size_t	g;

	a = 128;
	b = 129;
	c = 141;
	d = 142;
	e = 160;
	f = 216;
	g = 9999999999999;
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
	printf("OGf: %d\n\n", isprint(f));

		printf("myf: %d\n", ft_isprint(g));
	printf("OGf: %d\n", isprint(g));
	return (0);
}
*/
/*// -- strlen --
int	main(void)
{
	char	*str2;
	char	str3[999999] = "Hola";
	char	*str4;
	int i = 0;

	str2 = "hello";
	while (i < 999998)
	{
		str3[i] = 's';
		i++;
	}
	str3[999998] = '\0';
	str4 = NULL;

	printf("\n----\nString is: %s\nLength: %zu\nOGlength: %zu\n", "Teleto", ft_strlen("Teleto"), strlen("Teleto"));
	printf("\n----\nString 2 is: %s\nLengtqq: %zu\nOGlength: %zu\n", str2, ft_strlen(str2), strlen(str2));
	printf("\n----\nString 3 size: %zu\nLength: %zu\nOGlength: %zu\n", sizeof(str3), ft_strlen(str3), strlen(str3));
	printf("\n----\nString 4 is: \nLength: \nOGlength: %zu\n", strlen(str4));

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
/*// -- bzero --
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
int	main(void) // not used this test except to start and overlap
{
	char	d[] = "aaaaaaaaaaaaaaa";
	char	*s;
	char	*str[3] = {"hello", "there"};
	char	*dest = "hi";
	
	s = d - 2;
	printf("\nOG:|%s| address:|%p|\nft:|%s| address:|%p|\n", memmove(d, s, 3), memmove(d, s, 3), ft_memmove(d, s, 3), ft_memmove(d, s, 3));
	printf("\nOG:|%s| address:|%p|\nft:|%s| address:|%p|\n", memmove(dest, str[0], 3), memmove(dest, str[0], 3), ft_memmove(dest, str[0], 3), ft_memmove(dest, str[0], 3));
	
	return(0);
}
*/
/*// -- strlcpy --
int	main(void)
{

	// === SOURCE SMALLER THAN DEST ===

	char	ch = 'D';
	char	d[50];
	char	*s = "Kadbimojab";
	printf("\n === strlcpy ===\n\n- A - Source smaller than dest -\n");
	printf("	-->| s length Me: %zu |<-- //sizeof d: %zu bytes, sizeof s: %zu bytes\n", ft_strlcpy(d, s, sizeof(d)), sizeof(d), sizeof(s));
	printf("	d after ft_strlcpy: %s", d);
	memset((void*)d, ch-1, sizeof(d)-1);
	printf("\n	d[3] after Mem-RE-set: %c (should be '%c')\n", d[3], ch-1);
	printf("	-->| s length OG: %zu |<--  //sizeof d: %zu bytes, sizeof s: %zu bytes\n", strlcpy(d, s, sizeof(d)), sizeof(d), sizeof(s));
	printf("	d after strlcpy: %s", d);


	// === UINT_MAX FOR SOURCE AND DEST ===

	printf("\n\n- B - UINT_MAX for source and dest[UINT_MAX/2000] -\n");
	size_t	mysize = UINT_MAX;
	char	*s2 = (char *) malloc(mysize);
	char	d2[mysize/2000];
	if (s == 0)
		{
			printf("\nmalloc error\n");
			return (1);
		}
	memset((void*)s2, ch, mysize-1);
	printf("\n	s2 memset done: %c (should be '%c')\n", s2[mysize-2], ch);
	printf("	-->| s2 length Me: %zu |<--  //sizeof d2: %zu bytes, sizeof s2: %zu bytes\n", ft_strlcpy(d2, s2, sizeof(d2)), sizeof(d2), sizeof(s2));
	printf("	d2[3] after ft_strlcpy: %c", d2[3]);
	memset((void*)d2, ch+1, sizeof(d2)-1);
	printf("\n	d2[3] after Mem-RE-set: %c (should be '%c')\n", d2[3], ch+1);
	printf("	-->| s2 length OG: %zu |<--  //sizeof d2: %zu bytes, sizeof s2: %zu bytes\n", strlcpy(d2, s2, sizeof(d2)), sizeof(d2), sizeof(s2));
	printf("	d2[3] after strlcpy: %c", d2[3]);



	// === 0 FOR DEST ("size" parameter) ===

	printf("\n\n- C - 0 FOR DEST ('size' parameter) -\n");
	char	*s3 = "Blast";
	char	*s3b = "Blast";
	char	d3a[0];
	char	d3b[0];
	printf("	-->| s3b length OG: %zu |<--  ", strlcpy(d3b, s3b, 0));
	printf("	-->| s3 length Me: %zu |<--  //sizeof d3a: %zu bytes, sizeof s3: %zu bytes\n", ft_strlcpy(d3a, s3, 0), sizeof(d3a), sizeof(s3));



	return (0);
}
*/
/*// -- strlcat --
int	main(void)
{
	char	d[8] = "hello";
	char	d2[8] = "hello";
	
	char	d3[12] = "HAHAHAHAHAH";
	char	d4[12] = "HAHAHAHAHAH";
	
	char	d5[16] = "rrrrrrrrrrrrrrr";
	char	d6[16] = "rrrrrrrrrrrrrrr";
	
	char	*s = "mopo";
	char	*s2 = "lorem ipsum dolor sit amet";
	
	printf("1_\nOG:%zu, dest:|%s|", strlcat(d, s, sizeof(d)), d);
	printf("\nft:%zu, dest:|%s|", ft_strlcat(d2, s, sizeof(d2)), d2);

	printf("\n2_\nOG:%zu, dest:|%s|", strlcat(d3, s, 5), d3);
	printf("\nft:%zu, dest:|%s|", ft_strlcat(d4, s, 5), d4);

	printf("\n3_\nOG:%zu, dest:|%s|", strlcat(d5, s2, 5), d5);
	printf("\nft:%zu, dest:|%s|\n", ft_strlcat(d6, s2, 5), d6);
	return (0);
}
*/
/*//-- toupper --
int	main(void)
{
	printf("given: %c, returned: %c\n", 106, ft_toupper(106));
	printf("given: %d, returned: %d\n", 0, ft_toupper(0));
	printf("given: %c, returned: %c\n", -169, ft_toupper(-169));
	printf("given: %d, returned: %c\n", -97, ft_toupper(-97));
	printf("given: %d, returned: %d\n", -260, ft_toupper(-260));
}
*/
/*//-- tolower --
int	main(void)
{
	printf("given: %d, returned: %d\n", -0, ft_tolower(-0));
	printf("given: %d, returned: %d\n", 0, ft_tolower(0));
	printf("given: %d, returned: %d\n", -169, ft_tolower(-169));
	printf("given: %d, returned: %d\n", -85, ft_tolower(-85));
	printf("given: %d, returned: %d\n", -260, ft_tolower(-260));
	printf("given: %d, returned: %d\n", -1, ft_tolower(-1));
printf("__OG below __\n");
	printf("given: %d, returned: %d\n", -0, tolower(-0));
	printf("given: %d, returned: %d\n", 0, tolower(0));
	printf("given: %d, returned: %d\n", -169, tolower(-169));
	printf("given: %d, returned: %d\n", -85, tolower(-85));
	printf("given: %d, returned: %d\n", -260, tolower(-260));
	printf("given: %d, returned: %d\n", -1, tolower(-1));
}
*/
/*//--- strchr ---
int main(void)
{
	char s1[1000] = "yap~";
	//s1[4] = 'z';
	printf("\ngiven string: %s and its address: %p\n", s1, s1);
	printf("_1\nft_: %p \n OG: %p\n", ft_strchr(s1, 0), strchr(s1, 0));
	printf("_2\nft_: %p \n OG: %p\n", ft_strchr(s1, -2147483648), strchr(s1, -2147483648));
	printf("_3\nft_: %p \n OG: %p\n", ft_strchr(s1, 'p'), strchr(s1, 'p'));
	printf("_4\nft_: %p \n OG: %p\n", ft_strchr(s1, 'Z'), strchr(s1, 'Z'));
	printf("_5\nft_: %p \n OG: %p\n", ft_strchr(s1, -126), strchr(s1, -126));
	printf("_6\nft_: %p \n OG: %p\n", ft_strchr(s1, '\0'), strchr(s1, '\0'));
	printf("_7\nft_: %p \n OG: %p\n", ft_strchr("teste", 'e'), strchr("teste", 'e'));
	return (0);
}
*/
/*//-- strRchr --
int	main(void)
{
	char s1[1000] = "yapyapz";
	//s1[4] = 'z';
	printf("\ngiven string: %s and its address: %p, and sizeof(s1): %zu\n", s1, s1, sizeof(s1));
	printf("_1\nft_: %p \n OG: %p\n", ft_strrchr(s1, 0), strrchr(s1, 0));
	printf("_2\nft_: %p \n OG: %p\n", ft_strrchr(s1, 'p'), strrchr(s1, 'p'));
	printf("_3\nft_: %p \n OG: %p\n", ft_strrchr(s1, 'Z'), strrchr(s1, 'Z'));
	printf("_4\nft_: %p \n OG: %p\n", ft_strrchr(s1, 126), strrchr(s1, 126));
	printf("_5\nft_: %p \n OG: %p\n", ft_strrchr(s1, 1), strrchr(s1, 1));
	printf("_6\nft_: %p \n OG: %p\n", ft_strrchr(s1, -142), strrchr(s1, -142));
	printf("_7\nft_: %p \n OG: %p\n", ft_strrchr(s1, 'a'), strrchr(s1, 'a'));
	printf("_8\nft_: %p \n OG: %p\n", ft_strrchr(s1, 21474), strrchr(s1, 21474));
	printf("_9\nft_: %p \n OG: %p\n", ft_strrchr("", 0), strrchr("", 0));
	printf("_10\nft_: %p \n OG: %p\n", ft_strrchr("bonjour", 'b'), strrchr("bonjour", 'b'));
	printf("_11\nft_: %s \n OG: %s\n", ft_strrchr("ripla", 'p'+256), strrchr("ripla", 'p'+256));

	return (0);
}
*/
/*// -- strNcmp --
int	main(void)
{
	printf("\n_1_\nft:|%d|\nOG:|%d|\n", ft_strncmp("salub", "salut", 5), strncmp("salub", "salut", 5));
	printf("\n_2_\nft:|%d|\nOG:|%d|\n", ft_strncmp("salut", "salut", 5), strncmp("salut", "salut", 5));
	printf("\n_3_\nft:|%d|\nOG:|%d|\n", ft_strncmp("salub", "salut", 0), strncmp("salub", "salut", 0));
	printf("\n_4_\nft:|%d|\nOG:|%d|\n", ft_strncmp("", "", 5), strncmp("", "", 5));
	printf("\n_5_\nft:|%d|\nOG:|%d|\n", ft_strncmp("hola", "hola", INT_MAX), strncmp("hola", "hola", INT_MAX));
	return (0);
}
*/
/*// -- memchr --
int	main(void)
{
	printf("\nft: |%p| %s\nOG: |%p| %s\n", ft_memchr("electrice", 'c', 5), ft_memchr("electrice", 'c', 5), memchr("electrice", 'c', 5), memchr("electrice", 'c', 5));
	return (0);
}
*/
/*// -- memcmp --
int	main(void)
{
	printf("\nft: |%d| \nOG: |%d| \n", ft_memcmp("trio", "trio\0a", 6), memcmp("trio", "trio\0a", 6));
	return (0);
}
*/
/*// -- strnstr --
int	main(void)
{
	char	*s = "woah";
	printf("\n1_basic\nft:|%p|\nOG:|%p|\n", ft_strnstr("halelluyah", "ellu", 9), strnstr("halelluyah", "ellu", 9));
	printf("\n2_not enough len\nft:|%s|\nOG:|%s|\n", ft_strnstr("halelluyah", "yah", 9), strnstr("halelluyah", "yah", 9));
	printf("\n3_needle is empty\nft:|%p|\nOG:|%p|\n", ft_strnstr("halelluyah", "", 9), strnstr("halelluyah", "", 9));
	printf("\n4_hay is empty\nft:|%p|\nOG:|%p|\n", ft_strnstr("", "ellu", 9), strnstr("", "ellu", 9));
	printf("\n5_len is 0\nft:|%p|\nOG:|%p|\n", ft_strnstr("halelluyah", "ellu", 0), strnstr("halelluyah", "ellu", 0));
	printf("\n6_2 needles in hay\nft:|%p|\nOG:|%p|\n", ft_strnstr("halelluelluyah", "ellu", 14), strnstr("halelluelluyah", "ellu", 14));
	printf("\n7_'\\0' in hay\nft:|%p|\nOG:|%p|\n", ft_strnstr("hal\0elluyah", "ellu", 11), strnstr("hal\0elluyah", "ellu", 11));
	printf("\n8_same strings\nft:|%s|\nOG:|%s|\n", ft_strnstr(s, s, 4), strnstr(s, s, 4));
	// printf("\nft_strncmp:%d", ft_strncmp(s, s, strlen(s)));
	return (0);
}
*/
/*// -- atoi --
int	main(void)
{
	
	char s[100] = "\t\n +125abc";
	char s2[100] = "12 5ab";
	char s3[100] = "-085";
	char *s4= "955";
	char *s5 = "56 1";
	char *s6 = "+4147483649907134698314968139";
	char *s7 = "-4147483649907134698314968139";
	char *s8 = "_\t -4147483649907134698314 96a8139";
	char *s9 = "-4000000000";

	
	printf("1_\nOG:%d\nft:%d\n", atoi(s), ft_atoi(s));
	printf("2_\nOG:%d\nft:%d\n", atoi(s2), ft_atoi(s2));
	printf("3_\nOG:%d\nft:%d\n", atoi("\n 11"), ft_atoi("\n 11"));
	printf("4_\nOG:%d\nft:%d\n", atoi("\n-90 82"), ft_atoi("\n-90 82"));
	printf("5_\nOG:%d\nft:%d\n", atoi(s3), ft_atoi(s3));
	printf("6_\nOG:%d\nft:%d\n", atoi(s4), ft_atoi(s4));
	printf("7_\nOG:%d\nft:%d\n", atoi(s5), ft_atoi(s5));
	printf("8_\nOG:%d\nft:%d\n", atoi(s6), ft_atoi(s6));
	printf("9_\nOG:%d\nft:%d\n", atoi(s7), ft_atoi(s7));
	printf("10_\nOG:%d\nft:%d\n", atoi(s8), ft_atoi(s8));
	printf("10_\nOG:%d\nft:%d\n", atoi(s9), ft_atoi(s9));
	return (0);
}
*/
/*// -- calloc -- 
int	main(void)
{
	//1
	printf("\nOG:|%p|, sizeof():|%zu|", calloc(30, 4), sizeof(calloc(30, 4)));
	printf("\nft:|%p|, sizeof():|%zu|\n", ft_calloc(30, 4), sizeof(ft_calloc(30, 4)));
	//2
	printf("\nOG:|%p|, sizeof():|%zu|", calloc(0, 1), sizeof(calloc(0, 1)));
	printf("\nft:|%p|, sizeof():|%zu|\n", ft_calloc(0, 1), sizeof(ft_calloc(0, 1)));	
	//3
	printf("\nOG:|%p|, sizeof():|%zu|", calloc(0, 0), sizeof(calloc(0, 0)));
	printf("\nft:|%p|, sizeof():|%zu|\n", ft_calloc(0, 0), sizeof(ft_calloc(0, 0)));
	printf("\n%zu", LONG_MAX);

	return (0);
}
*/
/*// -- striteri --
static void	to_lower(unsigned int i, char *s)
{
	s[i] = s[i] + ('a' - 'A');
}
// striteri function goes here
int	main(void)
{
	char	str[] = "HELLO"; // Lesson: string literal is not modifyable, array of characters is
	ft_striteri(str, to_lower);
	printf("\nstr:%s\n", str);

	return (0);
}
*/
/*// -- substr -- 
int	main(void)
{
	char	*result =  ft_substr("i just want this part #############", 0, 22);
	printf("\n1	|%s|normal\n", result);
	
	char	*result2 =  ft_substr("", 0, 1);
	printf("\n2	|%s| empty s\n", result2);

	char	*result3 =  ft_substr("hello", 0, 0);
	printf("\n3	|%s| len 0\n", result3);
	
	char	*result4 =  ft_substr("hello", 0, 10);
	printf("\n4	|%s| len > s\n", result4);
	
	char	*result5 =  ft_substr("hello", 0, 5);
	printf("\n5	|%s| len == s\n", result5);

	char	*result6 =  ft_substr("tripouille", 1, 1);
	printf("\n6	|%s|\n", result6);
	
	return (0);
}
*/
/*// -- strjoin --
int	main(void)
{
	char	*result =  ft_strjoin("Hello", "world");
	printf("\n1 |%s|normal\n", result);
printf("1a|%d|end check\n", result[10]);

	char	*result2 =  ft_strjoin("", "world");
	printf("\n2 |%s|normal\n", result2);
if(result2[300] == '\0')
	printf("yes");

	return (0);
}
*/
/*// -- itoa -- 
int	main(void)
{
	printf("num:%d, returns: %d\n", 10, ft_numlen(10));
	printf("num:%d, returns: %d\n", -10, ft_numlen(-10));
	printf("num:%d, returns: %d\n", 0, ft_numlen(0));
	printf("num:%d, returns: %d\n", 8, ft_numlen(8));
	printf("num:%d, returns: %d\n", -243, ft_numlen(-243));
	printf("num:%d, returns: %d\n", -8, ft_numlen(-8));
	printf("num:%d, returns: %s\n___\n", -342, ft_itoa(-342));
	printf("num:%d, returns: %s\n___\n", -342, ft_itoa(-342));
	printf("num:%d, returns: %s\n___\n", 10, ft_itoa(10));
	printf("num:%d, returns: %s\n___\n", -10, ft_itoa(-10));
	printf("num:%d, returns: %s\n___\n", 0, ft_itoa(0));
	printf("num:%d, returns: %s\n___\n", -8, ft_itoa(-8));
	printf("num:%d, returns: %s\n___\n", 8, ft_itoa(8));
	return (0);
}
*/