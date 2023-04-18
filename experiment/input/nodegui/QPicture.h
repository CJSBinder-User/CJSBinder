
class QRect;
class QString;
class QPicture{
public:
void setBoundingRect(const QRect &);
QRect boundingRect();
bool isNull();
bool load(const QString &);
bool save(const QString &);
unsigned int size();

};