class FBox2D;
class FVector2D;
class FBox2D{
public:
    bool Equality(FBox2D);
    bool Inequality(FBox2D);
    FBox2D Addition(FVector2D);
    void set_Item(int);
    float ComputeSquaredDistanceToPoint(FVector2D);
    FBox2D ExpandBy(float);
    float GetArea();
    FVector2D GetCenter();
    void GetCenterAndExtents(FVector2D,FVector2D);
    FVector2D GetClosestPointTo(FVector2D);
    FVector2D GetExtent();
    FVector2D GetSize();
    void Init();
    bool Intersect(FBox2D);
    bool IsInside(FVector2D);
};

