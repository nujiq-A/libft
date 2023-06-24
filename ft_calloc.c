/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qang <qang@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:02:22 by qang              #+#    #+#             */
/*   Updated: 2023/05/11 15:39:22 by qang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*temp;

	if (size == SIZE_MAX || nitems == SIZE_MAX)
		return (NULL);
	temp = (void *)malloc(size * nitems);
	if (temp == NULL)
		return (NULL);
	return (ft_memset(temp, 0, size * nitems));
}
