/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:35:07 by alrodri2          #+#    #+#             */
/*   Updated: 2022/09/23 11:13:31 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haysack, const char *needle, size_t len)
{
	int	i;

	if (ft_strlen(needle) == 0)
		return ((char *)haysack);
	while (*haysack != '\0' && len > 0)
	{
		i = 0;
		while (*haysack == needle[i] && needle[i] != '\0' && len > 0)
		{
			++haysack;
			++i;
			--len;
		}
		haysack -= i;
		if (i == ft_strlen(needle))
			return ((char *)haysack);
		len += i;
		++haysack;
		--len;
	}
	return ((char *)0);
}
