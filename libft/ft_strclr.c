/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smerieux <smerieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 20:02:08 by smerieux          #+#    #+#             */
/*   Updated: 2015/01/28 17:09:22 by smerieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_strclr(char *s)
{
	size_t	len;

	if (s)
	{
		len = ft_strlen(s);
		ft_bzero((void *)s, len);
	}
}
