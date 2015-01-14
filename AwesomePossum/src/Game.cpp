#include "header_compilation.h"

Game::Game()
{
	//Set the Game State to Splash(for States)/debugging = main
	m_currGameState = GAME_STATE::GAME;//Currently set the game to level
	return;
}

bool Game::Initalize()
{
	//Initalize Objects here
	//m_isRunning = true;
	return true;
}
void Game::Render()
{
	//Object Rendering
}
void Game::Update()
{
	//Updates the Game loop which is called in main.
	//====================INPUT MANAGER START=======================================
	//====================INPUT MANAGER END  =======================================

	//====================LOGIC MANAGER START=======================================
	//====================LOGIC MANAGER END  =======================================

	//====================PHYSICS MANAGER START=====================================
	//====================PHYSICS MANAGER END  =====================================

	//====================COLLISION MANAGER START===================================
	//====================COLLISION MANAGER END  ===================================

	//====================RENDER MANAGER START======================================
	Render();
	//====================RENDER MANAGER END  ======================================
}