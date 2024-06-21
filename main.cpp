#include"iostream"
#include "SeaAnimal.h"
#include "JellyFish.h"
#include "Dolphin.h"


int main() {
	SeaAnimal* seaAnimal[2];

	seaAnimal[0] = new JellyFish();
	seaAnimal[1] = new Dolphin();

	
	seaAnimal[0]->Print();
	seaAnimal[1]->Print();

	delete seaAnimal[0];
	delete seaAnimal[1];

	return 0;
}
