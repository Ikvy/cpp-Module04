/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:54:06 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/03 15:55:02 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp" 

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& cpy);
		~Dog();
		Dog& operator=(const Dog& a);
		Brain *getBrain() const;
	private:
		void makeSound() const;
		Brain *brain;
};

# endif
