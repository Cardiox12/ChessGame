/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessGame.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:47:13 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 08:07:07 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSGAME_HPP
# define _CHESSGAME_HPP

# include <iostream>
# include <string>
# include "ChessPlayer.hpp"
# include "ChessBoard.hpp"
# include "PieceColor.hpp"
# include "Game/GameStatus.hpp"

# define CLEAR_CONSOLE() (system("clear"))

class ChessGame {

public:
    ChessGame() : 
        _winner{ nullptr },
        _round{ nullptr },
        _status{ GameStatus::ACTIVE }
    {};

    void
    start();

    int
    import_game(std::string filename);

    int
    export_game(std::string filename);
    
private:
    GameStatus  _status;
    ChessPlayer _black;
    ChessPlayer _white;

    Chessboard _chessboard;
    
    ChessPlayer *_winner;
    ChessPlayer *_round;

    void
    setWinner(ChessPlayer *player);

    void
    setRound(ChessPlayer *player);

    void
    choseNames();

    void
    choseColor();

    int
    choseOption();

    void
    quit();

};

#endif