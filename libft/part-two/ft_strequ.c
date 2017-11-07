/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:10:53 by fmallaba          #+#    #+#             */
/*   Updated: 2017/10/31 15:50:58 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	if (*s1 != *s2)
		return (0);
	while (*s1++ == *s2++ && *s1 && *s2)
		;
	if (!*s1 && !*s2)
		return (1);
	return (0);
}
