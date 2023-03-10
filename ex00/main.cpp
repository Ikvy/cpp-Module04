/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:13:23 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/27 09:58:51 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Wrong.hpp" 
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

void	wrong_tests()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete i;

}

int main()
{
	subject_test();
	std::cout << "\n\n\n\n";
	wrong_tests();
	return 0;
}
