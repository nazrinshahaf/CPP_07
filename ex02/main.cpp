/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:03:02 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/02 17:37:04 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Array.hpp"

#include "colours.h"

using	std::endl;
using	std::cout;

int	main()
{
	srand(time(0));

	cout << CYAN "[Testing copy constructor and copy assignment operator]" RESET << endl << endl;
	{
		cout << CYAN "[Testing copy assignment operator]" RESET << endl;
		size_t		len = 10;
		Array<int>	*array = new Array<int>(len);
		Array<int>	*array2 = new Array<int>();

		cout << endl;
		cout << MAGENTA "Filling array1 with random numbers..." RESET << endl;
		cout << "Array1 size: " MAGENTA "<" << array->size() << ">" RESET << endl;
		array->fillRandom();
		cout << MAGENTA "Printing array1..." RESET << endl;
		array->printArray();
		cout << endl;

		cout << "Array2 size before copy: " MAGENTA "<" << array2->size() << ">" RESET << endl;
		cout << MAGENTA "Array2 coppying array 1..." RESET << endl;
		*array2 = *array;
		cout << "Array2 size after copy: " MAGENTA "<" << array2->size() << ">" RESET << endl;
		cout << MAGENTA "Printing array2..." RESET << endl;
		array2->printArray();
		cout << endl;
		
		cout << MAGENTA "Deleting array1" RESET << endl;
		delete array;
		cout << MAGENTA "Printing array2..." RESET << endl;
		array2->printArray();
		cout << endl;

		cout << CYAN "[Testing copy constructor]" RESET << endl;

		cout << MAGENTA "Array3 coppying array2..." RESET << endl;
		Array<int>	*array3 = new Array<int>(*array2);
		cout << MAGENTA "Printing array3..." RESET << endl;
		array3->printArray();
		cout << endl;

		cout << MAGENTA "Deleting array2" RESET << endl;
		delete array2;
		cout << MAGENTA "Printing array3..." RESET << endl;
		array3->printArray();
		cout << endl;
		delete array3;
	}
	cout << endl << endl;

	cout << CYAN "[Trying to index through int array]" RESET << endl;
	{
		size_t		len = 10;
		Array<int>	*array = new Array<int>(len);

		cout << MAGENTA "Filling array with random numbers..." RESET << endl;
		array->fillRandom();
		array->printArray();
		cout << MAGENTA "Printing array without using print function (accessing class with index operator overload)..." << endl;
		for (size_t i = 0; i < len; i++)
			cout << CYAN "[" << (*array)[i] << "]" RESET << endl;

		cout << MAGENTA "Filling array with set numbers (modifying class with index operator overload)..." RESET << endl;
		for (size_t i = 0; i < len; i++)
			(*array)[i] = static_cast<int>(i);
		array->printArray();

		cout << CYAN "[Trying to index out of bounds array]" RESET << endl;

		try
		{
			(*array)[100] = 10;
		}
		catch (Array<int>::IndexOutOfRange &exception)
		{
			cout << "Exception caught: " RED "<" << exception.what() << ">." RESET << endl;
		}
		delete array;
	}
	cout << endl << endl;

	cout << CYAN "[Trying to index through float array]" RESET << endl;
	{
		size_t		len = 10;
		Array<float>	*array = new Array<float>(len);

		cout << MAGENTA "Filling array with random numbers..." RESET << endl;
		array->fillRandom();
		array->printArray();
		cout << MAGENTA "Printing array without using print function (accessing class with index operator overload)..." << endl;
		for (size_t i = 0; i < len; i++)
			cout << CYAN "[" << std::fixed << std::setprecision(1) << (*array)[i] << "]" RESET << endl;

		cout << MAGENTA "Filling array with set numbers (modifying class with index operator overload)..." RESET << endl;
		for (size_t i = 0; i < len; i++)
			(*array)[i] = static_cast<float>(i);
		array->printArray();

		cout << CYAN "[Trying to get size of array]" RESET << endl;
		cout << "Array size: " MAGENTA "<" << array->size() << ">" RESET << endl;

		delete array;
	}
	cout << endl << endl;
}
