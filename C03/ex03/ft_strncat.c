/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:30:16 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/02 10:08:37 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i1 = 0;
	while (src[i1] != '\0' && i1 < nb)
	{
		dest[i] = src[i1];
		i++;
		i1++;
	}
	dest[i] = '\0';
	return (dest);
}
