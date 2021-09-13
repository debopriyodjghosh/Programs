//Virtual function...

#include<iostream>
using namespace std;

class Shape{
  protected:
      double area;
  public:
      void displayArea(){
         cout<<"\nArea= "<<area<<endl;
      }
      virtual void calculateArea(){

      }
};

 class rectangle: public Shape{
  private:
      double len,bre;
  public:
      rectangle(double l,double b){
        len=l;
        bre=b;
      }
      void calculateArea(){
        area=len*bre;
      }
  };
class triangle: public Shape{
  private:
      double len,hei;
  public:
      triangle(double l,double h){
        len=l;
        hei=h;
      }
      void calculateArea(){
        area=len*hei*0.5;
      }
  };


int main(){
  rectangle r(3.12,5.00);
  r.calculateArea();
  r.displayArea();
  triangle t(3.12,5.00);
  t.calculateArea();
  t.displayArea();
   return 0;
}
