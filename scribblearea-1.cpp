#include <QImage>
#include <QtWidgets>

#include <iostream>

#include "scribblearea.h"

// Initialization function
ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    // Stablizes the widget definitions
    setAttribute(Qt::WA_StaticContents);

    scribbling = false;
    
    resetImage();
}

void ScribbleArea::ChangeColor(QColor newColor)
{
    myPenColor = newColor;
}

void ScribbleArea::ChangeEmoji(QString emoji)
{
    emojiStamp = emoji;
}

void ScribbleArea::ChangePenWidth(int width)
{
    myPenWidth = width;
}

// Function for when the user presses/holds down left click button
void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    // Sets the last point to current position and changes scribbling variable
    // to true when left mouse click button is held down
    if (event -> button() == Qt::LeftButton){
        lastPoint = event -> pos();
        scribbling = true;
    }

    // Sets the last point to current position
    if (event -> button() == Qt::RightButton){
        drawText(event -> pos());
    }
}

// Function for when the user releases left click button
void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    // Sets the last point to current position and changes scribbling variable
    // to false when left mouse click is released
    if (event -> button() == Qt::LeftButton && scribbling){
        drawLineTo(event -> pos());
        scribbling = false;

    }
}

// Function for when the user moves mouse while holding down left click button
void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    // Sets the last point to current postion
    if (event -> buttons() & Qt::LeftButton && scribbling){
        drawLineTo(event -> pos());
    }

}

// Enables the user to start painting the canvas
void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // Sets a rectangle area that gets updated and repainted
    QRect dirtyRect = event -> rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    resetImage();
   
    // Emitting a signal to alert that the widget will be updated to be repainted
    update();

    QWidget::resizeEvent(event);
}

// Function used for initialization and resizing event
void ScribbleArea::resetImage()
{
    // Setting the canvas size
    QSize widgetSize = QSize(width(), height());

    // Creating the image canvas as a 100% size in the widget
    QImage newImage(widgetSize, QImage::Format_RGB32);

    // Setting background to white
    newImage.fill(qRgb(255, 255, 255));
    image = newImage;
}

// Function that updates the last point to the current end point so 
// that it tracks the position of the mouse cursor
void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);

// Setting the style of pen
    painter.setPen(QPen(myPenColor, myPenWidth,
                        Qt::SolidLine,
                        Qt::RoundCap,
                        Qt::RoundJoin));

    painter.drawLine(lastPoint, endPoint);

    update();

    lastPoint = endPoint;
}

// Setting the text emoji's font style
void ScribbleArea::drawText(const QPoint &at)
{
    QPainter painter(&image);
    QFont sansFont("Helvetica [Cronyx]", 30, QFont::Bold);
    painter.setFont(sansFont);
    painter.drawText(at, emojiStamp);
    update();
}
