/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 22:27:28 by fmallaba          #+#    #+#             */
/*   Updated: 2017/10/30 15:32:47 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *a, const char *b, size_t n)
{
	if (*a && *b)
		while (--n && *b && *a)
		{
			if (*a != *b)
				return (*a - *b);
			a++;
			b++;
		}
	return (*a - *b);
}
