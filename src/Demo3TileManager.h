#pragma once

#include "TileManager.h"

class Demo3TileManager :
	public TileManager
{
public:
	Demo3TileManager(void);
	~Demo3TileManager(void);

	// Draw a tile at a location on the screen determined by the tile
	// position and the base X and Y co-ordinates
	// OVERRIDE THIS TO DRAW YOUR TILE!!!
	// Draw a tile
	virtual void DrawTileAt( 
		BaseEngine* pEngine, 
		SDL_Surface* pSurface, 
		int iMapX, int iMapY,
		int iStartPositionScreenX, int iStartPositionScreenY ) const;
};
