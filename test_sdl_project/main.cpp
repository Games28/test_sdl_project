#include <iostream>
#include <SDL.h>


int main(int argc, char* argv[])
{
	if(SDL_Init(SDL_INIT_EVERYTHING))
	{ 
		std::cout << "failed" << std::endl;
	}

	return 0;
}