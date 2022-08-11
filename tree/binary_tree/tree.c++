template<typename T>
class btnode {
    public:
    T data;
    btnode *left;
    btnode *right;
    btnode(T data){
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
    btnode(){
        delete left;
        delete right;
    }
};