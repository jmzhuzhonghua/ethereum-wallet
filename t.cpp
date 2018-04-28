class A {

public:
   int m_x;
   int m_y;
   
public:   
   int get() const {
      return m_x;
   }
   void set(const int& x) {
      m_x = x;
   }
};
