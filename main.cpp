#include"iostream"
#include "SeaAnimal.h"
#include "JellyFish.h"
#include "Dolphin.h"


int main() {
	//作成
	SeaAnimal* seaAnimal[2];

	seaAnimal[0] = new JellyFish();
	seaAnimal[1] = new Dolphin();

	//Print関数呼び出し
	seaAnimal[0]->Print();
	seaAnimal[1]->Print();

	//削除
	delete seaAnimal[0];
	delete seaAnimal[1];

	return 0;
}
