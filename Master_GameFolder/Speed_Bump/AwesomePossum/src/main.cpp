// ---------------------------------------------------------------------------
// includes
#include "HeaderIndex.h"




// ---------------------------------------------------------------------------
// Libraries
//#pragma comment (lib, "Alpha_Engine.lib")



// ---------------------------------------------------------------------------
// main

int WINAPI WinMain(HINSTANCE instanceH, HINSTANCE prevInstanceH, LPSTR command_line, int show)
{
	///////////////////////
	// Variable declaration

	int gGameRunning = 1;


	// Variable declaration end
	///////////////////////////


	/////////////////
	// Initialization

	// Using custom window procedure
	AESysInit(instanceH, show, 800, 600, 1, 60, NULL);

	//set background color 
	AEGfxSetBackgroundColor(0.0f, 0.0f, 0.0f);

	// Changing the window title
	AESysSetWindowTitle("Roppongi Dance");

	// reset the system modules
	AESysReset();

	//Initalize the Game Instance

	// Initialization end
	/////////////////////


	//////////////////////////////////
	// Creating Fonts	

	// Creating Fonts end
	//////////////////////////////////


	// Game Loop
	while (gGameRunning)
	{
		// Informing the system about the loop's start
		AESysFrameStart();

		// Handling Input
		AEInputUpdate();

		///////////////////
		// Game loop update

		// Game loop update end
		///////////////////////



		// Informing the system about the loop's end
		AESysFrameEnd();

		// check if forcing the application to quit
		if (AEInputCheckTriggered(AEVK_ESCAPE) || 0 == AESysDoesWindowExist())
			gGameRunning = 0;
	}
	

	// free the system
	AESysExit();
}