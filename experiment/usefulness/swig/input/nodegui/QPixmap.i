%module example

class QRect;
class QString;
namespace Qt{
    class AspectRatioMode;
    class TransformationMode;
};
class QPixmap{
public:
bool load(const QString &);
bool loadFromDataWithFormat(const QString &,unsigned int,const char*);
bool loadFromData(const QString &,unsigned int);
bool save(const QString &);
bool saveDataWithFormat(const QString &,const char*);
QPixmap scaled(int,int,Qt::AspectRatioMode,Qt::TransformationMode);
int width();
int height();
};