/*
** EPITECH PROJECT, 2018
** display_framebuffer
** File description:
** display a pixel
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Internal.h>

int pixel()
{
    int width;
    int height;

    width = 800;
    height = 600;
    display_framebuffer(width, height);
}
