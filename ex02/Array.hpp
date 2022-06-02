/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:50:48 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/02 16:58:27 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class	Array
{
	public:
		Array();
		Array(size_t size);
		Array(Array const &tocopy);
		~Array();

		Array	&operator=(Array const &tocopy);
		T		&operator[](size_t index);
		const T	&operator[](size_t index) const;

		size_t	size(void) const;

		size_t	getSize(void) const;

		void	printArray(void) const;
		void	fillRandom(void);

		class	IndexOutOfRange: public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};

	private:
		size_t	_size;
		T		*_array;
};

//template <class T>
//std::ostream	&operator<<(std::ostream &os, Array<T> const &array)
//{
//	return os;
//}

#include "Array.ipp"

#endif
