/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:13:24 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/07 15:13:25 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		else
		{	
			p1++;
			p2++;
		}
	}
	return (0);
}
