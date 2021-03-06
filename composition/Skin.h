#ifndef cad_mobile_application_Skin_h
#define cad_mobile_application_Skin_h


#include <QFrame>
#include <QIcon>
#include <QWidget>


//##################################################################################################
namespace cad_mobile_application
{
class  Skin : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(float animationStage READ animationStage WRITE setAnimationStage)
    Q_PROPERTY(float animationStage2 READ animationStage2 WRITE setAnimationStage2)
    Q_PROPERTY(float animationStage3 READ animationStage3 WRITE setAnimationStage3)
    Q_PROPERTY(float animationStage4 READ animationStage4 WRITE setAnimationStage4)
    //Q_PROPERTY(QString colorSeries          READ colorSeries           WRITE setColorSeries          RESET unsetColorSeries)
public:
    //################################################################################################
    Skin(QWidget *parent=NULL);


    //################################################################################################
    ~Skin();

    int logged;
    float opacityFlag;
    //#################################################################################################
    float animationStage();
    float animationStage2();
    float animationStage3();
    float animationStage4();


public slots:
    //################################################################################################
    void setAnimationStage(float animationStage);
    void setAnimationStage2(float animationStage2);
    void setAnimationStage3(float animationStage3);
    void setAnimationStage4(float animationStage4);
    void animationActivate();
protected:
    //################################################################################################
    virtual void paintEvent(QPaintEvent* event);

    //################################################################################################
    virtual void resizeEvent(QResizeEvent* event);

    //################################################################################################
    virtual void mousePressEvent(QMouseEvent* event);

    //################################################################################################
    virtual void mouseMoveEvent(QMouseEvent* event);

    //################################################################################################
    virtual void mouseReleaseEvent(QMouseEvent* event);

    //################################################################################################


    virtual void showEvent(QShowEvent* event);

signals:
    //################################################################################################
    void clicked();

private:
    struct Private;
    Private* d;
    friend struct Private;
};

}

#endif
