/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:13:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/03 15:29:18 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Dog.hpp"
#include "Cat.hpp"

void	subject_test()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
}

void leak_test()
{
	const Cat* a = new Cat();
	const Cat* b = new Cat();

	delete a;
	delete b;
}

void tab_test()
{
	int i = 0;
	int	size = 2;
	Animal *tab[size];

	////////create tab
	while (i != size)
	{
		if (i % 2)
			tab[i] = new Cat;
		else
			tab[i] = new Dog;
		std::cout << std::endl; 
		i++;
	}
	tab[i] = NULL;

	////destroy tab
	i = 0;
	while (i != size)
	{
		delete tab[i++];
		std::cout << std::endl; 
	}
	
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
	/*
	subject_test();
	std::cout << "\n\n\n\n";
	leak_test();
	std::cout << "\n\n\n\n";
	tab_test();
	std::cout << "\n\n\n\n";
	random_test();*/
	Cat basic;
	{
		Cat tmp = basic;
	}
//	system("leaks ex01"); 
	return 0;
}
