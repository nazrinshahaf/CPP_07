/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:09:19 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/01 20:22:28 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <random>
#include <iomanip>

#include "Iter.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

template <typename T> void print_value(T &value)
{
	cout << std::fixed << std::setprecision(1) << BLUE "<" << value << ">" RESET << endl;
}

template <typename T> void random_value(T &value)
{
	T	random;

	random = rand() % 1000;
	value = random;
}

template <typename T> void increment(T &value)
{
	value += 1;
}

template <typename T> void decrement(T &value)
{
	value -= 1;
}

int	main()
{
	{
		float	array[] = {10, 1, 123, 76, 1023, 123};

		cout << CYAN "Printing initial float array..." RESET << endl;
		iter<float>(array, 6, print_value);
		cout << CYAN "Randomising float array values..." RESET << endl;
		iter<float>(array, 6, random_value);
		cout << endl;
		cout << CYAN "Printing final float array..." RESET << endl;
		iter<float>(array, 6, print_value);
	}
	cout << endl << endl;

	{
		int	array[] = {32, 67 , 1230 , 1234 , 8, 130};

		cout << CYAN "Printing initial int array..." RESET << endl;
		iter<int>(array, 6, print_value);
		cout << CYAN "Incrementing int array by 1..." RESET << endl;
		iter<int>(array, 6, increment);
		cout << endl;
		cout << CYAN "Printing final int array..." RESET << endl;
		iter<int>(array, 6, print_value);
	}
	cout << endl << endl;

	{
		char array[] = {'a', 'v' , '~', '[', ' ', '*'};

		cout << CYAN "Printing initial char array..." RESET << endl;
		iter<char>(array, 6, print_value);
		cout << CYAN "Decrementing char array by 1..." RESET << endl;
		iter<char>(array, 6, decrement);
		cout << endl;
		cout << CYAN "Printing final char array..." RESET << endl;
		iter<char>(array, 6, print_value);
	}
}
