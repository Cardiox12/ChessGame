/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessGame.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 03:49:39 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 04:44:11 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChessGame.hpp"

void
ChessGame::start() const
{
    // Init phase
    //      Set player color
    // Game phase
    while (_winner){
        _chessboard.show();
        // Choose 
    }
}

void
ChessGame::setWinner(PieceColor winner)
{
    _winner = winner;
}