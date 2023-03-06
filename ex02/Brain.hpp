/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:13:13 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/06 15:37:52 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& cpy);
		~Brain();
	private:
		std::string ideas[100];
};

#endif
