/*
 *   
 *   Ophcrack is a Lanmanager/NTLM hash cracker based on the faster time-memory
 *   trade-off using rainbow tables. 
 *   
 *   Created with the help of: Maxime Mueller, Luca Wullschleger, Claude
 *   Hochreutiner, Andreas Huber and Etienne Dysli.
 *   
 *   Copyright (c) 2013 Philippe Oechslin, Cedric Tissieres, 
 *                      Bertrand Mesot, Pierre Lestringant
 *   
 *   Ophcrack is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *   
 *   Ophcrack is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   
 *   You should have received a copy of the GNU General Public License
 *   along with Ophcrack; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *   
 *   This program is released under the GPL with the additional exemption 
 *   that compiling, linking, and/or using OpenSSL is allowed.
 *   
 *   
 *   
 *   
*/

#include <stdlib.h>

#include "proba_info.h"

proba_info* proba_info_alloc(void){
  proba_info* proba = (proba_info*)malloc(sizeof(proba_info));
  proba->mtype      = 0;
  proba->nbByteM0   = 0;
  proba->nbByteM    = 0;
  proba->nbByteBin  = 0;
  proba->nbBitIndex = 0;
  proba->power2     = 0;
  proba->array      = (patternArray*)malloc(sizeof(patternArray));
  proba->mis        = 0;
  proba->mdpw       = (markovDynProgWrapper*)malloc(sizeof(markovDynProgWrapper));

  return proba;
}
/*-------------------------------------------------------------------------*/
void proba_info_free(proba_info *proba){
  free(proba->array);
  free(proba->mdpw);
  free(proba);
}
/*-------------------------------------------------------------------------*/
