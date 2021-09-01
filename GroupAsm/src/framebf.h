/*
 * framebf.h
 *
 *  Created on: Aug 4, 2021
 *      Author: makli
 */

#ifndef SRC_FRAMEBF_H_
#define SRC_FRAMEBF_H_

// ----------------------------------- framebf.h -------------------------------------
void framebf_init();
void drawPixelARGB32(int x, int y, unsigned int attr);
void drawRectARGB32(int x1, int y1, int x2, int y2, unsigned int attr, int fill);



#endif /* SRC_FRAMEBF_H_ */
