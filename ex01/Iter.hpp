/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:59:42 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/01 20:12:47 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

using	std::cout;
using	std::endl;
//template <typename T> void iter(&T array[], int length, void (*f)(&T elem))
template <typename T> void iter(T array[], unsigned int length, void (*f)(T &val))
{
	srand(time(0));
	for (unsigned int i = 0; i < length; i++)
		f(array[i]);
}

#endif
