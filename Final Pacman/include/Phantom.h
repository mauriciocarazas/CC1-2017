#ifndef PHANTOM_H
#define PHANTOM_H


class Phantom
{
    public:
        Phantom();
        Phantom(int, int);
        virtual void mov()=0;

    protected:
        int f_dir;
        int x,y;

};

class P_1 : Phantom
{
public:
    P_1();
    P_1(int, int);
    virtual mov() override;
};
class P_2 : Phantom
{
    P_2();
    P_2(int, int);
    virtual mov() override;

};

#endif // PHANTOM_H
