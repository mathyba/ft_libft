#include "libft.h"

/*
** Checks for any printable character which is not a space or an alphanumeric character.
*/

int	ft_ispunct(int c)
{
	return (ft_isgraph(c) && !ft_isalnum(c));
}
