    #include<string>
    using namespace std;
    class account
    {
    public:

        account(int);
        void addamount(int);
        void redrawnamount(int);
        int checkamount();
    private:
        int initial_amt,add_amt,redrawn;
    };
