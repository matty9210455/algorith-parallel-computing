#ifndef CLASSI_HPP
#define CLASSI_HPP

#include<vector>
#include<string>


struct POINT{
    int col;
    int car;
    POINT(int _col, int _car) : col(_col) ,car(_car) {};
    virtual ~POINT(){};
};




class ROW{
private:
    int n_row;
    std::vector<POINT> row;
public:
    ROW(){};
    ROW(int _n_row, POINT p) : n_row(_n_row) { row.push_back(p);};
    void push_back(POINT p){ row.push_back(p);}
    int get_nrow() const {return n_row;};
    int get_nrow() {return n_row;};
    void change_nrow(int _nrow){n_row=_nrow;};
    std::vector<POINT>::iterator begin(){return row.begin();};
    std::vector<POINT>::iterator  end(){return row.end();};
    void erase(std::vector<POINT>::iterator p){row.erase(p);};
    void insert(std::vector<POINT>::iterator it, POINT & aux){ row.insert(it,aux);}
    int size() {return row.size();};
    bool empty() {return row.empty();};
    POINT operator [](int i){return row[i];}
};



class MATRIX{
private:
   std::vector<ROW> data;
   int N_row=0;
   int N_col=0;
   bool move_blue=true;
public:
   MATRIX(std::string input);
   void print();
   void update();
   int size(){return data.size();};
   void print(int it);

};

#endif // CLASSI_HPP
