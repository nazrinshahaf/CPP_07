/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:59:34 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/01 18:54:45 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T> void swap(T &val1, T &val2)
{
	T	val3;

	val3 = val1;
	val1 = val2;
	val2 = val3;
}

template <typename T> T min(T &val1, T &val2)
{
	return ((val1 < val2) ? val1 : val2);
}

template <typename T> T max(T &val1, T &val2)
{
	return ((val1 > val2) ? val1 : val2);
}

#endif
