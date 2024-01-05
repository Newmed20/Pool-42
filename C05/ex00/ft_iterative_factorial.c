/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:10:14 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/01 00:08:18 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
