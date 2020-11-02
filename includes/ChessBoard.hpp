/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessBoard.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 03:56:41 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/02 04:23:46 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHESSBOARD_HPP
# define _CHESSBOARD_HPP

# include <array>
# include "Definitions.hpp"
# include "Square.hpp"

class Chessboard {
    
public:
    void
    show();

    void
    reset();

private:
    std::array<Square, CHESSBOARD_SIZE> _chessboard;
};

#endif