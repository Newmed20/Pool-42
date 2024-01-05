/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:53:11 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/02 10:39:09 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str)
{

	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	slen = ft_strlen(src);
	j = 0;
	while (dest[i] != '\0')
		i++;
	dlen = i;
	if (size <= dlen)
		return (size + slen);
	while (src[j] != '\0' && j < size - dlen - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}

/*int main()
{
	char src[]="abc";
	char dest[] = "ba";
	printf("%d" ,ft_strlcat(dest, src,15) );
}*/