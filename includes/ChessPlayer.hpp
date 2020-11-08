/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessPlayer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 04:45:26 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 05:40:09 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESS_PLAYER_CPP
# define _CHESS_PLAYER_CPP

# include <vector>
# include "ChessPiece.hpp"
# include "PieceColor.hpp"

class ChessPlayer {
    typedef std::vector<ChessPiece> ChessPieces;

public:
    ChessPlayer();
    ChessPlayer(Chessboard *chessboard, PieceColor color, std::string name);

    void
    move(std::string movement) const;

    void
    attack(ChessPlayer player) const;

    void
    setName(std::string name);

    void
    resign() const;

private:
    Chessboard  *_chessboard;
    PieceColor  _color;
    ChessPieces _pieces;
    std::string _name;

};

#endif