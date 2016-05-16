/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smerieux <smerieux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:52:10 by smerieux          #+#    #+#             */
/*   Updated: 2015/01/28 17:11:01 by smerieux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strequ(const char *s1, const char *s2)
{
	if (s1 != NULL && s2 != NULL && ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
