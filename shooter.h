#ifndef SHOOTER_H
#define SHOOTER_H

#include <QImage>
#include <QRect>

class Shooter
{

public:
    Shooter();
    ~Shooter();

public:
    void resetState();//spawn location

	void autoMove();	//handles automatic movement
    void setXDir(int); //handles whether object moves right or left
    void setYDir(int); //handles whether object moves up or down
    int getXDir(); //gets value
    int getYDir(); //gets value

    void moveBottom(int);
    void moveTop(int);
    QRect getRect();
    QImage & getImage();

  //private:
    QImage image;
    QRect rect;
int xdir,ydir;

};

#endif

