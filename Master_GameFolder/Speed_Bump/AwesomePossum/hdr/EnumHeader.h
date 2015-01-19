/******************************************************************************/
/*!
\file   EnumHeader.h
\author Marcus Chua
\par    email: chua.s@digipen.edu
\par    DigiPen login:
\par    Course: GAM150
\date   14/01/2015
\brief
this header file will be the compilation of all the enumerators used inside the game itself
when doing so, ensure that there is a brief description of the mentioned header and any
necessary details.
*/
/******************************************************************************/
#ifndef H_ENUM_HEADER
#define H_ENUM_HEADER
//GAME_STATE :Enum that handles the game state of the game
enum GAME_STATE
{
	SPLASH,	//Splash Screen
	MAIN,	//Main Menu
	GAME,	//Game State(where the game is played-> may run into level enums)
	CREDITS,//Credits Page
	QUIT	//Quits the game, frees and unload stuff
};
//PLAYER_ACTION: Enum that handles the 2 different action
enum PLAYER_ACTION
{
	ACT_USE,	//Key for Charging / using of Items
	ACT_TURN,	//Key for Turning Right
};
#endif