
class PixelMetric;
class QWidget;
class QStyle{
public:
    int pixelMetric(PixelMetric);
    void polish(QWidget *widget);
    void unpolish(QWidget *widget);
};