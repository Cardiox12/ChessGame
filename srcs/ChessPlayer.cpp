/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessPlayer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 05:22:25 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 05:40:41 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChessPlayer.hpp"

ChessPlayer::ChessPlayer(Chessboard *chessboard, PieceColor color, std::string name)
{
    _chessboard = chessboard;
    _color = color;
    _name = name;
}

ChessPlayer::ChessPlayer()
{
    _chessboard = nullptr;
    _color = PieceColor::NONE;
    _name = "";
}

void
ChessPlayer::setName(std::string name)
{
    _name = name;
}