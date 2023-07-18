#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>

/**
 * main - print _putchat followed by a new line
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
