// Projekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>

const int WIN_SIZE_X = 640;
const int WIN_SIZE_Y = 480;
double x = 200;
double y = 200;
bool lmt;



class GameWindow : public Gosu::Window {
public:
	Gosu::Image bild;
	GameWindow()
		: Window(WIN_SIZE_X, WIN_SIZE_Y)
		, bild("rocket.png")
	{
		set_caption("Willst du ein Spiel spielen?");
	}
	void update() override {
		x = input().mouse_x();
		y = input().mouse_y();
		lmt = input().down(Gosu::MS_LEFT);
	}
	void draw() override {
		bild.draw_rot(x, y, 0.0,
			0.0, 
			0.5, 0.5 ,0.1, 0.1
		);
	}
};

int main()
{
GameWindow window;
window.show();
system("pause");
return 0;
}


