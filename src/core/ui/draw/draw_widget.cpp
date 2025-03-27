#pragma once

#include "../widget.cpp"

using namespace widget;
using namespace form;
using namespace size;
using namespace theme;

namespace draw_widget{
    void draw_shape(WIDGET* widget, void* shapeForm){

    }

    void draw_folder(WIDGET* widget, THEME* theme, void* shapeForm){
        SIZE* sizeHeader = new SIZE();
        int shapeHeaderWidth  = 100;
        int shapeHeaderHeight  = 100;

        POSITION* positionHeader = new POSITION();
        int shapeHeaderPositionX = 0;
        int shapeHeaderPositionY = 0;
        int shapeHeaderPositionZ = 0;

        set_size(sizeHeader, shapeHeaderWidth, shapeHeaderHeight);
        set_position(positionHeader, shapeHeaderPositionX, shapeHeaderPositionY, shapeHeaderPositionZ);
        FORM* header = new FORM();

        void* shape = shapeForm;
        set_form(header, sizeHeader, positionHeader, theme, shapeForm);

        add_form(widget, header);
        
    }
}