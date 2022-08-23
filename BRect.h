#pragma once
class BRect
{
private:

	float mW;
	float mH;
	float mArea;

public:

	BRect(void);
	BRect(float cx, float cy);
	
	float getWidth(void);
	float getHeight(void);
	float getArea(void);

//protected:
	
	void setWidth(float cx);
	void setHeight(float cy); 

};

