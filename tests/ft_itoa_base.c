#include <stdio.h>
#include "../libft.h"
int	main(void)
{
	char *test6 = ft_itoa_base("0123456789abcdef", 100);
	char *test7 = ft_itoa_base("0123456789abcdef", -100);
	char *test8 = ft_itoa_base("0123456789abcdef", 2147483647);
	char *test9 = ft_itoa_base("0123456789abcdef", -2147483648);
	char *test10 = ft_itoa_base("0123456789abcdef", 0);
	printf("%s\n", test6);
	printf("%s\n", test7);
	printf("%s\n", test8);
	printf("%s\n", test9);
	printf("%s\n", test10);
	free(test6);
	free(test7);
	free(test8);
	free(test9);
	free(test10);
}
