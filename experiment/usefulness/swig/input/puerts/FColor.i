%module example
class FLinearColor;
class FString;
class FColor{
public:
int DWColor();
bool Equality(FColor);
bool Inequality(FColor);
FLinearColor FromRGBE();
FColor WithAlpha(unsigned char);
FLinearColor ReinterpretAsLinear();
FString ToHex();
FString  ToString();
bool InitFromString(FString);
unsigned int ToPackedARGB();
unsigned intToPackedABGR();
unsigned int ToPackedRGBA();
unsigned int ToPackedBGRA();
};
