#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>

class ScribbleArea : public QWidget
{
    friend class MainWindow;
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);
    void ChangeColor(QColor newColor);
    void ChangeEmoji(QString emojiStamp);
    void ChangePenWidth(int width);

signals:

public slots:

    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    void resetImage();
    void drawLineTo(const QPoint &endPoint);
    void drawText(const QPoint &at);

    QImage image;

    // State handling variable to check if the user is holding down left mouse click to draw
    bool scribbling;

    // Initializes the pen's default width and color
    int myPenWidth = 2;
    QColor myPenColor = Qt::white;

    // Initializes the stamp to be empty
    QString emojiStamp = "";
    
    // Memorizes the last point of the action
    QPoint lastPoint;
};

#endif // SCRIBBLEAREA_H
