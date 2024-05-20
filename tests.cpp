#include <gtest/gtest.h>
#include "Chess.cpp" 
using namespace ChessExample;

TEST(PositionTest, ConstructorAndGetters) {
    Position pos(3, 4);
    EXPECT_EQ(pos.getX(), 3);
    EXPECT_EQ(pos.getY(), 4);
}


TEST(ChessPieceTest, MoveValidation) {
    ChessPiece piece;
    Position validPos(5, 5);
    Position invalidPos(10, 10); 
    EXPECT_NO_THROW(piece.move(validPos)); 
    EXPECT_THROW(piece.move(invalidPos), std::invalid_argument); 
}

TEST(BoardTest, EnqueueAndPlay) {
    std::shared_ptr<ChessPiece> piece = std::make_shared<ChessPiece>();
    Board board;
    Position startPos(2, 2);
    Position endPos(4, 4);
    std::shared_ptr<Move> move = std::make_shared<SimpleMove>(piece, endPos);
    
    board.enqueue(move);
    board.play();
    
    EXPECT_EQ(piece->getCurrentPosition().getX(), 4);
    EXPECT_EQ(piece->getCurrentPosition().getY(), 4);
}
