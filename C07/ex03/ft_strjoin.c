/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:23:35 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/08/08 01:47:20 by oelfarsa         ###   ########.fr       */
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

void	ft_join(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;

	total_len = 0;
	if (size <= 0)
		return (ft_empty());
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	result = malloc((total_len + ft_strlen(sep) * (size - 1) + 1));
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_join(size, strs, sep, result);
	return (result);
}
