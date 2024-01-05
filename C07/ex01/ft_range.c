/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:33:58 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/02 19:58:22 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int *ft_range(int min, int max)
{
    int size;
    int *array;
    int i = min ;
    int j =0;
    
    if(min >= max)
        return (NULL);
    size = max - min ;
    array = (int *)malloc(size *sizeof(int));
    if(array == NULL)
        return(NULL);
    while(j <= size)
    {
        array[j] = i;
        i++;
        j++;
    }
    return(array);
}