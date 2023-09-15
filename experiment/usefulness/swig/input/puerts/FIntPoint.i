%module example

class FString;
class FIntPoint{
public:
bool Equality(FIntPoint);
bool Inequality(FIntPoint);
FIntPoint Multiply(int);
FIntPoint Division(int);
FIntPoint Addition(FIntPoint);
FIntPoint Substraction(FIntPoint);
void set_Item(int);
int get_Item(int);
FIntPoint ComponentMin(FIntPoint);
FIntPoint ComponentMax(FIntPoint);
int GetMax();
int GetMin();
int Size();
int SizeSquared();
FString ToString();
};
