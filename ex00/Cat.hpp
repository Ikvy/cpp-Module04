/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:59:11 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 09:31:42 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp" 

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& cpy);
		~Cat();
		Cat& operator=(const Cat& a);
		void makeSound() const;
};

#endif
