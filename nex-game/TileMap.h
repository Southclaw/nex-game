#pragma once
#include "stdafx.h"

#include "Game.h"
#include "Tile.h"

class SpriteManager;
class EntityManager;

class TileMap
{
public:
	TileMap(); // empty constructor does nothing
	TileMap(EntityManager* em, SpriteManager * sf);
	TileMap(Tile* tiles[20 * 15]);

	void getTiles(Tile* tiles[]);
	Tile* getTile(int index);
	void setTile(int index, Tile* tile);

protected:
	Tile* tileList[20 * 15];

	friend class Screen;
};