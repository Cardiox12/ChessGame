/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessGame.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:47:13 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/02 03:48:25 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSGAME_HPP
# define _CHESSGAME_HPP

#include <iostream>
#include <string>
#include "PieceColor.hpp"

typedef std::pair<int, int> t_pos;

class ChessGame {

public:

    ChessGame() : 
        _round{ PieceColor::WHITE },
        _winner{ PieceColor::NONE } {};

    ~ChessGame();

    void
    start() const;

private:
    Chessboard _chessboard;
    PieceColor _round;
    PieceColor _winner;

    void
    play(t_pos position) const;

    int
    import_game(std::string filename);

    int
    export_game(std::string filename);
};

#endif