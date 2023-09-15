%module example
class FVector4;
class FVector;
class FQuat;
namespace EAxis{
    class Type;
}
class FRotator;
class FTransform{
public:
FTransform GetRelativeTransformReverse(FTransform);
void SetToRelativeTransform(FTransform);
FVector4 TransformFVector4(FVector4);
FVector4 TransformFVector4NoScale(FVector4);
FVector TransformPosition(FVector);
FVector TransformPositionNoScale(FVector);
FQuat TransformRotation(FQuat);
FQuat InverseTransformRotation(FQuat);
FVector GetScaledAxis(EAxis::Type);
FVector GetUnitAxis(EAxis::Type);
void Mirror(EAxis::Type,EAxis::Type);
FVector GetLocation();
FRotator Rotator(FTransform);
float GetDeterminant();
void SetLocation(FVector);
};
