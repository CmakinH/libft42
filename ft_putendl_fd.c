/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrenzy <lfrenzy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:13:55 by lfrenzy           #+#    #+#             */
/*   Updated: 2021/12/07 15:13:56 by lfrenzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}
