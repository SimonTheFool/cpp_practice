#include<iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;

    box(const char cmaker[40], float cheight, float cwidth, float clength){
        strcpy(maker,cmaker);
        height = cheight;
        width = cwidth;
        length = clength;
        volume = 0;
    }
};


void display(const box *);
void volume(box *);

int main(){
    box boxa = box("abcd",30,40,50);
    display(&boxa);
    volume(&boxa);
    display(&boxa);

}

void display(const box * b){
    using namespace std;
    cout<<"maker name is: "<<b->maker<<endl;
    cout<<"height: "<<b->height<<endl;
    cout<<"width: "<<b->width<<endl;
    cout<<"length: "<<b->length<<endl;
    if (b->volume==0)
    {
        cout<<"volume not calculated yet!\n";
    }
    else
    {
        cout<<"volume: "<<b->volume<<endl;
    }
    
    
}

void volume(box * b){
    b->volume = b->height*b->length*b->width;
    std::cout<<"volume calculated.\n";
}