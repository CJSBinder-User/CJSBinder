
namespace Qt{
    class GlobalColor;
    class PenStyle;
    class PenCapStyle;
};
class QColor;
class QPen{
public:
    void setGlobalColor(Qt::GlobalColor);
    void setColort(const QColor &format);
    void setScaledSize(Qt::PenStyle);
    Qt::PenStyle style();
    void setCapStyle(Qt::PenCapStyle);
    void setWidth(int);
};