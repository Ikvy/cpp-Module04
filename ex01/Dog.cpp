/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:55:06 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/03 16:06:44 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Brain.hpp" 
#include "Dog.hpp"


Dog::Dog()
{
	this->setType("Dog");
	this->brain = new Brain();
	std::cout << "Dog default constructor message" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
	*this = cpy;
	std::cout << "Dog copy constructor message" << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
	this->brain = new Brain(*a.brain);
	this->setType(a.getType());
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor message" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl; 
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
