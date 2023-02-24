/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:14:15 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/24 09:16:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Animal
{
	Animal();
	Animal(const Animal& cpy);
	void operator=(const Animal& a);
	~Animal;
	private
		std::string name;
}
