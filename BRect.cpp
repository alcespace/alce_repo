#include "BRect.h"

BRect::BRect(void)
{
	mW = 1.0;
	mH = 1.0;
	mArea = 1.0;

}

BRect::BRect(float cx, float cy)
{
	mW = cx;
	mH = cy;
	mArea = (mW * mH);
}

float BRect::getWidth(void)
{
	return(mW);
}

float BRect::getHeight(void)
{
	return(mH);
}

float BRect::getArea(void)
{
	return(mArea);
}

void BRect::setWidth(float cx)
{
	mW = cx;

	mArea = (mW * mH);
}

void BRect::setHeight(float cy)
{
	mH = cy;

	mArea = (mW * mH); 
}



