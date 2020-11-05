/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChessPiece.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:01:31 by bbellavi          #+#    #+#             */
/*   Updated: 2020/11/05 07:03:27 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ChessPiece.hpp"

ChessNotation
ChessPiece::getNotation() const
{
    return (_notation);
}