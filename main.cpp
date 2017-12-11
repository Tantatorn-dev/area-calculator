#include <iostream>

using namespace std;

class circle{

    public:
        circle(float x){
            setRadius(x);
        }

        void setRadius(float r){
            radius=r;
        }

        float area(){
            return pi *radius * radius;
        }


    private:
        float pi = 3.14;
        float radius;

};

class rectangle{

    public:
        rectangle(float a,float b){
            setLength1(a);
            setLength2(b);
        }

        void setLength1(float A){
            length1=A;
        }

        void setLength2(float B){
            length2=B;
        }

        float area(){
            return length1*length2;
        }

    private:
        float length1;
        float length2;

};

class triangle{

    public:
         triangle(float b,float h){
             setBaseLength(b);
             setHeight(h);
         }

         void setBaseLength(float B){
             BaseLength=B;
         }

         void setHeight(float H){
             Height=H;
         }

         float area(){
             return 0.5*BaseLength*Height;
             }

    private:
          float BaseLength;
          float Height;

};

void shapeSelection(char s){
    if(s=='c'){
        cout << "enter a radius: ";
        float r;
        cin>> r;
        circle myCircle(r);
        cout << "Your area is "<< myCircle.area()<<endl;
    }
    else if(s=='r'){
            cout << "enter a first length: ";
            float fl;
            cin >> fl;
            cout << "enter a second length: ";
            float sl;
            cin >> sl;
            rectangle myRectangle(fl,sl);
            cout << "Your area is " << myRectangle.area()<<endl;
    }
    else if(s=='t'){
            cout << "enter a base length: ";
            float bl;
            cin >> bl;
            cout << "enter a height: ";
            float h;
            cin >> h;
            triangle myTriangle(bl,h);
            cout << "Your area is "<< myTriangle.area()<<endl;
    }
    else{
        cout<<"ERROR";
    }
}


int main()
{
    bool ohMan=true;
    while(ohMan){
        char selection;
        cout << "What shape do you want to compute area?(c for circle, r for rectangle, t for triangle): ";
        cin >> selection;
        shapeSelection(selection);

        //ask the user to continue
        char a;
        cout << "only e for Exit/Other key to continue: ";
        cin >> a;
        if( a == 'e'){
            ohMan = false;
        }
    }


    return 0;
}
