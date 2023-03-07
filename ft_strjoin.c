/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:03 by ybel-hac          #+#    #+#             */
/*   Updated: 2023/03/07 11:23:47 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// char	*ft_strjoin(char const *s1, char const *s2, int free)
// {
// 	char	*final_str;
// 	size_t	total_len;
// 	int		i;

// 	if (!s1 || !s2)
// 		return (0);
// 	i = 0;
// 	total_len = ft_strlen(s1) + ft_strlen(s2);
// 	final_str = malloc(sizeof(char) * (total_len + 1));
// 	if (!final_str)
// 		return (0);
// 	ft_strcpy(final_str + i, s1);
// 	i = ft_strlen(final_str);
// 	ft_strcpy(final_str + i, s2);
// 	return (final_str);
// }

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*final_str;
	int		total_len;
	int		i;

	i = 0;
	total_len = get_str_len(s1) + get_str_len(s2);
	final_str = malloc(sizeof(char) * (total_len + 2));
	if (!final_str)
		return (0);
	if (!s1)
		s1 = ft_substr("", 0, 0);
	ft_strcpy(final_str, s1);
	i = get_str_len(final_str);
	if (s2)
		ft_strcpy(final_str + i, s2);
	free(s1);
	return (final_str);
}
