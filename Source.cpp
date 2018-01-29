#include <iostream>
#include <allegro5\allegro5.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>

using namespace std;

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_TIMER *timer = NULL;


	int input;
	cout << "falg2" << endl;
	cout << "what is your age you inferior specimen of god if he exists" << endl;
	cin >> input;

	al_init();

	al_init_font_addon();

	al_init_ttf_addon();
	ALLEGRO_FONT *font1 = al_load_font("Minecrafter.ttf",42,0);
	display = al_create_display(730,580);

	cout << "flag" << endl;

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	cout << "flag3";


	al_draw_textf(font1, al_map_rgb(255, 0, 255), 730 / 2, (580 / 5), ALLEGRO_ALIGN_CENTRE, "Happy %d Birthday! ", input);

	al_flip_display();

	al_rest(10);

cout << "flag4";
	al_destroy_display(display);

	al_destroy_font(font1);
	


	return 0;
}