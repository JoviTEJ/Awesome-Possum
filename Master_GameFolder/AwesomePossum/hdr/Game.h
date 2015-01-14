//========================================ENUMERATORS=========================================
enum GAME_STATE
{
	SPLASH,	//Splash Screen
	MAIN,	//Main Menu
	GAME,	//Game State(where the game is played-> may run into level enums)
	CREDITS,//Credits Page
	QUIT	//Quits the game, frees and unload stuff
};
//========================================GAME.H==============================================
class Game
{
private: 
	GAME_STATE m_currGameState;
	Game *instance = nullptr;	//Instance of the game, not to have more than one at a time
protected:
public:
	Game();
	bool Initalize();
	void Update();
	void Render();
};