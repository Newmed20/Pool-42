/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:09:05 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/18 13:13:09 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i]
					&& str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
