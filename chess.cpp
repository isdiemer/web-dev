#include <iostream>
#define WHITE true
#define BLACK false
using namespace std;

class chess {
public:
  uint64_t whitePawn;
  uint64_t whiteRook;
  uint64_t whiteKnight;
  uint64_t whiteBishop;
  uint64_t whiteRooks;
  uint64_t whiteQueen;
  uint64_t whiteKing;
  uint64_t blackPawn;
  uint64_t blackRook;
  uint64_t blackKnight;
  uint64_t blackBishop;
  uint64_t blackRooks;
  uint64_t blackQueen;
  uint64_t blackKing;
  bool whiteQueenCastle;
  bool whiteKingCastle;
  bool blackQueenCastle;
  bool blackKingCastle;

public:
  chess()
      : whiteQueenCastle(false), whiteKingCastle(false),
        blackQueenCastle(false), blackKingCastle(false) {
    // white pieces
    whitePawn =
        0b0000000000000000000000000000000000000000000000001111111100000000;
    whiteRook =
        0b0000000000000000000000000000000000000000000000000000000010000001;
    whiteKnight =
        0b0000000000000000000000000000000000000000000000000000000001000010;
    whiteBishop =
        0b0000000000000000000000000000000000000000000000000000000000100100;
    whiteKing =
        0b0000000000000000000000000000000000000000000000000000000000010000;
    whiteQueen =
        0b0000000000000000000000000000000000000000000000000000000000001000;
    // black pieces
    blackPawn =
        0b0000000011111111000000000000000000000000000000000000000000000000;
    blackRook =
        0b1000000100000000000000000000000000000000000000000000000000000000;
    blackKnight =
        0b0100001000000000000000000000000000000000000000000000000000000000;
    blackBishop =
        0b0010010000000000000000000000000000000000000000000000000000000000;
    blackQueen =
        0b0001000000000000000000000000000000000000000000000000000000000000;
    blackKing =
        0b0000100000000000000000000000000000000000000000000000000000000000;
  }
  static void printBitboard(uint64_t bitboard) {
    bitset<64> bits(bitboard);
    for (int i = 7; i >= 0; --i) {
      for (int j = 0; j < 8; ++j) {
        cout << bits[i * 8 + j] << " ";
      }
      cout << endl;
    }
    cout << endl;
  };
};

int main() {
  chess c;
  c.printBitboard(c.blackPawn);
}
