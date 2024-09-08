#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	unsigned long int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (r * s); 
}