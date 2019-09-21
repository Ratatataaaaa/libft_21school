/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 04:19:22 by cwing             #+#    #+#             */
/*   Updated: 2019/09/14 05:39:16 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*temp;
	int			iter;

	temp = (char*)s;
	iter = ft_strlen(s);
	while (iter >= 0)
	{
		if (temp[iter] == (char)c)
			return ((char*)(temp + iter));
		iter--;
	}
	return (NULL);
}
