/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:37:28 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/01 18:55:25 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Templates.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

int	main()
{
	cout << CYAN "[Trying to swap values of 2 unkown types]" RESET << endl << endl;
	{
		int	val1 = 10;
		int	val2 = 20;

		cout << MAGENTA "Swapping the values of 2 ints" RESET << endl;
		cout << "value of val 1 before swap: " BLUE "<" << val1 << ">" RESET << endl;
		cout << "value of val 2 before swap: " BLUE "<" << val2 << ">" RESET << endl;
		cout << MAGENTA "Swapping the values of val1 and val2..." RESET << endl;
		swap<int>(val1, val2);
		cout << "value of val 1 after swap: " BLUE "<" << val1 << ">" RESET << endl;
		cout << "value of val 2 after swap: " BLUE "<" << val2 << ">" RESET << endl;
		cout << endl;

		float	val3 = 42.1f;
		float	val4 = 87.321f;

		cout << MAGENTA "Swapping the values of 2 floats" RESET << endl;
		cout << "value of val 3 before swap: " BLUE "<" << val3 << ">" RESET << endl;
		cout << "value of val 4 before swap: " BLUE "<" << val4 << ">" RESET << endl;
		cout << MAGENTA "Swapping the values of val3 and val4..." RESET << endl;
		swap<float>(val3, val4);
		cout << "value of val 3 after swap: " BLUE "<" << val3 << ">" RESET << endl;
		cout << "value of val 4 after swap: " BLUE "<" << val4 << ">" RESET << endl;
		cout << endl;

		char	val5 = 'a';
		char	val6 = ')';

		cout << MAGENTA "Swapping the values of 2 chars" RESET << endl;
		cout << "value of val 5 before swap: " BLUE "<" << val5 << ">" RESET << endl;
		cout << "value of val 6 before swap: " BLUE "<" << val6 << ">" RESET << endl;
		cout << MAGENTA "Swapping the values of val5 and val6..." RESET << endl;
		swap<char>(val5, val6);
		cout << "value of val 5 after swap: " BLUE "<" << val5 << ">" RESET << endl;
		cout << "value of val 6 after swap: " BLUE "<" << val6 << ">" RESET << endl;
	}
	cout << endl << endl;

	cout << CYAN "[Trying to get the min values of 2 unkown types]" RESET << endl << endl;
	{
		int val1 = 10;
		int	val2 = 20;

		cout << MAGENTA "Min the values of 2 ints" RESET << endl;
		cout << "value of val1: " BLUE "<" << val1 << ">" RESET << endl;
		cout << "value of val2: " BLUE "<" << val2 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val1 and val2..." RESET << endl;
		cout << "Min value is : " BLUE "<" << min<int>(val1, val2) << ">" RESET << endl;
		cout << endl;

		float	val3 = 42.1f;
		float	val4 = 87.321f;

		cout << MAGENTA "Min the values of 2 floats" RESET << endl;
		cout << "value of val3: " BLUE "<" << val3 << ">" RESET << endl;
		cout << "value of val4: " BLUE "<" << val4 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val3 and val4..." RESET << endl;
		cout << "Min value is : " BLUE "<" << min<float>(val3, val4) << ">" RESET << endl;
		cout << endl;

		int	val5 = 'a';
		int	val6 = 'a';

		cout << MAGENTA "Min the values of 2 ints that are the same" RESET << endl;
		cout << "value of val5: " BLUE "<" << val5 << ">" RESET << endl;
		cout << "value of val6: " BLUE "<" << val6 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val5 and val6..." RESET << endl;
		cout << "Min value is : " BLUE "<" << min<int>(val5, val6) << ">" RESET << endl;
		cout << endl;
	}
	cout << endl << endl;

	cout << CYAN "[Trying to get the max values of 2 unkown types]" RESET << endl << endl;
	{
		int val1 = 10;
		int	val2 = 20;

		cout << MAGENTA "Max the values of 2 ints" RESET << endl;
		cout << "value of val1: " BLUE "<" << val1 << ">" RESET << endl;
		cout << "value of val2: " BLUE "<" << val2 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val1 and val2..." RESET << endl;
		cout << "Max value is : " BLUE "<" << max<int>(val1, val2) << ">" RESET << endl;
		cout << endl;

		float	val3 = 42.1f;
		float	val4 = 87.321f;

		cout << MAGENTA "Max the values of 2 floats" RESET << endl;
		cout << "value of val3: " BLUE "<" << val3 << ">" RESET << endl;
		cout << "value of val4: " BLUE "<" << val4 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val3 and val4..." RESET << endl;
		cout << "Max value is : " BLUE "<" << max<float>(val3, val4) << ">" RESET << endl;
		cout << endl;

		int	val5 = 'a';
		int	val6 = 'a';

		cout << MAGENTA "Max the values of 2 ints that are the same" RESET << endl;
		cout << "value of val5: " BLUE "<" << val5 << ">" RESET << endl;
		cout << "value of val6: " BLUE "<" << val6 << ">" RESET << endl;
		cout << MAGENTA "Getting the min values between val5 and val6..." RESET << endl;
		cout << "Max value is : " BLUE "<" << max<int>(val5, val6) << ">" RESET << endl;
		cout << endl;
	}
	cout << endl << endl;


	cout << CYAN "[Trying main function in pdf]" RESET << endl << endl;
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}
}
