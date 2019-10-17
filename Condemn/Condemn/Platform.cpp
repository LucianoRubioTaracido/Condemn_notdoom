#include "Platform.h"
#include<iostream>
#include "GameState.h"

Platform::Platform(std::string name)
{
	width = 640;
	height = 480;
}

void Platform::RenderClear()
{
}

void Platform::RenderPresent()
{
}

Platform::~Platform()
{
}

void Platform::CheckEvent(GameState* obj, bool (GameState::* f)(int))
{

}