#ifndef _PLAYER_H
#define _PLAYER_H

#include "MovableEntity.h"
#include "Ballistic.h"
#include "Score.h"

class Player: public MovableEntity, public Ballistic
{
    private:
        int imortality; // permite que player colida com 1 shot e não perca vida
        Score scoreHp;

    public:
        Player();

        void setHp(const double& hp);

        int getImortality(){return imortality;}
        void setImortality(const int& imortality){this->imortality = imortality;}

        Score& getScoreHp(){return this->scoreHp;}
        void setSoreHp(const Score& scoreHp){this->scoreHp = scoreHp;}

        void move() override; // movimentação padrão da entidade
        void scaleMove(const double& scale) override;

        std::vector<Projectile> fire() override;
        Projectile createProject(Projectile* auxP, double angle);
        //Projectile createProject(double xPlus, double yPlus, int xVel, int yVel, Projectile* auxP);

        void deathMove();
        void upgradeManager(int upgradeType);
        void damage();

};

#endif