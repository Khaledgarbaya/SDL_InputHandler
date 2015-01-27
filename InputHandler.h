//
//  InputHandler.h
//
//  Copyright (c) 2015 Khaled Garbaya
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#ifndef __SDL_Game_SpriteSheet__InputHandler__
#define __SDL_Game_SpriteSheet__InputHandler__
#include "Vector2D.h"
#include <stdio.h>
#include <vector>
#include <SDL2/SDL.h>
enum mouse_buttons
{
    LEFT = 0,
    MIDDLE = 1,
    RIGHT = 2
};
class InputHandler{
public:
    InputHandler();
    ~InputHandler(){};
    void update();
    
    /// Handling Mouse Event
    void onMouseButtonDown(SDL_Event & event);
    void onMouseMove(SDL_Event & event);
    void onMouseButtonUp(SDL_Event & event);
    bool getMouseButtonState(int buttonNumber);
    Vector2D* getMousePosition();

    ///Handling Keyboard Event
    void onKeyDown();
    void onKeyUp();
    bool isKeyDown(SDL_Scancode key) const;
    
private:
    std::vector<bool> m_mouseButtonStates;
    Vector2D* m_mousePosition;
    Uint8* m_keystates;
};

#endif /* defined(__SDL_Game_SpriteSheet__InputHandler__) */
