/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@studenhht.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 03:27:06 by mjadid            #+#    #+#             */
/*   Updated: 2023/10/30 04:26:22 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		slen;
	char	*dest;

	slen = ft_strlen(src);
	dest = (char *)malloc(slen + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*int	main(void)
{
	char *src = "abcd";
	printf("%s", ft_strdup(src));
}*/