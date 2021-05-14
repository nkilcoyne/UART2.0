/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565Bitmap.hpp>
#include <touchgfx/containers/progress_indicators/ImageProgress.hpp>
#include <touchgfx/containers/progress_indicators/TextProgress.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::CircleProgress circleProgress1;
    touchgfx::PainterRGB565Bitmap circleProgress1Painter;
    touchgfx::ImageProgress imageProgress1;
    touchgfx::TextAreaWithOneWildcard textArea2;
    touchgfx::TextAreaWithOneWildcard textArea3;
    touchgfx::TextProgress textProgress1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 29;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];
    static const uint16_t TEXTAREA2_SIZE = 29;
    touchgfx::Unicode::UnicodeChar textArea2Buffer[TEXTAREA2_SIZE];
    static const uint16_t TEXTAREA3_SIZE = 29;
    touchgfx::Unicode::UnicodeChar textArea3Buffer[TEXTAREA3_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN1VIEWBASE_HPP
