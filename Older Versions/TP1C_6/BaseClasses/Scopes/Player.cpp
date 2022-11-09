#include "../Header/Player.h"
#include "../../GenaralFiles/Header/globalParameters.h"
#include <stdio.h>

Player::Player() : MovableEntity(), Ballistic()
{
    this->setMax(20,25);
    this->setMin(-20,-30);
    this->setVelocity(1,1);
    this->setAngularSpeed(0);
    this->setAngle(37);
    this->setOnScreen(GL_TRUE);
    this->setDisplayListModel(aviaoDisplayList);
}

Player::Player(
    const int& displayListModel, const OrderedPair& max, const OrderedPair& min,const double& resize, const OrderedPair& velocity, const double& angle, 
const double& angularSpeed, const double& hp, const int& moveType, const int& angularMoveType, const double& alteredFireRate, 
const Projectile& currentProjectile, const int& numberOfShots, const GLboolean& shield) 
: 

MovableEntity(displayListModel, max, min, resize, velocity, angle, angularSpeed, hp, 
moveType, angularMoveType), 

Ballistic(alteredFireRate, currentProjectile, numberOfShots)
{
    this->setShield(shield);
}

Projectile& Player::fire(){
    Projectile* aux = new Projectile;
    aux->setOwner(1);

    printf("Fire do player\n");

    return *aux;
}