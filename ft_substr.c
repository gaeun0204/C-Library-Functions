/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaekim <gaekim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 20:26:34 by gaekim            #+#    #+#             */
/*   Updated: 2020/04/19 14:28:19 by gaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	p_size;

	i = 0;
	p_size = 0;
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	else if (start < ft_strlen((char *)s) && start + len > ft_strlen((char *)s))
		p_size = ft_strlen((char *)s) - start;
	else if (start < ft_strlen((char *)s) && start + len < ft_strlen((char *)s))
		p_size = len;
	if (!(p = (char *)malloc((p_size + 1) * sizeof(char))))
		return (NULL);
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
