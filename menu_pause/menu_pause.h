#ifndef MENU_H_
#define MENU_H_

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "../source/my_runner.h"

typedef struct texture_menu_t texture_menu_t;
struct texture_menu_t {
	sfTexture *texture_menu_background;
	sfFont *chinese_text_play;
	sfFont *chinese_text_quit;
};

typedef struct sprite_menu_t sprite_menu_t;
struct sprite_menu_t {
	sfSprite *sprite_menu_background;
	sfVector2f position_play;
	sfVector2f position_quit;
	sfVector2f position_infinite;
	sfVector2i position_mouse;
	sfIntRect rectangle_play;
	sfIntRect rectangle_quit;	
	sfIntRect rectangle_infinite;
	sfText *play;
	sfText *quit;
	sfText *infinite;
	int test;
	int check_play;	
	int check_infinite;
};

void check_mouse_upper(sprite_menu_t *sprite_menu);
void check_mouse_lower(sprite_menu_t *sprite_menu);
void check_mouse_infinite(sprite_menu_t *sprite_menu);
int menu_pause(void);
void set_sprite_menu(sprite_menu_t *sprite_menu);
void set_texture_menu(texture_menu_t *texture_menu,
		      sprite_menu_t *sprite_menu);
void put_text_menu(texture_menu_t *texture_menu,
		   sprite_menu_t *sprite_menu);
int initialisation_texture_text_menu(texture_menu_t *texture_menu);
void initialisation_position_menu_pause(sprite_menu_t *sprite_menu);
void to_draw_menu(sprite_menu_t *sprite_menu,
		  window_t *window);
void set_text_menu(sprite_menu_t *sprite_menu);
int set_menu_pause(sprite_menu_t *sprite_menu);
int initialisation_menu_pause(sprite_menu_t *sprite_menu,
			      texture_menu_t *texture_menu);

#endif /* MENU_H */
