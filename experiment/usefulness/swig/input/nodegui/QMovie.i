%module example
class QString;
class QByteArray;
class MovieState;
class QPixmap;
class QSize;
class QMoive{
public:
    void setFileName(const QString &fileName);
    QString fileName();
    void setFormat(const QByteArray &format);
    QByteArray format();
    void setScaledSize(const QSize &size);
    void start();
    void stop();
    void setPaused(bool);
    void jumpToNextFrame();
    bool jumpToFrame(int frameNumber);
    MovieState state();
    int currentFrameNumber();
    QPixmap currentPixmap();
    void setData(const QByteArray &format);
    int frameCount();
};