/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

Screen1ViewBase::Screen1ViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    boxWithBorder1.setPosition(0, 0, 480, 272);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(58, 58, 58));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(68, 68, 68));
    boxWithBorder1.setBorderSize(0);

    boxWithBorder2.setPosition(0, 9, 306, 40);
    boxWithBorder2.setColor(touchgfx::Color::getColorFrom24BitRGB(156, 156, 156));
    boxWithBorder2.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 176, 241));
    boxWithBorder2.setBorderSize(2);

    textArea1.setPosition(3, 16, 448, 33);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1Buffer[0] = 0;
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    circleProgress1.setXY(227, 74);
    circleProgress1.setProgressIndicatorPosition(0, 0, 184, 184);
    circleProgress1.setRange(0, 10000);
    circleProgress1.setCenter(92, 92);
    circleProgress1.setRadius(90);
    circleProgress1.setLineWidth(0);
    circleProgress1.setStartEndAngle(225, 495);
    circleProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_LARGE_CIRCLE_INDICATOR_BG_LINE_FULL_ID));
    circleProgress1Painter.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_LARGE_CIRCLE_INDICATOR_FILL_LINE_FULL_ID));
    circleProgress1.setPainter(circleProgress1Painter);
    circleProgress1.setValue(10000);

    imageProgress1.setXY(16, 233);
    imageProgress1.setProgressIndicatorPosition(2, 2, 180, 16);
    imageProgress1.setRange(0, 100);
    imageProgress1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    imageProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    imageProgress1.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_NORMAL_HORIZONTAL_ID);
    imageProgress1.setValue(100);
    imageProgress1.setAnchorAtZero(false);

    textArea2.setPosition(253, 157, 120, 18);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2Buffer[0] = 0;
    textArea2.setWildcard(textArea2Buffer);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    textArea3.setPosition(16, 207, 184, 20);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3Buffer[0] = 0;
    textArea3.setWildcard(textArea3Buffer);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));

    textArea4.setXY(22, 117);
    textArea4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));

    circleProgress2.setXY(16, 62);
    circleProgress2.setProgressIndicatorPosition(0, 0, 54, 54);
    circleProgress2.setRange(0, 20, 20, 0);
    circleProgress2.setCenter(27, 27);
    circleProgress2.setRadius(25);
    circleProgress2.setLineWidth(0);
    circleProgress2.setStartEndAngle(0, 360);
    circleProgress2.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_FULL_ID));
    circleProgress2Painter.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_SMALL_CIRCLE_INDICATOR_FILL_FULL_ID));
    circleProgress2.setPainter(circleProgress2Painter);
    circleProgress2.setValue(20);

    textArea5.setPosition(18, 73, 51, 32);
    textArea5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    textArea5.setLinespacing(0);
    textArea5Buffer[0] = 0;
    textArea5.setWildcard(textArea5Buffer);
    textArea5.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));

    add(boxWithBorder1);
    add(boxWithBorder2);
    add(textArea1);
    add(circleProgress1);
    add(imageProgress1);
    add(textArea2);
    add(textArea3);
    add(textArea4);
    add(circleProgress2);
    add(textArea5);
}

void Screen1ViewBase::setupScreen()
{

}
