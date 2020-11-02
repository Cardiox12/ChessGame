/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessPiece.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 04:00:26 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/02 04:21:59 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSPIECE_HPP
# define _CHESSPIECE_HPP

# include <vector>
# include <string>
# include "PieceColor.hpp"
# include "Definitions.hpp"
# include "Square.hpp"
# include "ChessNotation.hpp"

class ChessPiece {

public:

    ChessPiece::ChessPiece();
    ~ChessPiece::ChessPiece();

    void
    updateAuthorizedMoves() const;

    void
    move(Square *new_pos) const;

private:
    std::vector<int>    _authorizedMove;
    Square              *_position;
    PieceColor          _color;
    std::string         _name;
    ChessNotation       _notation;
    int                 _value;
};

#endif