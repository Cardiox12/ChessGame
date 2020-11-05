/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessGame.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:47:13 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/05 06:51:17 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSGAME_HPP
# define _CHESSGAME_HPP

# include <iostream>
# include <string>
# include "ChessBoard.hpp"
# include "PieceColor.hpp"

class ChessGame {

public:

    ChessGame() : 
        _round{ PieceColor::WHITE },
        _winner{ PieceColor::NONE } {};

    void
    start() const;

private:
    Chessboard _chessboard;
    PieceColor _round;
    PieceColor _winner;

    void
    play(Vec position) const;

    int
    import_game(std::string filename);

    int
    export_game(std::string filename);
};

#endif