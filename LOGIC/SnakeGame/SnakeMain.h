/*
 * SnakeMain.h
 *
 *  Created on: 23. mai 2018
 *      Author: JRE
 */

#ifndef LOGIC_SNAKEGAME_SNAKEMAIN_H_
#define LOGIC_SNAKEGAME_SNAKEMAIN_H_

#include "typedefs.h"

extern void snake_init(void);
extern void snake_start(void);
extern void snake_cyclic50ms(void);
extern void snake_stop(void);
extern void snake_setSpeed(U16 speed);

/* TODO : This should be made into a general implementation for returning to the main menu. */
extern void returnToMain(void);

#endif /* LOGIC_SNAKEGAME_SNAKEMAIN_H_ */
