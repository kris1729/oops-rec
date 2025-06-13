// agr kisi function ko call krte hai to uh stackk memory me jata hai fir jab exacuate ho jata
// hai to fir main me switch ho jata hai

// baar baar memory index switching ho rhi hai ek chhote se fxn ke bhi wajah se

// so write in fxn in main in inline from

#include <iostream>
using namespace std;
inline int addOne(int num)
{
    return num + 1;
}
int main()
{

    int n = 122;

    cout << addOne(n) << endl;
    cout << addOne(n) << endl;
    cout << addOne(n) << endl;
    cout << addOne(n) << endl;
    cout << addOne(n) << endl;
    cout << addOne(n) << endl;
}

// function calling overhadding kam ho jati hai ho jye

// ab compiler ne sari fxn calling ko hata ke waha waha waha pe function ki working
// puri puri likh diya hai (code line bad  jayegi(size of code ))
// no use for more size of function



// fxn calling ki jagh put kr dega fxn implimention ko