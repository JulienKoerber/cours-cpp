#ifndef PEN_H
#define PEN_H

class Pen 
{
    private:
        int x, y; //1ère étape (les constantes)
        bool state;

    public:
        Pen(); // 3ème étape (les constructeurs)
        Pen(int, int);
        virtual ~Pen() = default;

        void up(); //2ème étape (les actions possibles)
        void down();
        void move(int dx, int dy);

        bool getState() const; //les getters pour récupérer les états
        int getX() const;
        int getY() const;

};

#endif