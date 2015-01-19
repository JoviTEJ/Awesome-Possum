/******************************************************************************/
/*!
\file   InputManager.h
\author Marcus Chua
\par    email: chua.s@digipen.edu
\par    DigiPen login:
\par    Course: GAM150
\date   14/01/2015
\brief
this header file will be the compilation of all the header files used inside the game itself
when doing so, ensure that there is a brief description of the mentioned header and any
necessary details.
*/
/******************************************************************************/
#ifndef H_INPUT_MANAGER
#define H_INPUT_MANAGER
//Definitions here
#include "HeaderIndex.h"
#include "EnumHeader.h"
struct Player_Key//Player Key for 4 players
{
	u8 Key_Boost = 0x00;
	u8 Key_Turn = 0x00;
};
class InputManager
{
private:
	//4 Player Keys [0] = Player 1 , [1] = Player 2 , [2] = Player 3 , [3] = Player 4
	Player_Key m_KeyBind[4];
	//Mouse Position for the Player 1( For Collision Purpose ) 
	AEVec2 m_MousePosition;
protected:
public:
	InputManager(void){};
	bool Initialize(void){};

	//Check Functions
	bool Return_Key_True(int p_PlayerID, PLAYER_ACTION p_ActionCheck){};
	//Function that will return the Current Mouse Position(Local to Game Space)
	AEVec2 GetMousePosition(void){};
	//Update Functions
	void Update(void){};
	void Process_Input(u8 p_key){};

	~InputManager(void){};

};
#endif