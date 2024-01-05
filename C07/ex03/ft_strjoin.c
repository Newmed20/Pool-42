/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:37:07 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/01 23:28:57 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

char    *ft_strcat(char *dest , char *src)
{
    int i = 0;
    int j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[i] = src [j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int total = 0;
    int i = 0;
    int lsep;
    char *str;
    
    while(i < size)
    {
        total += ft_strlen(strs[i]);
        i++;
    }
    lsep = ft_strlen(sep);
    total += (lsep*(size-1));
    if(size > 0)
        str = (char *)malloc(total + 1);
    else
    {
        str = malloc(sizeof(char));
        str[0] = 0;
    }
    i = 0;
    while(i < size)
    {
        str = ft_strcat(str ,strs[i]);
        if(i != size - 1)
            str = ft_strcat(str , sep);
        i++;
    }
    return(str);
}

/*int main()
{
    char *strs[] = {"abc" , "efg" , "hijk"};
    char sep[] = "";
    printf("%s" , ft_strjoin(3 ,strs , sep));
    
}*/