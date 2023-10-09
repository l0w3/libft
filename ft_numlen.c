/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrodri2 <alrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:16 by alrodri2          #+#    #+#             */
/*   Updated: 2023/10/09 15:41:23 by alrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int nbr)
{
	int	digcount;

	digcount = 1;
	while (nbr / 10 > 9)
	{
		nbr /= 10;
		++digcount;
	}
	return (digcount);
}
