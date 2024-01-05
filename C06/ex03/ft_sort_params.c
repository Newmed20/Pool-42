/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:36:35 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/28 17:41:34 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}

int	ft_strcmp(char *t1, char *t2)
{
	int	i;

	i = 0;
	while (t1[i] != '\0' || t2[i] != '\0')
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **t1, char **t2)
{
	char	*swap;

	swap = *t1;
	*t1 = *t2;
	*t2 = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j + 1], argv[j]) < 0)
				ft_swap(&argv[j + 1], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
