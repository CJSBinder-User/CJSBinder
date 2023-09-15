template<typename T>
class BaseObjectPtr;
class Environment;
template<typename T>
class MaybeLocal;
class Value;
class HistogramBase{
public:
    long long Count();
    long long Min();
    long long Max();
    double Mean();
    long long Exceeds();
    double Stddev();
    long long Percentile(double);
    void Reset();
    void RecordDelta();
    void Record(long long);
    double Add(const HistogramBase&);
};