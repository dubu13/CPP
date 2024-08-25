/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:52:10 by dhasan            #+#    #+#             */
/*   Updated: 2024/08/25 14:47:42 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

void testEquippingMoreThanFourMaterias()
{
	std::cout << "\n--- Test equipping more than 4 materias ---\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	for (int i = 0; i < 5; i++) {
		AMateria* tmp = src->createMateria("ice");
		me->equip(tmp);
	}
	std::cout << std::endl;
	delete me;
	delete src;
}

void testUsingNonExistentMateria()
{
	std::cout << "\n--- Test using non-existent materia ---\n" << std::endl;
	ICharacter* bob = new Character("bob");
	ICharacter* me = new Character("me");
	me->use(4, *bob);
	std::cout << std::endl;
	delete bob;
	delete me;
}

void testUnequipping()
{
	std::cout << "\n--- Test unequipping ---\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
}

void testDeepCopyOfCharacter()
{
	std::cout << "\n--- Test deep copy of Character ---\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	Character* john = new Character("John");
	john->equip(src->createMateria("ice"));
	Character* johnCopy = new Character(*john);
	john->unequip(0);
	ICharacter* bob = new Character("bob");
	johnCopy->use(0, *bob);
	std::cout << std::endl;
	delete bob;
	delete john;
	delete johnCopy;
	delete src;
}

void testMateriaSource()
{
	std::cout << "\n--- Test MateriaSource ---\n" << std::endl;
	MateriaSource* newSrc = new MateriaSource();
	newSrc->learnMateria(new Ice());
	newSrc->learnMateria(new Cure());
	newSrc->learnMateria(new Ice());
	newSrc->learnMateria(new Cure());
	newSrc->learnMateria(new Ice()); // Should not learn this one
	std::cout << std::endl;
	delete newSrc;
}
int main()
{
	std::cout << "\n--- Basic Tests ---\n" << std::endl;

	std::cout << "\n--- Test MateriaSource ---\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n--- Testing Character Creation ---\n" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << "\n--- Testing Materia Creation ---\n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n--- Testing Materia use ---\n" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "-----------------------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	std::cout << "-----------------------------------------" << std::endl;
	// testEquippingMoreThanFourMaterias();
	// // testUsingNonExistentMateria();
	// // testUnequipping();
	// // testDeepCopyOfCharacter();
	// // testMateriaSource();
	return 0;
}