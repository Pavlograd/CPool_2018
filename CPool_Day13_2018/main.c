/*
** EPITECH PROJECT, 2018
** main
** File description:
** window
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "./include/struct.h"
#include "./include/my.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    sfRenderWindow *window = createMyWindow(800, 800);
    framebuffer_t *framebuffer = framebuffer_create(800, 800);
    sfTexture *texture = sfTexture_createFromFile(av[1], NULL);;
    sfSprite *sprite = sfSprite_create();

    while (sfRenderWindow_isOpen(window)) {
        sfSprite_setTexture(sprite, texture, sfFalse);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
    return (0);
}

sfRenderWindow *createMyWindow(unsigned int width, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,"MyWindow",
                                   sfDefaultStyle, NULL);
    return window;
}

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 4);
    framebuffer->pixels[0] = 255;
    framebuffer->pixels[1] = 0;
    framebuffer->pixels[2] = 0;
    framebuffer->pixels[3] = 255;
    return (framebuffer);
}
