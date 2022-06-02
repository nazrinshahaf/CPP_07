/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:53:49 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/02 15:22:19 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>

#include "colours.h"

using	std::cout;
using	std::endl;

template <class T>
Array<T>::Array()
{
	cout << GREEN "Array Default Constructor called" RESET << endl;
	this->_size = 0;
}

template <class T>
Array<T>::Array(size_t size)
{
	cout << GREEN "Array Assignment Constructor called" RESET << endl;
	this->_size = size;
	this->_array = new T[size];
}

template <class T>
Array<T>::~Array()
{
	cout << RED "Array Destructor called" RESET << endl;
	if (this->_size != 0)
		delete[] this->_array;
}

template <class T>
Array<T>::Array(Array<T> const &tocopy)
{
	cout << GREEN "Copy Constructor called" RESET << endl;
	this->_size = tocopy.getSize();
	this->_array = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = tocopy[i];
}

template <class T>
Array<T>	&Array<T>::operator=(Array<T> const &tocopy)
{
	cout << GREEN "Copy Assignment Operator called" RESET << endl;
	if (this->_size != 0)
		delete[] this->_array;
	this->_size = tocopy.getSize();
	this->_array = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = tocopy[i];
	return (*this);
}

template <class T>
T		&Array<T>::operator[](size_t index)
{
	if (index > this->_size)
		throw IndexOutOfRange();
	return (this->_array[index]);
}

template <class T>
const T	&Array<T>::operator[](size_t index) const
{
	if (index > this->_size)
		throw IndexOutOfRange();
	return (this->_array[index]);
}

template <class T>
void	Array<T>::printArray(void) const
{
	if (typeid(T) == typeid(float) || typeid(T) == typeid(double))
	{
		for (size_t i = 0; i < this->_size; i++)
		{
			if (i == this->_size - 1)
				cout << BLUE "[" << std::fixed << std::setprecision(1) << this->_array[i] << "]" RESET;
			else
				cout << BLUE "[" << std::fixed << std::setprecision(1) << this->_array[i] << "], " RESET;
		}
	}
	else
	{
		for (size_t i = 0; i < this->_size; i++)
		{
			if (i == this->_size - 1)
				cout << BLUE "[" << this->_array[i] << "]" RESET;
			else
				cout << BLUE "[" << this->_array[i] << "], " RESET;
		}
	}
	cout << endl;
}

template <class T>
void	Array<T>::fillRandom(void)
{
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = rand() % 1000;
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = rand() % 1000;
}

template <class T>
size_t	Array<T>::getSize(void) const
{
	return (this->_size);
}

template <class T>
size_t	Array<T>::size(void) const
{
	return (this->_size);
}

/*
 * Exceptions
 * */

template <class T>
const char	*Array<T>::IndexOutOfRange::what(void) const throw()
{
	return ("Index out of range");
}
