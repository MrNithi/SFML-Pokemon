#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player :
	public Entity
{
private:

	// Variables

	// Initializer functions

	void initVariables();
	void initComponents();

public:
	Player(float x, float y, sf::Texture& texture_sheet);
	virtual ~Player();

	// Functions

	void updateAnimation(const float& dt);
	void updateSoundEffect(const float& dt);
	void update(const float& dt);

	void render(sf::RenderTarget& target);
};

#endif