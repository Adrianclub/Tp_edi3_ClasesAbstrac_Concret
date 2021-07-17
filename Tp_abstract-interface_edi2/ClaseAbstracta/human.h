#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
class Human{
public:

    Human();
    virtual~Human();
    virtual void toLive() = 0;
    void eat();

};


#endif // HUMAN_H_INCLUDED
