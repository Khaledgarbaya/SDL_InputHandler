# SDL_InputHandler
a Simple c++ Input Handler for SDL , it supports mouse and keyboard

# Getting Started

Download SDL From https://www.libsdl.org/download-2.0.php and include it in your project.

Include the InputHandler.h in your project .

in your game loop make sure to call the update method of the inputHandler.

## Using InputHandler
### Keyboard	
	if(InputHandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT))
   	{
     //do something here
   	}
### Mouse
    if(TheInputHandler::Instance()->getMouseButtonState(LEFT))
    {
        // 0 if the mouse is up 1 if down
    }
    //get the current mouse position
    Vector2D* vec = TheInputHandler::Instance()->getMousePosition();