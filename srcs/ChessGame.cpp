/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessGame.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 03:49:39 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/08 08:07:27 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChessGame.hpp"

void
ChessGame::start()
{
    int opt;
    // Init phase
    choseNames();
    choseColor();

    // Game phase
    while (_status == GameStatus::ACTIVE && opt != 1){
        CLEAR_CONSOLE();
        _chessboard.show();
        opt = choseOption();


        // Chose options
        // 1) Quit
        // 2) Play
    }
}

int
ChessGame::choseOption()
{
    int opt;

    std::cout << "Choose option : " << std::endl;
    std::cout << "\t" << "1) Quit" << std::endl;
    std::cout << "\t" << "2) Play" << std::endl;
    std::cout << "ChessGame: ";
    std::cin >> opt;
    std::cout << std::endl;

    return (opt);
}

void
ChessGame::choseNames()
{
    std::string white_name;
    std::string black_name;

    std::cout << "Set name for player : " << std::endl;
    std::cout << "\t" << "White : ";
    std::cin >> white_name;
    std::cout << "\t" << "Black : ";
    std::cin >> black_name;
    std::cout << std::endl;
}

void
ChessGame::choseColor()
{
    int chose;

    std::cout << "Choose your color : " << std::endl;
    std::cout << "\t" << "1) White" << std::endl;
    std::cout << "\t" << "2) Black" << std::endl;
    std::cout << "ChessGame: ";
    std::cin >> chose;
    std::cout << std::endl;
    
    switch (chose)
    {
        case PieceColor::WHITE:
            setRound(&_white);
            break;
        case PieceColor::BLACK:
            setRound(&_black);
            break;
        default:
            break;
    }
}

void
ChessGame::setWinner(ChessPlayer *player)
{
    _winner = player;
}

void
ChessGame::setRound(ChessPlayer *player)
{
    _round = player;
}