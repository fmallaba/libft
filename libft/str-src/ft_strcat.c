/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:45:31 by fmallaba          #+#    #+#             */
/*   Updated: 2017/10/28 20:01:41 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	char	*ret;

	ret = dest;
	while (*dest++)
		;
	dest--;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}