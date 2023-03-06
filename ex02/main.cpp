/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:13:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/03 16:10:02 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Dog.hpp"
#include "Cat.hpp"

void leak_test()
{
	const Cat* a = new Cat();
	const Cat* b = new Cat();

	delete a;
	delete b;
}

void random_test()
{
	Cat a;
	Cat b;

	a = b;
	std::cout << &a << std::endl; 
	std::cout << &b << std::endl; 
}

int main()
{
	leak_test();
	std::cout << "\n\n\n\n";
	random_test();
	std::cout << "\n\n\n\n";
	Dog tmp;
	{
		Dog tmp2 = tmp;
	}
//	system("leaks ex02"); 
	return 0;
}
