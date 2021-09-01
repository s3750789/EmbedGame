/*
 * global.h
 *
 *  Created on: Sep 1, 2021
 *      Author: makli
 */

#ifndef SRC_GLOBAL_H_
#define SRC_GLOBAL_H_

int WIDTH_SIZE = 640;
int HEIGHT_SIZE = 480;

int cell_coor[48][2] = {}; 			//First number is number of cells, second number is coordinator
int cell_stat[48][4] = {
	{1,1,0,1},	//0
	{0,1,0,0},	//1
	{0,1,0,0},	//2
	{0,1,0,0},	//3
	{0,1,0,1},	//4
	{0,1,0,0},	//5
	{0,1,0,1},	//6
	{0,1,0,1},	//7		=>end of row 1
};
//First: left; Second : up; Third: right; Fourth: bottom

#endif /* SRC_GLOBAL_H_ */
