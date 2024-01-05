/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:46:55 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/28 16:46:56 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

/*int main()
{
	printf("%d" , ft_iterative_power(-2 ,4));
}*/