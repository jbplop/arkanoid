/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:41:58 by jpiniau           #+#    #+#             */
/*   Updated: 2014/11/07 10:39:39 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0')
	{
		while (s2[i] == s1[i])
		{
			i++;
			if (s2[i] == '\0')
				return ((char*)s1);
		}
		s1++;
		i = 0;
	}
	return (NULL);
}
