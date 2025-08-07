/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:32:20 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/08/05 20:18:09 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
    int len;
    char *range;

	if (min >= max)
		return NULL;
	len = max - min;
	range = (int *)malloc(len * sizeof(int));
	if(!range)
		return NULL;
	i = 0;
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
