#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int wht, blk;

	for (wht = 0; a[wht][7]; wht++)
	{
		for (blk = 0; blk < 8; blk++)
			_putchar(a[wht][blk]);

		_putchar('\n');
	}
}
