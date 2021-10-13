/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:49:18 by pbolton           #+#    #+#             */
/*   Updated: 2021/10/09 16:49:23 by pbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;
	unsigned int	l;

	i = 0;
	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	l = ft_strlen(&s[start]);
	if (l < len)
		sub = malloc(sizeof(*sub) * l + 1);
	else
		sub = malloc(sizeof(*sub) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[start] && len > 0)
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
