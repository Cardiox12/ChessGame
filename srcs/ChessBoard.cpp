/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessBoard.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 06:25:38 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/05 07:15:55 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ChessBoard.hpp"
#include "PieceColor.hpp"

Chessboard::Chessboard()
{
    size_t index;
    size_t files = 2;

    for (size_t y{ 0 } ; y < files ; y++){
        for (size_t x{ 0 } ; x < RANK_SIZE ; x++){
            index = y * RANK_SIZE + x;
            _chessboard[index] = Square(
                Vec(),
                PieceColor::BLACK,
                nullptr
            );
        }
    }

    for (size_t y{ FILE_SIZE - files } ; y < FILE_SIZE ; y++){
        for (size_t x{ 0 } ; x < RANK_SIZE ; x++){
            index = y * RANK_SIZE + x;
            _chessboard[index] = Square(
                Vec(),
                PieceColor::WHITE,
                nullptr
            );
        }
    }
}

void
Chessboard::show() const
{
    for (size_t y{ 0 } ; y < FILE_SIZE ; y++){
        for (size_t x{ 0 } ; x < RANK_SIZE ; x++){
            size_t index = y * RANK_SIZE + x;
            char square;
            char space = ' ';

            if (_chessboard[index].piece != nullptr){
                square = _chessboard[index].piece->getNotation();
            }

            if (x == RANK_SIZE - 1)
                space = '\0';
            switch (_chessboard[index].type)
            {
                case PieceColor::NONE:
                    square = 'o';
                    break;
                case PieceColor::BLACK:
                    square = 'b';
                    break;
                case PieceColor::WHITE:
                    square = 'w';
                    break;
            }

            std::cout << square << space;
        }
        std::cout << std::endl;
    }
}