/******************************************************************************/ 
/*! 
\file   Game.cpp
\author Marcus Chua
\par    email: chua.s@digipen.edu
\par    DigiPen login:  
\par    Course: GAM150
\date   14/01/2015 
\brief     
Provides the definition for the Game Class in Game.h
*/ 
/******************************************************************************/
//Header files
#include "HeaderIndex.h"

/******************************************************************************/ 
/*!
\fn Game::Game()
\brief      
default Contstructor for the Game Instance, will only set the game state to 
its initial value
\param void  
no arguement taken        
\return 
no return value
*/
/******************************************************************************/
Game::Game()
{
	//Set the Game State to Splash(for States)/debugging = main
	m_currGameState = GAME_STATE::GAME;//Currently set the game to level
	return;
}
/******************************************************************************/
/*!
\fn bool Game::Initalize()
\brief
Will initalize the variables of the game; Includes objects like managers
\param void
no arguement taken
\return
returns true on successful initalization and false otherwise
*/
/******************************************************************************/
bool Game::Initalize()
{
	//Initalize Objects here
	return true;
}
/******************************************************************************/
/*!
\fn void Game::Update()
\brief
Function will call the different managers to update their respective 
operations
\param void
no arguement taken
\return
no return value
*/
/******************************************************************************/
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
	//====================RENDER MANAGER END  ======================================
	return;
}
/******************************************************************************/
/*!
\fn ~Game::Game()
\brief
Class Destructor , deletes the game instance and other running pointers
operations
\param void
no arguement taken
\return
no return value
*/
/******************************************************************************/
Game::~Game(void)
{
	if (instance)//if there is a game instance
	delete instance; instance = nullptr;//delete the instance and point to nothing

	return;
}