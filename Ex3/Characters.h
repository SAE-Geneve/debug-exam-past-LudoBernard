//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

class Hero;

class Character
{
public:
	Character(int health, int attack, int defense, int strength);
	void takeDamage(int damage);
	bool isAlive() const;
	virtual void death() = 0;

	int getDefense() const;
	int getAttack() const;
	int getHealth() const;
	
protected:
	int health;
	int attack;
	int defense;
	int strength;
};

class Monster : public Character
{

public:
	Monster(int, int, int, int);
	void fight(Hero* hero);
	void death() override;
};

class Hero : public Character
{
public:
	Hero(int, int, int, int);
	void fight(Monster* monster);
	void death() override;
};
