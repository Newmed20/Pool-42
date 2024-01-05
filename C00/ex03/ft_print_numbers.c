/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:50:02 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/12 17:22:02 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}