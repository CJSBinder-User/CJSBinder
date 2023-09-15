%module example

class FPlane;
class FVector{
public:
float BitwiseOr(FVector);
FVector Addition(FVector);
FVector Subtraction(FVector);
FVector Multiply(float);
FVector Division(float);
bool Equality(float);
float GetMax();
float GetMin();
float GetAbsMin();
FVector GridSnap(float);
FVector BoundToCube(float);
FVector GetClampedToSize(float,float);
FVector GetClampedToSize2D(float,float);
FVector MirrorByVector(FVector);
FVector MirrorByPlane(FPlane);

};
