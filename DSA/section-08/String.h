class String
{
private:
    /* data */
    char *ptr;
    int length;
public:
    String();
    int get_length();
    char *get_upper_case();
    ~String();
};
