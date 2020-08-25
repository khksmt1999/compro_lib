template <typename T>
struct BIT{
    int n;
    vector<T> d;

    BIT(int sz){
        n = sz+10;
        d.resize(n);
    }

    void add(int i, T x){

        while(i<=n){
            d[i] += x;
            i += i&-i;
        }
    }

    T getSum(int i){
        T ret = 0;

        while(i>0){
            ret += d[i];
            i -= i&-i;
        }
        return ret;
    }
};
