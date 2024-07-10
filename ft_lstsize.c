/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:05:28 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/16 11:05:30 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		cont;

	cont = 0;
	new = lst;
	while (new)
	{
		cont++;
		new = new->next;
	}
	return (cont);
}
