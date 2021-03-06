/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ship.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 15:02:32 by jpiniau           #+#    #+#             */
/*   Updated: 2016/01/30 16:43:39 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	ship_pos(t_env *env, double new_pos)
{
	if (new_pos >= env->ship.width && new_pos <= WIDTH - env->ship.width)
		env->ship.pos.x = new_pos;
}
