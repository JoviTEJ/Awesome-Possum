/******************************************************************************/
/*!
\file   Game.h
\author Marcus Chua
\par    email: chua.s@digipen.edu
\par    DigiPen login:
\par    Course: GAM150
\date   14/01/2015
\brief
This is the game class which will instantiate upon the application starting.
Class will manage the several different managers required for the operation of
the game.
*/
/******************************************************************************/
#ifndef H_SYSTEM_GAME
#define H_SYSTEM_GAME
#include "EnumHeader.h"
//========================================GAME.H==============================================
class Game
{
private: 
	GAME_STATE m_currGameState;
	Game *instance = nullptr;	//Instance of the game, not to have more than one at a time
protected:
public:
	Game(void);
	GAME_STATE GetGameState(void);
	bool Initalize(void);
	void Update(void);
	~Game(void);
};
#endif