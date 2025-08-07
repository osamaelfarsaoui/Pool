/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:23:35 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/08/07 16:03:34 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_l;

	i = 0;
	dest_l = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (dest);
}

char	*ft_empty(void)
{
	char	*result;

	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

int	ft_total(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
	{
		total_len += ft_strlen(sep) * (size - 1);
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;

	if (size == 0)
		return (ft_empty());
	total_len = ft_total(size, strs, sep);
	result = malloc(total_len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char *arr[] = {"apah", "", "completed"};
	int size = 1;
	char *sep = "7";
	char *joined = ft_strjoin(size, arr, sep);
	if (joined)
	{
		printf("%s\n", joined);
		free(joined);
	}
	return (0);
}
*/