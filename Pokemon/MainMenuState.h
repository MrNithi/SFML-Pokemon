#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"
#include "EditorState.h"
#include "ScoresState.h"
#include "Gui.h"

class MainMenuState :
	public State
{
private:

	// Variebles

	sf::Texture backgroundTexture;
	sf::RectangleShape background;
	sf::Font font;

	sf::Music music;

	std::map<std::string, gui::Button*> buttons;

	// Functions

	void initVariables();
	void initBackground();
	void initFonts();
	void initKeybinds();
	void initButton();

public:
	MainMenuState(StateData* state_data);
	virtual ~MainMenuState();

	// Functions

	void updateInput(const float& dt);
	void updateButtons();
	void update(const float& dt);
	void renderButtons(sf::RenderTarget& target);
	void render(sf::RenderTarget* target = NULL);
};

#endif
