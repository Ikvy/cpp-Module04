/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:45:51 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:30:48 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "bebou";
	std::cout << "Animal default constructor message" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	*this = cpy;
	std::cout << "Animal copy constructor message" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor message" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	this->type = a.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(const std::string& type)
{
	this->type =type;
}

void Animal::makeSound() const
{
	std::cout << "Weird animal sound" << std::endl; 
}
