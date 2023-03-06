/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:00:43 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/03 16:07:51 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Brain.hpp" 
#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << "Cat default constructor message" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
	*this = cpy;
	std::cout << "Cat copy constructor message" << std::endl;
}

Cat &Cat::operator=(const Cat& a)
{
	this->brain = new Brain(*a.brain);
	this->setType(a.getType());
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor message" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl; 
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
