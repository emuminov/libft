#include "../libft.h"
#include <assert.h>
#include <stdio.h>
int	main(void)
{
	assert(ft_atoi_base("0123456789", "321") == 321);
	assert(ft_atoi_base("0123456789", "-321") == -321);
	assert(ft_atoi_base("0123456789", "0") == 0);
	assert(ft_atoi_base("0123456789", "2147483647") == 2147483647);
	assert(ft_atoi_base("0123456789", "-2147483648") == -2147483648);
	assert(ft_atoi_base("0123456789abcdef", "1f") == 31);
	assert(ft_atoi_base("0123456789abcdef", "7fffffff") == 2147483647);
	assert(ft_atoi_base("0123456789abcdef", "-80000000") == -2147483648);
}
