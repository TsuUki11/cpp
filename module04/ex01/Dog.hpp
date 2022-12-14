/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:24:28 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/23 18:51:28 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	Brain *brain;
	public :
		Dog();
		Dog(const Dog&);
		Dog& operator = (const Dog&);
		~Dog();
		void	makeSound(void) const;
		void	edit_brain(std::string, int);
		Brain*	get_brain();
		void	set_brain(Brain*);
};

#endif