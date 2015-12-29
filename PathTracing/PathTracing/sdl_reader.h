// Copyright (c) 2015, Jubileus
//
// Project: Sucesso do verao
// Author: Rodrigo F. Figueiredo <rodrigo.figueiredo@gprt.ufpe.br>
// Creation date: 29/12/2015 (dd/mm/yyyy)

#ifndef SDL_READER_H
#define SDL_READER_H


#include "sdl_object.h"
#include "camera.h"
#include "light.h"
#include "quadric.h"
#include "triangular_object.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

namespace io {

class SDLReader {
  public:
    SDLReader() {};
    ~SDLReader () {};

    void ReadSDL(std::string file_path, util::SDLObject &sdl_object);

};

}  // namespace io

#endif  // SDL_READER