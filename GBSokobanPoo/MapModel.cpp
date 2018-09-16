// author: chris-scientist
// created at: 08/08/2018
// updated at: 08/09/2018

#include "MapModel.h"

MapModel::MapModel() {
  initPlayerPositions();
}

// Initialiser la position du joueur
void MapModel::initPlayerPositions() {
  if(playerPositions[0] == -1 && playerPositions[1] == -1) {
    // on initialise la position que si elle ne l'ai pas déjà
    for(int y=0 ; y < HEIGHT_MAP ; y++) {
      for(int x=0 ; x < WIDTH_MAP; x++) {
        if(mapOfGame[y][x] == TypeOfSprites::PLAYER_TYPE) {
          playerPositions[0] = x;
          playerPositions[1] = y;
        }
      }
    }
  }
}

// Récupérer la positions du joueur
const int* MapModel::getPlayerPositions() const {
  return playerPositions;
}

// Récupérer le type de sprites en fonction de coordonnées X, Y
const char MapModel::getTypeOfSprites(const int aXSprites, const int aYSprites) {
  return mapOfGame[aYSprites][aXSprites];
}

