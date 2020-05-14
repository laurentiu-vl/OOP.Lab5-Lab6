#include <iostream>
#include "Controller.h"

class UI : public Controller
{
public:

    /**
     * @fn	UI::UI();
     *
     * @brief	Default constructor
     *
     * @author	Laurentiu
     * @date	04-May-20
     */
    UI();
    
    ~UI();

    /**
     * @fn	void UI::program();
     *
     * @brief	Programs this 
     *
     * @author	Laurentiu
     * @date	04-May-20
     */
    void program(); ///programul care contine tot UI-ul

};