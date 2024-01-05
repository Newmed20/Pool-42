/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 04:35:24 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/28 09:59:20 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_basecheck(char *str)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(str);
	if (size < 2)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;
	int		valid;
	int		size;

	lnbr = nbr;
	valid = ft_basecheck(base);
	size = ft_strlen(base);
	if (valid == 1)
	{
		if (lnbr < 0)
		{
			ft_putchar('-');
			lnbr *= -1;
		}
		if (lnbr < size)
			ft_putchar(base[lnbr]);
		if (lnbr >= size)
		{
			ft_putnbr_base(lnbr / size, base);
			ft_putnbr_base(lnbr % size, base);
		}
	}
}

/*int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}*/