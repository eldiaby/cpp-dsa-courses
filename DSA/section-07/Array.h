
class Array
{
private:
    /* data */
    int *ptr;
public:
int size;
int length;
    Array(int size);
    void display() const;
    void append(const int item);
    void insert(const int index, const int item);
    void delete_index(const int index);
    int index_of(const int item) const;
    int binary_search(int item)const;
    int get_max()const ;
    int get_min()const ;
    int get_sum()const ;
    void swap(int , int);
    void reverse();
    ~Array();
};