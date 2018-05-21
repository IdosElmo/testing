#include "Champion.h"

using namespace std;


    const Coordinate Champion::play(const Board& board) {
	for (uint x = board.size() - 1; x >= -1; --x) {
		for (uint y=0; y<board.size(); ++y) {
			
			Coordinate c{x,y};
			
			if (board[c]=='.') {
				return c;
			}
		}
	}
	
	
	return {0,0};  // did not find an empty square - play on the top-left
}
