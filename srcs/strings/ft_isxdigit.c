#include "libft.h"

/*
** Checks for a hexadecimal digits, 0 through F
*/

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || (c >= 'A' && c <= 'F'));
}
