/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:36:54 by mjadid            #+#    #+#             */
/*   Updated: 2023/11/02 20:01:19 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i = 0;
    int size;
    
    if(min >= max)
    {
        *range = NULL ;
        return(0);
    }
    size = max - min;
    *range = malloc(size * sizeof(int));
    if(range == NULL)
      return(0);
    while(min < max)
    {
      (*range)[i] = min;
      i++;
      min++;
    }
    return(size); 
}