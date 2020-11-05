/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Square.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 03:58:51 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/05 06:23:32 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SQUARE_HPP
# define _SQUARE_HPP

# include "Types.hpp"
# include "ChessPiece.hpp"

class Square {
public:

    Square() : 
        position{ Vec(0, 0) },
        type{ PieceColor::NONE },
        piece{ nullptr }
    {};

    Square(Vec _pos, PieceColor color, ChessPiece *_piece) : 
        position{ _pos },
        type{ color },
        piece{ _piece }
    {};

    Vec         position;
    PieceColor  type;
    ChessPiece  *piece;
};

#endif