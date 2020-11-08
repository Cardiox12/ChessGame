/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessPiece.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 04:00:26 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 05:25:28 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSPIECE_HPP
# define _CHESSPIECE_HPP

# include <vector>
# include <string>
# include "Square.hpp"
# include "ChessBoard.hpp"
# include "PieceColor.hpp"
# include "Definitions.hpp"
# include "ChessNotation.hpp"

class Square;
class Chessboard;

class ChessPiece {

public:

    ChessPiece();

    void
    updateAuthorizedMoves() const;

    void
    move(Square *new_pos) const;

    ChessNotation
    getNotation() const;

private:
    Chessboard              *_chessboard;
    Square                  *_position;
    std::vector<Square*>    _authorizedMoves;
    PieceColor              _color;
    std::string             _name;
    ChessNotation           _notation;
    int                     _value;
};

#endif