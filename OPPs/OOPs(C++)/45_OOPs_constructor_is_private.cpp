// can i make constructor ko private (INTERVIEW) 

// "YES" , ye comile ho jayega but  but 
// main me ya kahi koi object inilitiosion na kr paye 

// friend class me bana lege

//constructor = ctor    destructor = dtor  (new name)

#include<iostream>
using namespace std;

class Box{
  private:
    int size;
  Box(int sz):size(sz){}
  public:

  int GetSize()const{
     return this->size;
  }
  
  friend class BoxFect;
};


class BoxFect{
    private:
    int countOfbox;

    public:
    // ye box banyega aur unka count bhi store krega
    Box GetBox(int x){
        countOfbox++;
        return Box(x);
    }


};

int main(){

    BoxFect bfect;
   Box b =  bfect.GetBox(5);

   cout<<b.GetSize()<<endl;
}



// if want for desining (Singleton Class)

// home Work...(read about constructor)
// ("constructor c++ microshoft")





